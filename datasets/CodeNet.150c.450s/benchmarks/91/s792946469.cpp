#include<iostream>
using namespace std;
bool b[1000005];
int s[1000005];
int main(){
	int i,j,k;
	int n;
	b[i]=true;
	for(i=2;i<1000000;i++){
		if(b[i]==false){
			for(j=2*i;j<1000000;j+=i){
				b[j]=true;
			}
			s[i]=s[i-1]+1;
		}else{
			s[i]=s[i-1];
		}
	}
	while(cin>>n){
		cout<<s[n]<<endl;
	}
	return 0;
}