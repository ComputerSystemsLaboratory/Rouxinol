#include <iostream>
#include <vector>
using namespace std;

int a[1000000]={};

int main(){
	int n,ans=0;
	vector<int> v;
	for(int i = 2; i*i < 1000000; i++){
		for(int j = 0; j < 1000000; j+=i){
			if(i!=j) a[j]=1;
		}
	}
	while(cin >> n){
		for(int j = 2; j <= n; j++){
			if(a[j]==0) ans++;
		}
		cout << ans << endl;
		ans=0;
	}
}