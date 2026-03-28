#define PROBLEM_11057
#ifdef PROBLEM_11057

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	if (!(cin >> N)) return 0;

	vector<vector<int>> dp(N + 1, vector<int>(10, 0));

	for (int j = 0; j <= 9; ++j) {
		dp[1][j] = 1;
	}

	for (int i = 2; i <= N; ++i) {
		for (int j = 0; j <= 9; ++j) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j] % 10007;
			}
			else {
				dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 10007;
			}
		}
	}

	int result = 0;
	for (int j = 0; j <= 9; ++j) {
		result = (result + dp[N][j]) % 10007;
	}

	cout << result << "\n";

	return 0;
}

#endif