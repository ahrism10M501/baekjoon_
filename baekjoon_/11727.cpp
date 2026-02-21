// #define PROBLEM_11727
#ifdef PROBLEM_11727

#include <iostream>
#include <vector>

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int x;
	if(!(std::cin >> x)) return 0;
	std::vector <int> vec(x + 2);

	vec[1] = 1;
	vec[2] = 3;

	// 11726에서 보았듯이 a-1과 a-2의 경우의 수를 더하면 된다.
	// 그런데, 11727에서는 2x1 타일 뿐만 아니라 2x2 타일도 존재한다.
	// 즉, a_t = a_(t-1) + a_(t-2) + a_(t-2) = a_(t-1) + 2*a_(t-2)가 된다.
	// 예를 들어 a5 = a4 + a3(2x1) + a3(2x2) = a4 + 2*a3 이다
	// 만약 단위 블록이 3도 추가된다면, a_t = a_(t-1) + 2*a_(t-2) + a_(t-3)가 되면 되겠다!!!!!

	for (int i = 3; i <= x; ++i) {
		vec[i] = (vec[i-1] + 2*vec[i-2]) % 10007;
	}

	std::cout << vec[x];

	return 0;
}

#endif