#include<iostream>
using namespace std;

int main(){
int n;
int a[1000000];
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=n-1;i>=0;i--){
cout<<a[i];
if(i>0){
cout<<" ";
}
}
cout<<endl;
return 0;
}