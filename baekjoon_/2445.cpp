// #define PROBLEM_2445
#ifdef PROBLEM_2445

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void) {
	int n;
	if(!(cin >> n)) return 0;
	
	/*
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < i; ++j) cout << "*";
		for (int j = 2*n; j > 2*i; --j) cout << " ";
		for (int j = 0; j < i; ++j) cout << "*";
		cout << "\n";
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = n; j > i; --j) cout << "*";
		for (int j = 0; j < 2 * i; ++j) cout << " ";
		for (int j = n; j > i; --j) cout << "*";
		cout << "\n";
	}
	*/

	// more beautiful
	for (int i = 1; i < 2 * n; ++i) {
		int st = n - abs(n - i);
		int sp = 2 * (n - st);

		cout << string(st, '*') << string(sp, ' ') << string(st, '*') << "\n";
	}

	return 0;
}

#endif