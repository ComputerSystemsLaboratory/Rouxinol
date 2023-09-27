#include<iostream>

using namespace std;

int main(){
  int n,p;
  while(1){
    cin >> n >> p;
    if(n == 0 && p == 0)break;
    int pmax = p;
    int s[50]={0};
    int i = 0;
    while(1){
      if(p>0){
	s[i]++;
	p--;
      }else if(p==0){
	p = s[i];
	s[i]=0;
      }

      if(s[i]==pmax)break;
      
      
      if(i == n-1){
	i = 0;
      }else{
	i++;
      }
      
    }
    cout << i << endl;
  }
  
  return 0;
}