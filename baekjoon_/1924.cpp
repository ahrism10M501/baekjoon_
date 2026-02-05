#ifdef PROBLEM_1924

#include <iostream>
#include <string>

using namespace std;

// 2007.01.01 MON
int main(void) {
    string day_of_week[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
    
    int x, y;

    cin >> x >> y;

	// casting month to zero-based index
    x = x - 1;

	int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (y > days_in_month[x]) {
		cout << "Invalid date\n";
        return -1;
    }

    int total_days = 0;
    for(int i=0; i<x; ++i) {
		total_days += days_in_month[i];
    }

	int day = static_cast<int>((total_days + y - 1) % 7);
	cout << day_of_week[day] << '\n';

	return 0;
}
#endif