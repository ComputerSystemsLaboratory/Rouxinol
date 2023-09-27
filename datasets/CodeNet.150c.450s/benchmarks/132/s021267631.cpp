#include<iostream>
#include<vector>
using namespace std;
int main(void){
int n,p;
while(1){
	cin>>n>>p;
	if(n==0)break;
	vector<int> a(n,0);
	int stock=p;
	bool flag=false;
	while(1){
		for(int i=0;i<n;i++){
			if(stock==0){
				stock=a[i];
				a[i]=0;
			}else{
				a[i]++;
				stock--;
			}
			if(a[i]==p){
				cout<<i<<endl;
				flag=true;
				break;
			}
		}
		if(flag)break;
	}
}

	return 0;
}