#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

typedef pair<int,int> pii;

vector<pii>train;
const int H=60*60;
const int M=60;
const int S=1;
int unit[3]={H,M,S};

int getTime(string s){
  string tmp;
  int res=0;
  for(int i=0;i<3;i++){
    tmp=s.substr(3*i,2);
    int val=unit[i]*atoi(tmp.c_str());
    res+=val;
  }
  return res;
}

void makeEvent(string start,string arrival){
  int st=getTime(start);
  int at=getTime(arrival);
  train.push_back(make_pair(st,1));
  train.push_back(make_pair(at,0));
}

int main(){
  int n;
  while(cin>>n,n){
    train.clear();
    for(int i=0;i<n;i++){
    string start,arrival;
    cin>>start>>arrival;
    makeEvent(start,arrival);
    }
    int ans=0,tmp=0;
    sort(train.begin(), train.end());
    for(pii i:train){
      if(i.second==1){
	tmp++;
      }else{
	tmp--;
      }
      ans=max(tmp,ans);
    }
    cout << ans << endl;
  }
  return 0;
}