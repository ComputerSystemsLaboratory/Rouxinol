#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,p;

  while(cin>>n>>p,n||p){
    int i=0;
    vector<int> t(n,0);
    int pp=p;
    while(1){
      if(p>0){
	p--;
	t[i]++;
      }
      else if(p==0){
	p=t[i];
	t[i]=0;
      }
      
      if(t[i]==pp)
	break;

      i++;
      if(i==n)
	i=0;
    }
    cout<<i<<endl;
  }
}