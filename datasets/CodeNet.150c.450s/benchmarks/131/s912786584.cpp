
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <list>
#include <algorithm>

using namespace std;

int power(int x, int n) {
	if( n == 0 ) return 1;
	if( x == 0 ) return 0;
	if( n == 1 ) return x;
	
	if( n % 2 == 1 ) {
		int y = power(x, (n - 1)/2);
		return x*y*y;
	} else {
		int y = power(x, n/2);
		return y*y;
	}
}

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while( 1 ) {
		stringstream a_0;
		int a,L;
		cin >> a >> L;
		if( a == 0 && L == 0 ) break;
		a_0 << a;
		vector<int> v;
		v.push_back(a);

		while(1) {
			vector<char> ch[2];
			//頭を埋める
			int l = a_0.str().length();
			int p = atoi(a_0.str().c_str());
			a_0.clear();
			a_0.str("");
			a_0 << p*power(10,L - l);

			int k = atoi(a_0.str().c_str());

			int ans[3] = {-1,0,0};
			for(int i = 0; i < v.size() - 1; i++) {
				if( v.at(v.size()-1) == v.at(i) ) {
					ans[0] = i;
					ans[1] = v.at(v.size()-1);
					ans[2] = v.size() - i - 1;
				}
			}
			if(ans[0] != -1) {
				cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
				break;
			}

			//桁を取得
			for(int i = 0; i < a_0.str().length(); i++)
				ch[0].push_back(a_0.str().at(i));
			
			sort( ch[0].begin(), ch[0].end() );

			for(int i = a_0.str().length() - 1; i >= 0; i--)
				ch[1].push_back(ch[0].at(i));

			string s[2];
			for(int i = 0; i < a_0.str().length(); i++) {
				s[0] += ch[0].at(i);
				s[1] += ch[1].at(i);
			}

			int d = atoi(s[1].c_str()) - atoi(s[0].c_str());
			//cout << s[0] << " " << s[1] << endl;
			a_0.clear();
			a_0.str("");
			a_0 << d;
			//cout << d << endl;

			v.push_back(d);

		}
	}

	//while(1){}
	return 0;
}