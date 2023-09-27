#include<iostream>
using namespace std;
int main(){
	int *a=new int[1000000001]; 
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		a[x]=1;
	}
	int cnt=0;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		if(a[x])
			cnt++;
			
	}
	cout<<cnt<<endl;
	delete[]a;
	return 0;
}
