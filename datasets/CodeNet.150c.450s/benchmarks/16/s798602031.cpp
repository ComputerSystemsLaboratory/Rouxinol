#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int main(){

  stack <int> sa;
  string m;
  int cnt=0,result=0,high=0,tmp=0,h[20000],i;
  vector <int> amo;

  cin>>m;
  for(i=m.size()-1;i!=-1;i--){
    if(m[i]=='\\') tmp++;
    if(m[i]=='/') tmp--;
    if(tmp<0){
      for(int j=i+1;j<m.size();j++) h[j]++;
      high++;
      tmp=0;
    }
    high=max(high,tmp);
    h[i]=high;
  }
  //for(i=0;i<m.size();i++) cout<<h[i]<<" ";

  for(i=0;i<m.size();i++){
    //    if(i>0) if(h[i]-h[i-1]==1) sa.pop(); 
    if(m[i]=='\\'){
      sa.push(i);
    } else if(m[i]=='/' && !sa.empty()) {
      cnt+=i-sa.top();
      sa.pop();
      if(sa.empty()){
        amo.push_back(cnt);
        result+=cnt;
        cnt=0;
      }
    }
    if(i<m.size()-1) if(h[i+1]-h[i]!=0) sa.pop();
  }
  if(cnt!=0){
    amo.push_back(cnt);
    result+=cnt;
  }
  if(amo.empty()) cout<<"0"<<endl<<"0"<<endl;
  else{
    cout<<result<<endl<<amo.size()<<" ";
    for(i=0;i<amo.size()-1;i++) cout<<amo[i]<<" ";
    cout<<amo[amo.size()-1]<<endl;
  }
  return 0;

}