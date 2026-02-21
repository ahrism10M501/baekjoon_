#define PROBLEM_10844
#ifdef PROBLEM_10844

#include <iostream>
#include <vector>

int main(void) {

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N; // 문제 설명이 부실한데, N은 자릿수를 의미한다 2면 10~99까지의 수
	if (!(std::cin >> N)) return 0;
	
	// 1-> 9, 2->17, 3->32
	std::vector<std::vector<long long>> dp(N + 1, std::vector<long long>(10)); // n+1 개의 자릿수, 10개의 숫자(0~9)로 초기화

	for (int i = 1; i <= 9; ++i) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= N; ++i) {
		for (int j = 0; j <= 9; ++j) {
			if (j == 0) {
				// 이게 0으로 시작하면 계단수가 아니라는데
				// N의 자리가 0이라는건지, 일의 자리가 0이라는건지
				dp[i][j] = dp[i - 1][1] % 1000000000;
			} else if (j == 9) {
				// 이전 경우의 수에서 내게로 오는 경우의 수만 더한ke
				dp[i][j] = dp[i - 1][8] % 1000000000;
			} else {
				// 마찬가지로, 내 숫자가 587 이면, 이전에 6으로 끝나는 수와 8로 끝나는 수에서 7로 오는 경로를 더하면 된다!
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
			}
		}
	}

	long long result = 0;
	for (int i = 0; i <= 9; ++i) {
		result = (result + dp[N][i]) % 1000000000;
	}

	std::cout << result << std::endl;
}

#endif