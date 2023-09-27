#include<bits/stdc++.h>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

int n;
int start;

bool input(){
  cin>>start>>n;
  if(n==0)return false;
  return true;
}

int getnum(string str){
  int sc = 1;
  int ret = 0;
  rep(i,str.size()){
    ret += (str[i]-'0')*sc;
    sc*=10;
  }
  return ret;
}
pair<int,int> getnx(int num){
  string str;
  while(num!=0){
    str.push_back('0'+num%10);
    num/=10;
  }

  while(str.size()<n)str.push_back('0');

  sort(str.begin(),str.end());
  //cout<<str<<"|";
  int maxi = getnum(str);
  reverse(str.begin(),str.end());
  //cout<<str<<endl;
  int mini = getnum(str);
  return pair<int,int>(maxi,mini);
}
const int M = 1000000;
int memo[M];
void solve(){
  rep(i,M)memo[i]=-1;
  int count = 0;
  int num = start;
  while(1){
    if(memo[num]!=-1){
      printf("%d %d %d\n",memo[num],  num, count-memo[num]);
      break;
    }
    memo[num]=count;
    pair<int,int> nx = getnx(num);
    //printf("num   %d %d %d\n",num,nx.first, nx.second);
    num = nx.first-nx.second;
    count++;
  }
}

int main(){
  while(input())solve();
}