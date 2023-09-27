#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main(){
	int n,m,mi,mih,mit;
	while(cin >> n >> m && n && m){
		vector<int> taro(n);
		vector<int> hanako(m);
		int t=0,h=0;		
		for(int i=0;i<n;i++){
			cin >> taro[i];
			t+=taro[i];
		}
		for(int i=0;i<m;i++){
			cin >> hanako[i];
			h+=hanako[i];
		}
		mi = (1<<21);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if( t - taro[i] + hanako[j] == h - hanako[j] + taro[i] ){
					if(taro[i]+hanako[j]<mi){
						mi = taro[i]+hanako[j];
						mit = taro[i];
						mih = hanako[j];
					}
				}
			}
		}
		if(mi == 1<<21)cout << -1 << endl;
		else cout << mit << " " << mih << endl;
	}
}