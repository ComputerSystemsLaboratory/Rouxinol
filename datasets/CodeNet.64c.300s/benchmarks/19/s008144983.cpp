#include<iostream>
#include<string>
using namespace std;
int a[5000];
int main(){
int n;
while(true){
cin>>n;
if(n==0)
break;
long long best=-1000000000;
for(int i=0;i<n;i++)
 cin>>a[i];
 
for(int start=0;start<n;start++){
 long long count=0;
 for(int len=start;len<n;len++){
  count+=a[len];
  best=max(best,count);
 }
}

cout<<best<<endl;
}
return 0;   
}