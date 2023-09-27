#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void myReverse(string str);

int main()
{
	string str;
	cin >> str;
	
	myReverse( str );
	
	return 0;
}

void myReverse(string str)
{
	vector<char> v_r_str( str.size() );
	
	int i = 0;
	for(auto it = v_r_str.rbegin(); it != v_r_str.rend(); it++)
	{
		*it = str[i];
		i++;
	}
	
	for(auto it = v_r_str.begin(); it != v_r_str.end(); it++)
		cout << *it;
	cout << endl;
}