// #define PROBLEM_1463
#ifdef PROBLEM_1463

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	if(!(cin >> x)) return 0;

	vector<int> dp(x+1);

	dp[1] = 0;

	for (int i = 2; i <= x; ++i) {
		dp[i] = dp[i - 1] + 1; // 모든 경우에 가능
		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
	}

	/*
		1 -> 0
		2 -> min(1, (dp[1]:0 + 1)) = 1
		3 -> (dp[1]:0 + 1) = 1
		4 -> min(2, (dp[2]:0 + 1)) = 2
		5 -> min(3, ) = 3
		6 -> min(4, 2) = 2
		
		!! 5를 만드는 최소는 3이다.
		6에서 1을 빼면 5를 만들 수 있다
		5는 3번의 연산으로 1을 만들 수 있다
		즉, 6을 1로 만들 때, 6-1에 한 번, 5를 1로 3번
		총 4번으로 만들 수 있다
		dp[i] = 4

		다르게, 6을 2로 나눈다면, 3이다.
		3은 1번의 연산으로 1을 만들 수 있다
		6/2/3 -> 2번의 연산으로 1을 만들 수 있다
		dp[i] = 2 -> min 을 사용하므로 대체된다

		다르게 3으로 나눈다면, 2이다
		2는 1번의 연산으로 1을 만들 수 있다
		6/3/2 -> 2번의 연산으로 1을 만들 수 있다
		dp[i] = 2

		이게 바로 동적 계획법!
		미리 계산을 해서 실어두는 것이다. KV cache도 비슷하지 않나
		미리 계산해서 중복된 하위 재연산을 캐싱하는 것..!

		10 이라면
		9를 1로 만들 때는 2번
		10 -1 9 -> 3번
		10 /2 = 5 5를 1로 만들 때는 3번 -> 총 4번
		10 /3 -> continue

		결국 3번!
	*/

	cout << dp[x];

	return 0;
}

#endif