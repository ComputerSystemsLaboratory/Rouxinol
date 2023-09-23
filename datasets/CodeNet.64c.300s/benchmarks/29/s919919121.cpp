#include <iostream>
#include <vector>
#include<algorithm>
#include<iomanip>
#include<queue>
using namespace std;
#define rep(i,n) for(int i=1;i<=(int)(n);i++)

int main() {
	int E;
	while(cin>>E&& E>0){
		int j,k,m;
		m = 100000000;
		for(j = 0; j*j<=E;j++){
			for(k=0;k*k*k<=E;k++){
				int i = E - j*j - k*k*k;
				int sum = i+j+k;
				if(m>sum && i >=0){
					m = sum;
				}
			}
		}
		cout<<m<<endl;
	}
	return 0;
}

