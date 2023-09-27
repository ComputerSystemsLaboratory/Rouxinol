#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin >>n;
  int sum=100000;
  int interest;
  for(int i =1 ; i<=n;i++){
    interest=sum*0.05;
    if (interest%1000>0)
    interest=(interest-interest%1000) + 1000;

    sum+= interest;
  }
  cout << sum<<endl;;
}

