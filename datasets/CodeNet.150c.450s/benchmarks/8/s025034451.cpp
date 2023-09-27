#include<iostream>
using namespace std;
int main(){
  int t=0,h=0,n;
  string T,H;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>T>>H;
    if(T==H){
      t++;
      h++;
    }
    else if(T>H) t+=3;
    else h+=3;
  }
  cout<<t<<" "<<h<<endl;
}