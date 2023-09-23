#include <iostream>
using namespace std;
int main(){
	int n;
	int a[100]={0};
	while(cin>>n){
		a[n-1]++;
	}
	int b=0;
	for(int i=0;i<100;i++){
		if(a[i]>b) b=a[i];
	}
	for(int j=0;j<100;j++){
		if(a[j]==b) cout<<j+1<<endl;
	}
	return 0;
}