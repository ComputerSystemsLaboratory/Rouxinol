#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int n;
	
	while(cin >> n , n){
		int ret = 0;
		for(int i=1;i<=1000;i++){
			int sum = 0;
			for(int j=i;j<=1000;j++){
				sum += j;
				if(n == sum)ret++;
				if(n < sum)break;
			}
		}
		cout << ret-1 << endl;
	}
}