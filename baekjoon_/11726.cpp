#define PROBLEM_11726
#ifdef PROBLEM_11726

// 2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램 작성
// 1->1, 2->2  1, (1+1, 2)
// 3->3, 4->5 (1+1+1, 1+2, 2+1), (1+1+1+1, 1+1+2, 1+2+1, 2+1+1, 2+2)
// 5->8, 6->13
// 7->21, 8->34
// 9->55 이거 피보나치?
// 피보나치니까, 쉽긴한데, 왜인지는 모르겠다.
// 아! 그래, 1칸이 남거나 2칸이 남거나 둘 중 하나니까
// 마지막을 채우기 위한 경우의 수는 1칸일 때 n-1의 모든 경우의 수
// 2칸 일때는 n-2의 모든 경우의 수다
// n-1과 n-2는 서로 겹치지 않는다! 왜? 마지막이 다르니까. 1x2, 2x1 블록으로만 채우니까
//


#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	if (!(cin >> x)) return 0;
	vector<int> vec(x+2);
	vec[1] = 1;
	vec[2] = 2;

	for (int i = 3; i <= x; ++i) {
		vec[i] = (vec[i - 1] + vec[i - 2]) % 10007;
	}

	cout << vec[x];

	return 0;
}

#endif