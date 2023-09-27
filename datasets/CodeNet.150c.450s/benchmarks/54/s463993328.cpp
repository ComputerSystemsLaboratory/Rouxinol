#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<map>
#include<list>
#include<cctype>
#include<utility>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
	string key;
	cin >> key;
	transform(key.begin(),key.end(),key.begin(),::toupper);
	string s;
	int cnt = 0;
	while(cin >>s && s!="END_OF_TEXT"){
		transform(s.begin(),s.end(),s.begin(),::toupper);
		if(s==key)cnt++;
	}
	cout << cnt << endl;
    return 0;
}