/*
  与えられる数は10^8以下->10^4(10000)までの素数を持っていれば良い
 */

#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

#define PB push_back

void Input();
void Make_Table();
void Calc();

int n,ans,x;
vector<int> ivs;
vector<int> ivin;

int main(int argc,char* argv[]){
  ivs.clear();
  ans=0;

  Input();
  Make_Table();
  Calc();

  printf("%d\n",ans);
  return 0;
}

void Input(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    ivin.PB(x);
  }
}

void Make_Table(){
  bool flag;
  for(int i=2;i<=10000;i++){
    if(ivs.empty())
      ivs.PB(i);
    else{
      flag=true;
      vector<int>::iterator itivs;
      for(itivs=ivs.begin();itivs!=ivs.end();itivs++){
	if(i%(*itivs)==0){
	  flag=false;
	  break;
	}
      }
      if(flag)
	ivs.PB(i);
    }
  }
}

void Calc(){
  bool flag;
  vector<int>::iterator itivin;
  for(itivin=ivin.begin();itivin!=ivin.end();itivin++){

    flag=true;
    vector<int>::iterator itivs;
    for(itivs=ivs.begin();itivs!=ivs.end();itivs++){
      
      if(*itivin%*itivs==0 && *itivin!=*itivs){
	flag=false;
	break;
      }

      else if(*itivin<=*itivs) break;
    }
    if(flag) ans++;
  }
}