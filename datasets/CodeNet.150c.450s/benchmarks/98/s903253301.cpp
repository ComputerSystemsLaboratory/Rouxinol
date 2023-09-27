#include <iostream>
#include <string>
using namespace std;

int main(){
	int c[2],a;
	int n,m,taro[100],hana[100],sumt,sumh;
	while(cin >> n >> m,(n || m)){
		a=0;
		c[0]=10000;
		c[1]=10000;
		sumt=0;
		sumh=0;
		for(int i=0;i<n;i++){
			cin >>taro[i];
			sumt+=taro[i];
		}
		for(int i=0;i<m;i++){
			cin >> hana[i];
			sumh+=hana[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if((sumt-taro[i]+hana[j]) == (sumh-hana[j]+taro[i])){
					if(c[0]+c[1]>taro[i]+hana[j]){
						c[0]=i;
						c[1]=j;
					}
				}
			}
		}
		if(c[0]!= 10000) cout << taro[c[0]] << " " << hana[c[1]] << endl;
		else cout << -1 << endl;
	}
	return 0;
}