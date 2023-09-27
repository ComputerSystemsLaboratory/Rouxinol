#include<iostream>
using namespace std;

int main(){

  int a[1000]={0},n,temp=0;

  while(cin >> n) a[n]++;

  for(int i=0;i<=100;i++){
    if(temp<a[i]) temp=a[i];
  }

  for(int i=0;i<=100;i++){
    if(temp==a[i]) cout << i << endl;
  }

}