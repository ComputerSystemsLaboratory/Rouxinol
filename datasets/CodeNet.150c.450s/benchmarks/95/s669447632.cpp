#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(){ _;
  int n;
  int count;
  bool up,leftUp,rightUp;
  string str;
  while(cin>>n,n!=0){
    count=0;
    up=leftUp=rightUp=false;
    REP(i,n){
      cin>>str;
      if(str=="lu"){leftUp=true;}
      else if(str=="ru"){rightUp=true;}
      else if(str=="ld"){leftUp=false;}
      else if(str=="rd"){rightUp=false;}
      if(!up&&leftUp&&rightUp){
	count++;
	up=true;
      }else if(up&&!leftUp&&!rightUp){
	count++;
	up=false;
      }
    }
    cout<<count<<endl;
  }
}