#include<iostream>
using namespace std;
int main(){
long n,nn[10],i=0;
while(cin>>n){
if(n)nn[i++]=n;else cout<<nn[--i]<<endl;
}
return 0;
}