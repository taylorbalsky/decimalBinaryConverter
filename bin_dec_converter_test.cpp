using namespace std;
#include "bin_dec_converter.h"

int main () {

	//test bad binary input
	vector<int> badBin = {1, 0, 2, 3};
	try {
		int invalidDec = BinToDec(badBin);
	} catch (BinaryException &e) {
		cout << "Should get binary exception: " << e.what() << endl;
	}

	//test bad decimal input
	int badDec = -5;
	try {
		vector<int> invalidDec = DecToBin(badDec);
	} catch (DecimalException &e) {
		cout << "Should get decimal exception: " << e.what() << endl;
	}
	//test 0 decimal input
	vector<int> zeroBinVector = DecToBin(0);
	cout << "Should get 0: ";
	for (int i = 0; i < zeroBinVector.size(); i++){
		cout << zeroBinVector[i];
	}
	cout << endl;

	//test 0 binary input
	vector<int> zeroVector = {0};
	cout << "Should get 0: " << BinToDec(zeroVector) << endl;

	//test power of 2 decimal input
	vector<int> thirtyTwoBinVector = DecToBin(32);
	cout << "Should get 100000: ";
	for (int i = 0; i < thirtyTwoBinVector.size(); i++){
		cout << thirtyTwoBinVector[i];
	}
	cout << endl;

	//test power of 2 binary input
	vector<int> sixteenVector = {1, 0, 0, 0, 0};
	cout << "Should get 16: " << BinToDec(sixteenVector) << endl;

	//test valid decimal input
	vector<int> fiftySevenBinVector = DecToBin(57);
	cout << "Should get 111001: ";
	for (int i = 0; i < fiftySevenBinVector.size(); i++){
		cout << fiftySevenBinVector[i];
	}
	cout << endl;

	//test valid binary input
	vector<int> fortyFourVector = {1, 0, 1, 1, 0, 0};
	cout << "Should get 44: " << BinToDec(fortyFourVector) << endl;


}
