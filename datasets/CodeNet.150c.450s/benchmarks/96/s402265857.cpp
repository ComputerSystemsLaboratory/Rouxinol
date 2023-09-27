#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
#include<string>
#include<stdlib.h>

using namespace std;

#define ll long long int
#define ld long double
#define reps(i,f,n) for(int i=f;i<n;i++)
#define rep(i,n) reps(i,0,n)
#define m1 cout<<"move1"<<endl
#define m2 cout<<"move2"<<endl
#define m3 cout<<"move3"<<endl
#define m4 cout<<"move4"<<endl


int main(){
  ll num = 0;
  string s;
  char data[10][7] = {".,!? $","abc$$","def$$","ghi$$","jkl$$","mno$$","pqrs$","tuv$","wxyz$"};
  char ans;
  ll temp = 0;
  ll cou = 0;

  cin>>num;
  // m1;

  rep(i,num){
    cin>>s;
    //m2;
    
    rep(i,s.size()){
      ans = '#';
      cou = 0;
      while(s[i] != '0'){
	//m3;
	temp = s[i] - '0' -1;
	//m3;
	//cout<<temp<<endl;
	ans = data[temp][cou];
	//cout<<temp<<endl;
	//	m4;
	if(data[temp][cou] == '$'){
	  cou = 0;
	  ans = data[temp][cou];
	}
	cou++;
	i++;
      }
      if(ans != '#'){
	cout<<ans;
      }
      
    }
    cout<<endl;
  }
  return 0;
}
    
    