// #define PROBLEM_2552
#ifdef PROBLEM_2552

#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	if (!(cin >> n)) return 0;
	int j;

	for (int i = 1; i <= 2 * n; ++i) {
		// abs(n-i) 개의 ' '
		// n개 중 나머지 공간 n - space 개의 '*'
		
		int space = abs(n - i);
		int star = n - space;

		for (j = 0; j < space; ++j) cout << ' ';
		for (j = 0; j < star; ++j) cout << '*';
		cout << "\n";
	}

	return 0;
}

#endif