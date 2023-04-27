/* BlindFix */

// https://leetcode.com/problems/integer-to-roman/

#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		#define Mn 1000
		#define Dn 500
		#define Cn 100
		#define Ln 50
		#define Xn 10
		#define Vn 5
		#define In 1

		string res = "";

		while (num >= Mn) {
			num -= Mn;
			res += "M";
		}

		if (num >= Mn - Cn) {
			num -= Mn - Cn;
			res += "CM";
		}

		while (num >= Dn) {
			num -= Dn;
			res += "D";
		}

		if (num >= Dn - Cn) {
			num -= Dn - Cn;
			res += "CD";
		}

		while (num >= Cn) {
			num -= Cn;
			res += "C";
		}

		if (num >= Cn - Xn) {
			num -= Cn - Xn;
			res += "XC";
		}

		while (num >= Ln) {
			num -= Ln;
			res += "L";
		}

		if (num >= Ln - Xn) {
			num -= Ln - Xn;
			res += "XL";
		}

		while (num >= Xn) {
			num -= Xn;
			res += "X";
		}

		if (num >= Xn - In) {
			num -= Xn - In;
			res += "IX";
		}

		while (num >= Vn) {
			num -= Vn;
			res += "V";
		}

		if (num >= Vn - In) {
			num -= Vn - In;
			res += "IV";
		}

		while (num >= In) {
			num -= In;
			res += "I";
		}

		return res;
	}
};

int main() {
	class Solution a;

	int x;

	cin >> x;

	while (x != -1) {
		cout << x << "==" << a.intToRoman(x) << endl;
		cin >> x;
	}
}
