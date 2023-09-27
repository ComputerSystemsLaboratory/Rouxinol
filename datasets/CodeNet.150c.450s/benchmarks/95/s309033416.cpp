#include<bits/stdc++.h>
using namespace std;





int main(){
  while(1){



  
  int n;
  queue<string> a;
  cin>>n;
  if(n==0){break;}
  for(int i=0;i<n;i++){
    string w;
    cin>>w;
    a.push(w);
  }
  int r=0,l=0,count=0;
  pair<int,int> j;
  while(!a.empty()){
    if(r==l){j=make_pair(2,r);}
    string w=a.front();
    a.pop();
    if(w=="lu"){l=1;}
    if(w=="ru"){r=1;}
    if(w=="ld"){l=0;}
    if(w=="rd"){r=0;}
    j.first--;
    if(j.first==0 && r==l && r!=j.second){
      count++;
    }
  }
  cout<<count<<endl;



  }

  
  return 0;
}

