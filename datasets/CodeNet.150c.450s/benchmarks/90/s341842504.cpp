#include<iostream>
using namespace std;
int main(){
  int n[101]={0};
  int a,max=0;
  while(cin >>a) n[a]++;
  for(int i=1; i<101; i++) if(max<n[i]) max = n[i];
  for(int i=1; i<101; i++) if(n[i] == max) cout <<i<<endl;
  return 0;
}