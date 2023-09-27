#include<iostream>
#include <algorithm>
using namespace std;

int main(){
while(true){
 int n;
 int m=10000000;
 cin>>n;

 if(n==0)break;

 int s[n];
 for(int i=0;i<n;i++){
	cin>>s[i];
 }

 sort(s,s+n);

 for(int i=0;i<n-1;i++){
	if(s[i+1]-s[i]<m){
		m=s[i+1]-s[i];
	}
 }
 cout<<m<<endl;
}
 return 0;
}