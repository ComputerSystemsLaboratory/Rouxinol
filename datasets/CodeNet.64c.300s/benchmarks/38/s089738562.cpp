#include<iostream>
using namespace std;
int main(){
  int n,a,b=0,c=0;
  int i,j;
  int flag=0;
  cin >> n;
  for(i=0;i<n;i++){
    for(j=0;j<10;j++){
      cin >> a;
      if(b<a){
	b=a;
      }
      else if(c<a){
	c=a;
      }
      else{
	flag=1;
      }
    }
    if(flag==0)cout << "YES" << endl;
    if(flag==1)cout << "NO" << endl;
    b=0,c=0;
    flag=0;
  }
}