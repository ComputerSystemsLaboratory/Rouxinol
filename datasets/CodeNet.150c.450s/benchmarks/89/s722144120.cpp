#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector<int> prime(1000000,true);
	prime[0]=prime[1]=false;
	for(int i=2;i<1000;i++){
		if(prime[i]){
			for(int j=i*2;j<1000000;j+=i){
				prime[j]=false;
			}
		}
	}
	int a,d,n,i,c;
	while(cin >> a >> d >> n && a || d || n){
		for(c=0,i=a;n;i+=d){
			if(prime[i]){
				n--;
			}
		}
		cout << i-d << endl;
	}
}