// #define PROBLEM_2751
#ifdef PROBLEM_2751

#include <iostream>
#include <set>

using namespace std;

int main(void) {
	int N;
	int x;

	cin >> N;
	set<int> s;
	for (int i = 0; i < N; ++i) {
		cin >> x;
		s.insert(x);
	}
	
	for (const auto& v : s) {
		cout << v << "\n";
	}

	return 0;
}

#endif