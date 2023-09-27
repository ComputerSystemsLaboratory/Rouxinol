#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
  cin>>n;
  vector<string>vec(n);
  for(int i=0;i<n;i++){
    cin>>vec.at(i);
  }
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  for(int i=0;i<n;i++){
  if(vec.at(i)=="AC"){
    a++;
  }
    else if(vec.at(i)=="WA"){
      b++;}
    else if(vec.at(i)=="TLE"){
      c++;
    }
else {d++;}
  }
  cout<<"AC"<<" x "<<a<<endl;
  cout<<"WA"<<" x "<<b<<endl;
  cout<<"TLE"<<" x "<<c<<endl;
  cout<<"RE"<<" x "<<d<<endl;
}
    
