#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

int main(){
  int kane;
  int a,i;
  
  while(1){
    a=0;
    cin >> kane;
    if(kane == 0)break;
    kane=1000-kane;
    
    if(kane >= 500){
      kane-=500;
      a++;
    }
    if(kane >= 100){
      i = kane/100;
      a+=i;
      kane-=100*i;
    }
    if(kane >= 50){
      i = kane/50;
      a+=i;
      kane-=50*i;
    }
    if(kane >= 10){
      i = kane/10;
      a+=i;
      kane-=10*i;
    }
    if(kane >= 5){
      i = kane/5;
      a+=i;
      kane-=5*i;
    }
    if(kane != 0){
      a+=kane;
    }
    cout << a <<endl;
  }
}