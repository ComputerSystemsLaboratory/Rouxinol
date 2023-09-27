#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string str, p;
int a, b;

void print(){
  cin>>a>>b;
  for(int i=a;i<=b;i++) cout<<str[i];
  cout<<endl;
}

void reverse(){
  cin>>a>>b;
  for(int i=a;i<=(a+b)/2;i++) swap(str[i], str[b-i+a]);
}
  
void replace(){
  cin>>a>>b>>p;
  str.replace(a, b-a+1, p);
}

int main(){
  int m;
  string order;
  cin>>str>>m;
  for(int i=0;i<m;i++){
    cin>>order;
    if(order == "print") print();
    else if(order == "reverse") reverse();
    else if(order == "replace") replace();
  }
  return 0;
}

