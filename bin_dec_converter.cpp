using namespace std;
#include "bin_dec_converter.h"

int BinToDec (vector<int> binary){
	int result = 0;

	for (int i = 0; i < binary.size(); i++){
		if (!((binary[i] == 0) || (binary[i] == 1))){
			throw BinaryException();
		}
	}
	for (int i = 0; i < binary.size(); i++){
		if (binary[i] == 1){
			result = result + pow(2, binary.size()-1-i);
		}
	}
	return result;
}

int LargestPowTwo (int num){
	if (num < 1){
		throw DecimalException();
	}
	int i = 0;
	while (pow(2, i) <= num){
		i++;
	}
	return i-1;

}

vector<int> DecToBin (int decimal){
	if (decimal == 0){
		vector<int> retZero = {0};
		return retZero;
	}
	int largestPow = LargestPowTwo(decimal);
	int remaining = decimal;
	vector<int> binary;
	for (int i = 0; i <= largestPow; i++){
		if (remaining - pow(2, largestPow-i) >= 0){
			remaining = remaining - pow(2, largestPow-i);
			binary.push_back(1);
		}
		else {
			binary.push_back(0);
		}
	}
	return binary;
}
