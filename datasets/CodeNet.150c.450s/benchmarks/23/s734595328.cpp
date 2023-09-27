#include<iostream>
#include<vector>
using namespace std;

int main(void){
	int n,v[50];
	cin>>n;
	if(n == 0 || n == 1){
		cout<<1<<endl;
	}else{
		v[0] = v[1] = 1;
		for(int i = 2 ; i <= n ; i ++){
			v[i] = v[i-1] + v[i-2];
		}
		cout<<v[n]<<endl;
	}
}