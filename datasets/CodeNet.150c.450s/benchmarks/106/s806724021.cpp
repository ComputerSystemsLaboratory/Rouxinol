#include<iostream>
using namespace std;

int main(){
 int a,b,c,count;
 count=0;
 cin>>a>>b>>c;
 for(int i=a;i<=b;i++){
  if(i!=0&&c%i==0){
    count++;
  }
 }
cout<<count<<'\n';
 return 0;
}