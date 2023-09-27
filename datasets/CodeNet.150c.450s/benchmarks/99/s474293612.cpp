#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;


using namespace std;


string i_tos( int n ){
  ostringstream stream;
  stream << n;
  string result = stream.str();
  return result;
}

int s_to_i(string str){

  int ans=0;

  for(int i=0;i<str.length();i++){
    int keisu=1,n=0;

    if(str[i]=='m') n=1000; 
    else if(str[i]=='c') n=100;
    else if(str[i]=='x') n=10;
    else if(str[i]=='i') n=1;

    if(i-1>=0&&n!=0){
      keisu=str[i-1]-'0';
      if(keisu>9){
        keisu=1;
      }
    }

  
      //cout << "係数" << keisu << ",n" << n << endl;

    if(n!=0) ans+=keisu*n;
  }

  return ans;
}


string i_to_s(int num){
  string str;

  if(num>=1000){
    if(num/1000>1){
      str.append(i_tos(num/1000));
    }

    num=num%1000;
    str.append("m");
  }
  if(num>=100){
    if(num/100>1){
      str.append(i_tos(num/100));
    }

    num=num%100;
    str.append("c");
  }
  if(num>=10){
    if(num/10>1){
      str.append(i_tos(num/10));
    }
    
      num=num%10;
    str.append("x");
  }
  if(num>=1){
    if(num/1>1){
      str.append(i_tos(num/1));
    }
    
      num=num%1;
    str.append("i");
  }
   
  return str;
}


int main()
{
  int n,ans;
  cin >> n;
  rep(i,n){

    string a,b;
    cin >> a >> b;

    ans = (s_to_i(a)+s_to_i(b));

    cout << i_to_s(ans) << endl;

  }

  return 0;
}