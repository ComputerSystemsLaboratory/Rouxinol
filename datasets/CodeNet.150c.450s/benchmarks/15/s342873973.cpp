#include<iostream>
using namespace std;
int main(){
	int n,p;
	int s[1000000];
	int t[1000000];
	int i,j;
	int c=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	cin>>p;
	for(i=0;i<p;i++){
		cin>>t[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			if(s[i]==t[j]){
				t[j]=-1;
				c++;
			}
		}
	}
	cout<<c<<endl;
	return 0;
}
	