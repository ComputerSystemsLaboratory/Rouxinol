#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;
 
#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
int main(){

  int m;
  cin>>m;
  REP(i,m){
    string str;
    int num[5000]={0};
    char now;
    int out=0;
    char one[5]={'.',',','!','?',' '};
    cin >> str;
    int hoge = str.size();
    REP(i,hoge){
      num[i] = str[i] - '0';
    };
    REP(c,hoge){
      int k=0;
      if(num[c]==1){
	while(num[c]==1){
	  k++;
	  c++;
	}
	out=(k+4)%5;
	cout << one[out];
      }else if(num[c]==2){
	while(num[c]==2){
	  k++;
	  c++;
	}
	out=(k+2)%3;
	now = 'a'+out;
	cout << now;
      }else if(num[c]==3){
	while(num[c]==3){
	  k++;
	  c++;
	}
	out=(k+2)%3;
	now = 'd'+out;
	cout << now;
      }else if(num[c]==4){
	while(num[c]==4){
	  k++;
	  c++;
	}
	out=(k+2)%3;
	now = 'g'+out;
	cout << now;
      }else if(num[c]==5){
	while(num[c]==5){
	  k++;
	  c++;
	}
	out=(k+2)%3;
	now = 'j'+out;
	cout << now;
      }else if(num[c]==6){
	while(num[c]==6){
	  k++;
	  c++;
	}
	out=(k+2)%3;
	now = 'm'+out;
	cout << now ;
      }else if(num[c]==7){
	while(num[c]==7){
	  k++;
	  c++;
	}
	out=(k+3)%4;
	now = 'p'+out;
	cout << now;
      } else if(num[c]==8){
	while(num[c]==8){
	  k++;
	  c++;
	}
	out=(k+2)%3;
	now = 't'+out;
	cout << now;
      }else if(num[c]==9){
	while(num[c]==9){
	  k++;
	  c++;
	}
	out=(k+3)%4;
	now = 'w'+out;
	cout << now;
      }
    }
      cout << endl;
  }}


  