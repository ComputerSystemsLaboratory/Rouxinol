#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;

int dayofweek(int year, int month, int day)
{
	struct tm  t;

	t.tm_year = year - 1900;    /* ??´????????´ */
	t.tm_mon = month - 1;        /* ???????????´ */
	t.tm_mday = day;            /* ??\ */
	t.tm_hour = 0;                /* ??? */
	t.tm_min = 0;                /* ??? */
	t.tm_sec = 0;                /* ?§? */
	t.tm_isdst = -1;            /* ????????? */

	if (mktime(&t) == -1)        /* ???????????±??? */
		return (-1);
	return (t.tm_wday);
}

int main() {
	map<int, string>m;
	m[0] = "Sunday";
	m[1] = "Monday";
	m[2] = "Tuesday";
	m[3] = "Wednesday";
	m[4] = "Thursday";
	m[5] = "Friday";
	m[6] = "Saturday";
	while (1) {
		int a, b; cin >> a >> b;
		if (!a)break;
		int num = dayofweek(2004, a, b);
		cout << m[num] << endl;
	}
	return 0;
}