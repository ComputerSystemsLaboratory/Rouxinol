#include<iostream>
using namespace std;
int main(){
  long long int a,b;
  while(cin>>a>>b){
    int co=0;
    long long int c=a+b;
    if(c==0)co++;
    while(c){co++;c/=10;}
    cout<<co<<endl;
  }
}