#include<iostream>
#include<algorithm>
using namespace std;
int MIN,MAX,n,sum,a,i;
int main(){
while(true){
cin>>n;if(!n){break;}
MIN=10000000;
MAX=0;sum=0;
for(i=0;i<n;i++){cin>>a;MIN=min(MIN,a);MAX=max(MAX,a);sum+=a;}
cout<<(sum-MIN-MAX)/(n-2)<<endl;
}
}