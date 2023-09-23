#include <iostream>
using namespace std;
long long int n,a[5000];
int main(){
	long long int i,j,t,tmp;
	while(cin >> n && n){
		tmp = 0;
		t = -1000000;
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		for(i=0;i<n;i++){
			tmp += a[i];
			if(t < tmp) t = tmp;
				for(j=i+1;j<n;j++){
					tmp += a[j];
					if(t < tmp) t = tmp;
				}
			tmp = 0;
		}
		cout << t << endl;
	}
	return 0;
}