#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n,p,m[50];

  while(cin>>n>>p && n&&p){
    int w=p,i=0;
    for(int j=0;j<n;j++) m[j]=0;

    while(m[(i+n-1)%n]!=p){
      if(w) m[i]++,w--;
      else w+=m[i],m[i]=0;
      i=(i+1)%n;
    }
    cout<<(i+n-1)%n<<endl;

  }

  return 0;
}