#include<iostream>
using namespace std;
int main(){
	int a,b,c,i;
	int n=0;
	int s[300];
	while(cin>>a>>b){
		a+=b;
		c=10;
		for(i=1;i<10;i++){
			if(a<c){
				break;
			}
			c*=10;
		}
		s[n]=i;
		n++;
	}
	for(i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}