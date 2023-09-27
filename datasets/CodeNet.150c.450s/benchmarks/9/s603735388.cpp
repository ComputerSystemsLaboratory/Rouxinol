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

string shuffle(string s,int n){
	string ret;
	ret = s.substr(n) + s.substr(0,n);
	return ret;
}

int main()
{
	string s;int n,h;
	while(cin >> s && s!="-"){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> h;
			s = shuffle(s,h);
		}
		cout << s << endl;
	}

    return 0;
}