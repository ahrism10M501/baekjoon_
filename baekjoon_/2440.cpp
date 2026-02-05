#ifdef PROBLEM_2440

#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int k = n; k > i; --k) cout << '*';
		cout << '\n';
	}
	return 0;
}

#endif