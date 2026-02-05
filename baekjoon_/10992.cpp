#define PROBLEM_10992
#ifdef PROBLEM_10992

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	if (!(cin >> n)) return 0;
	
	if(n!=1) cout << string(n - 1, ' ') << "*\n";
	for (int i = 2; i < n; ++i) {
		int space = n - i;
		int inner_space = 2 * i - 3;

		cout << string(space, ' ') << "*"
			<< string(inner_space, ' ') << "*\n";
	}
	cout << string(2*n-1, '*');
	return 0;
}

#endif