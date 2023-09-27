#include <bits/stdc++.h>
using namespace std;

int	str_to_time(const string &time_str)
{
	int	hour, minute, second, time;
	hour = stoi(time_str.substr(0, 2));
	minute = stoi(time_str.substr(3, 2));
	second = stoi(time_str.substr(6, 2));
	time = hour * 3600 + minute * 60 + second;
	return time;
}

int	main()
{
	int	n;
	while (cin >> n) {
		if (n == 0) break;
		string	bgn, end;
		vector<int>	diff(24 * 3600, 0);
		for (int i = 0; i < n; ++i) {
			cin >> bgn >> end;
			diff.at(str_to_time(bgn)) += 1;
			diff.at(str_to_time(end)) -= 1;
		}
		vector<int>	cnt_vec(24 * 3600, 0);
		cnt_vec.at(0) = diff.at(0);
		for (int i = 1; i < 24 * 3600; ++i)
			cnt_vec.at(i) = cnt_vec.at(i - 1) + diff.at(i);
		cout << *max_element(cnt_vec.begin(), cnt_vec.end()) << endl;
	}
}



			


