#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
typedef long long ll;

int main(){
  std::string a;
  int n, b;
  int s[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
  int h[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
  int c[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
  int d[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};

  cin>>n;

  for(int j=0; j<n; j++){
    cin>>a>>b;
    if(a=="S"){
      s[b-1]=100;
    }else if(a=="H"){
      h[b-1]=100;
    }else if(a=="C"){
      c[b-1]=100;
    }else if(a=="D"){
      d[b-1]=100;
    }
  }


  for(int i=0; i<13; i++){
    if(s[i]!=100){
      cout<<"S"<<" "<<s[i]<<endl;
    }
  }

  for(int i=0; i<13; i++){
    if(h[i]!=100){
      cout<<"H"<<" "<<h[i]<<endl;
    }
  }

  for(int i=0; i<13; i++){
    if(c[i]!=100){
      cout<<"C"<<" "<<c[i]<<endl;
    }
  }

  for(int i=0; i<13; i++){
    if(d[i]!=100){
      cout<<"D"<<" "<<d[i]<<endl;
    }
  }
}