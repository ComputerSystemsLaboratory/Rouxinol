#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

vector<int> h,w;
vector<int> Sh,Sw;

void init(){
  h.resize(0);
  w.resize(0);
  Sh.resize(0);
  Sw.resize(0);
}

bool input(){
  int n,m;
  cin>>n>>m;
  if(n==0 && m==0){
    return false;
  }
  for(int i=0;i<n;i++){
    int tmp;
    cin>>tmp;
    h.push_back(tmp);
  }
  for(int i=0;i<m;i++){
    int tmp;
    cin>>tmp;
    w.push_back(tmp);
  }
  return true;
}

int ans(){
  int res=0;
  for(int i=0;i<h.size();i++){
    int tmp=0;
    for(int j=i;j<h.size();j++){
      tmp+=h[j];
      Sh.push_back(tmp);
    }
  }
  for(int i=0;i<w.size();i++){
    int tmp=0;
    for(int j=i;j<w.size();j++){
      tmp+=w[j];
      Sw.push_back(tmp);
    }
  }

  sort(Sw.begin(),Sw.end());
  sort(Sh.begin(),Sh.end());

  int i=0,j=0;

  while(i<Sw.size() && j<Sh.size()){
    if(Sw[i]<Sh[j]){
      i++;
      continue;
    }else if(Sw[i]>Sh[j]){
      j++;
      continue;
    }
    int s_w=1,s_h=1;
    
    while(Sw[i]==Sw[i+1]){
      s_w++;
      i++;
    }
    while(Sh[j]==Sh[j+1]){
      s_h++;
      j++;
    }
    res += s_w*s_h;
    i++;
    j++;
  }
  return res;
}

int main(){
  while(init(),input()){
    int a=ans();
    cout<<a<<endl;
  }
}