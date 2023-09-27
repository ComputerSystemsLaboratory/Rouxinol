#include<iostream>
using namespace std;

int main(int argc,char* argv[]){
  int input,num,tmp;num=1;cin >> input;
  while(num<=input){
    if(num%3==0){cout<<" "<<num;num++;}
    if(num>input) break;tmp=num;
    while(tmp!=0){if(tmp%10==3){ cout<<" "<<num;break;}tmp/=10;}
    num++;}
  cout<<endl;}