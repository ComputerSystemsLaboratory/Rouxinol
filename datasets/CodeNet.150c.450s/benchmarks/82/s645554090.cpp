#include<bits/stdc++.h>
using namespace std;

struct dice{
  int u;
  int s;
  int e;
  int w;
  int n;
  int d;
};

dice move(dice, char);
int judge(dice, int,int);


int main(){
  dice dice1;
  cin>>dice1.u>>dice1.s>>dice1.e>>dice1.w>>dice1.n>>dice1.d;
  int q;
  cin>>q;

  for(int i=0; i<q; i++){
    int ui, si;
    cin>>ui>>si;
    dice temp = dice1;
    bool solved = false;
    for(int j=0; j<4; j++){
      if(judge(temp,ui,si)!=-1)break;
      temp = move(temp,'E');
      for(int k=0; k<4; k++){
	temp = move(temp,'N');
	if(judge(temp,ui,si)!=-1){solved = true; break;}
	for(int l=0; l<4; l++){
	  temp = move(temp,'R');
	  if(judge(temp,ui,si)!=-1){solved = true; break;}
	}
	if(solved) break;
      }
      if(solved) break;
    }
    cout<<temp.e<<endl;
  }
  
}

int judge(dice dice1, int u, int s){
  //cout<<dice1.u<<dice1.s<<dice1.e<<dice1.w<<dice1.n<<dice1.d<<endl;
  if(dice1.u==u && dice1.s==s){
    return dice1.e;
  }
  return -1;
}

dice move(dice dice1, char c){
    dice temp = dice1;
    if(c=='E'){     
      dice1.d = temp.e;
      dice1.w = temp.d;
      dice1.u = temp.w;
      dice1.e = temp.u;
    }else if(c=='N'){
      dice1.n = temp.u;
      dice1.u = temp.s;
      dice1.s = temp.d;
      dice1.d = temp.n;
    }else if(c=='S'){
      dice1.n = temp.d;
      dice1.u = temp.n;
      dice1.s = temp.u;
      dice1.d = temp.s;
    }else if(c=='W'){
      dice1.u = temp.e;
      dice1.w = temp.u;
      dice1.d = temp.w;
      dice1.e = temp.d;
    }else if(c=='R'){
      dice1.s = temp.w;
      dice1.w = temp.n;
      dice1.n = temp.e;
      dice1.e = temp.s;
    }
    return dice1;
}


