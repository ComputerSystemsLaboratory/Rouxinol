
#include<iostream>
using namespace std;
int main(){
int a[10000]={0},au[30];
	int i,j,s;
	int c=0,t=0;
	while(cin>>s){
		a[s]++;
		c++;
	}
	int max=0;
	for(i=0;i<c;i++){
		if(max<a[i]){
			max=a[i];
			au[0]=i;
			t=1;
		}
		else if(max==a[i]){
			au[t]=i;
			t++;
		}
	}
	for(i=0;i<t;i++){
		cout<<au[i]<<endl;
	}
	return 0;
}