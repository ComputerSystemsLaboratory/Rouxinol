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
  stack<int> st;
  int buf;
  while(cin>>buf){   
    if(buf==0){
      cout<<st.top()<<endl;
      st.pop();
    }else{
      st.push(buf);
    }

  }
}