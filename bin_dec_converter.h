#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int BinToDec (vector<int> decimal);
int LargestPowTwo (int num);
vector<int> DecToBin (int binary);

class BinaryException : public exception {
	public:
		const char* what() {
			return "Invalid binary number!\n";
		}
};

class DecimalException : public exception {
	public:
		const char* what() {
			return "Please enter a positive number!\n";
		}
};
