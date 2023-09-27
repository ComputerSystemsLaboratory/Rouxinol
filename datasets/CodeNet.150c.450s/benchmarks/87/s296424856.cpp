#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#define rep(i,a) for(int i=0;i<(a);++i)
#define rrep(i,a) for(int i=(a)-1;i>=0;--i)

using namespace std;

int main() {
	int n;
	while(cin >> n,n){
		vector<vector<int> > v(5,vector<int>(n));
		rrep(i,n) rep(j,5) cin >> v[j][i];
		int sum=0,lsum;
		do{
			lsum = sum;
			rep(i,n){
				bool rm[5];
				memset(rm,false,sizeof(rm));
				rep(j,3){
					if(v[j][i] && v[j][i] == v[j+1][i] && v[j+1][i] == v[j+2][i]){
						rm[j]=rm[j+1]=rm[j+2]=true;
					}
				}
				rep(j,5){
					if(rm[j]){
						sum+=v[j][i];
						v[j][i]=0;
					}
				}
			}
			rep(i,5){
				fill(remove(v[i].begin(),v[i].end(),0),v[i].end(),0);
			}
		}while(lsum!=sum);
		cout << sum << endl;
	}
	return 0;
}