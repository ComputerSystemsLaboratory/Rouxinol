#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n; int const N = 5000;
  while(cin >> n){
    if(n == 0){return 0;}
    int  a[N],s,num,st,tmp;
    for(int i=0;i<n;i++)
      cin >> a[i];
    tmp=a[0];
    for(st = 0;st<n;st++){
      s = 0;
      for(int i = st;i<n;i++){
	s = s+a[i];
	tmp =max(s,tmp);
      }
    }
    cout << tmp<<endl;
  }
}
    