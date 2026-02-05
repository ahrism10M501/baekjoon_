#ifdef PROBLEM_8393

#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	int sum = 0;
	for(int i=1; i<=n; ++i) {
		sum += i;
	}
	cout << sum << '\n';
	return 0;
}

#endif