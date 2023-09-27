#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int s[4];
int t[4];

int main(){
	ios::sync_with_stdio(false);
	do{
		REP(i,4){
			if (!(cin>>s[i])){
				return 0;
			}
		}
		REP(i,4){
			cin>>t[i];
		}
		int h=0,b=0;
		REP(i,4){
			REP(j,4){
				if (s[i]==t[j]){
					if (i==j){
						h++;
					}
					else{
						b++;
					}
				}
			}
		}
		cout<<h<<" "<<b<<endl;
	}while (1);
	return 0;
}