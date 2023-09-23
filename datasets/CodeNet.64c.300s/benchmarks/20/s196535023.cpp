#include<iostream>
using namespace std;

int f(int d){
  return d*d;
}

int main()
{
  int d,S=0;

  while(cin>>d){
    int Z=d;
    for(;d<=(600-Z);d+=Z){
      S+=Z*f(d);
    }
    cout<<S<<endl;
    S=0;
  }
}