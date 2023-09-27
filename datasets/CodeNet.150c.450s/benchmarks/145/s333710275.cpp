#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
#include <map>
using namespace std;

int main()
{
	int max_s = 0;
	map<string, int> n;
	string s1, s2 = "", s3;
	while(cin >> s1){
		n[s1]++;
		if (s1.size() > s2.size())
		{
			s2 = s1;
		}
		if(max_s < n[s1]){
			s3 = s1;
			max_s = n[s1];
		}
	}
	cout << s3 << " " << s2 << endl;
}