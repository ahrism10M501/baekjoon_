#ifdef PROBLEM_10818

#include <iostream>

using namespace std;

int main(void) {
	int n;
	int min_num = 1000001;
	int max_num = -1000001;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		if (num < min_num) {
			min_num = num;
		}
		if (num > max_num) {
			max_num = num;
		}
	}
	cout << min_num << ' ' << max_num << '\n';
	return 0;
}

#endif