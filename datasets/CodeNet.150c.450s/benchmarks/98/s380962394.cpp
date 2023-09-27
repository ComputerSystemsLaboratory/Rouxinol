#include <iostream>
#include <math.h>
using namespace std;

int n,m;
int main(){
	while(cin >> n && n && cin >> m && m){
		int taro[n],hanako[m],i,j;
		int sum_t=0, sum_h=0;
		for(i=0; i<n; i++){
			cin >> taro[i];
			sum_t += taro[i];
		}
		for(i=0; i<m; i++){
			cin >> hanako[i];
			sum_h += hanako[i];
		}
		int t, h, min=202, d=sum_t-sum_h;
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				if(!(d+2*(hanako[j]-taro[i])) && min>(taro[i] + hanako[j])){
					min = taro[i] + hanako[j]; 
					t = i;
					h = j;
				}
			}
		}
		if(min==202) cout << "-1" << endl;
		else cout << taro[t] << " " <<  hanako[h] << endl;
	}
}