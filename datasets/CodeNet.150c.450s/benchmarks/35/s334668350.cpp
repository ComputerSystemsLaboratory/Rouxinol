#include<iostream>
using namespace std;

int main(void){
	int l[5000];
	int n;
	while(cin>>n,n){
		for(int i = 0 ; i < n ; i++)cin>>l[i];
		int res = -1000000;
		for(int i = 0 ; i < n ; i ++){
			int sum = 0;
			res = max(l[i],res);
			for(int j = i ; j < n ; j ++){
				sum += l[j];
				res = max(sum,res);
			}
		}
		cout<<res<<endl;
	}
}