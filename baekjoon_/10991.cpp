// #define PROBLEM_10991
#ifdef PROBLEM_10991

#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	if (!(cin >> n)) return 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = n; j > i; --j) cout << " ";
		for (int j = 1; j < i; ++j) cout << "* ";
		cout << "*";
		if (i < n) cout << "\n";
	}
	return 0;
}

#endif