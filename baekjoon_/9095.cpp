// #define PROBLEM_9095
#ifdef PROBLEM_9095

#include <iostream>
#include <vector>

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	if (!(std::cin >> t)) return 0;

	int arr[12];
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	for (int j = 4; j <= 11; ++j) {
		arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
	}

	for (int i = 0; i < t; ++i) {
		int n;
		if (!(std::cin >> n)) return 0;
		std::cout << arr[n] << "\n";
	}

	return 0;
}

#endif