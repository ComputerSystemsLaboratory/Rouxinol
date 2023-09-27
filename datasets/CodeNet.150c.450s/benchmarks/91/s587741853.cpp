#include<iostream>
using namespace std;
bool p[1000000]={true,true};
int main(){
  for(int i=2; i<1000; i++)
    if(!p[i])
      for(int j=i*i; j<1000000; j+=i)
	p[j] = true;
  int n;
  while(cin >>n){
    int solve = 0;
    for(int i=0; i<=n; i++)
      if(!p[i])
	solve++;
    cout <<solve<<endl;
  }
  return 0;
}