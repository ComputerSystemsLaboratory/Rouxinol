#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int n;
	while(cin >> s >> n && !(s=="0" && n==0)){
			map<string,int> m;
			int sinit = s.size();
			for(int i=0;i<n-sinit;i++){
					s = "0" + s;
			}
			int cnt = 0;
			m[s] = cnt;
			cnt++;
			while(1){
					string t = s;
					sort(s.rbegin(), s.rend());
					sort(t.begin(), t.end());
					s = to_string( stoi(s) - stoi(t) );
					if(s.size()<n){
							for(int i=0;i<n-s.size();i++){
									s = "0" + s;
							}
					}
					if(m.count(s)){
							cout << m[s] << " " <<  stoi(s) << " " << cnt-m[s] << endl;
							break;
					}else{
							m[s] = cnt;
							cnt++;
					}

			}
	}
}
