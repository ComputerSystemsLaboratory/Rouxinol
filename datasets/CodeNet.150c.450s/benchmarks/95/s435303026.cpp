#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<complex>
#include<stack>
using namespace std ;
typedef vector<int> vi ;
typedef vector<vi> vvi ;
typedef vector<string> vs ;
typedef pair<int, int> pii; 
typedef long long ll ;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int main(void){
  int num;
  string bef,now;
  while(cin>>num,num){
    int cnt = 0;
    cin>>bef;num--;
    rep(i,num){
      cin>>now;
      if(now[0]!=bef[0] && now[1]==bef[1]){
	//cout<<"now "<<now<<"bef "<<bef<<endl;
	cnt++;
      }
      //cout<<now<<endl;
      bef=now;
    }
    cout<<cnt<<endl;
  }
}