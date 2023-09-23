#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int r,c;
	while(cin >> r >> c && r){
		bool data[r][c];
		rep(i,r)rep(j,c)data[i][j] = 0;
		int ret = 0;
		rep(i,r)rep(j,c){
			cin >> data[i][j];
		}
		
		rep(bit,(1<<r)){
			int val[c][2];
			rep(i,c)rep(j,2)val[i][j] = 0;
			
			rep(j,r){
				if( (1<<j) & bit){
					rep(i,c){
						val[i][data[j][i]^1]++;
					}
				}else{
					rep(i,c){
						val[i][data[j][i]]++;
					}
				}
			}
			int sum = 0;
			rep(i,c){
				sum+=max(val[i][0],val[i][1]);
			}
			ret = max(sum,ret);
		}
		
		cout << ret << endl;
	}
}