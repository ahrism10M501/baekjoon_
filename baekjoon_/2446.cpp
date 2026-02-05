// #define PROBLEM_2446
#ifdef PROBLEM_2446

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	if (!(cin >> n)) return 0;

	for (int i = 1; i < 2 * n; ++i) {
		int temp = abs(n - i);
		int st = 2 * temp + 1;
		int sp = n - temp - 1;

		cout << string(sp, ' ') << string(st, '*') << "\n";
	}

	return 0;
}

#endif