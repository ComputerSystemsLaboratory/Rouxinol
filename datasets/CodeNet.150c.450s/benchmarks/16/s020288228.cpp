#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

vector <P> ans;
string str;

int main(){
  ll anssum=0,anssize=0;
  ll maxH,nowH,cnt,maxW;
  cin>>str;
  maxH=nowH=20000LL;
  cnt=0;

  for(int i=0;i<(int)str.size();i++){

    if(str[i]=='/'){
      nowH++;
      if(maxH==nowH){
	cnt++;
	ans.push_back(P(i,cnt/2));
	cnt=0;
      }else if(maxH<nowH){
	maxH=nowH;
      }else{
	cnt+=(maxH-nowH)*2+1;
      }
      
    }else if(str[i]=='_'){

      if(maxH>nowH){
	cnt+=(maxH-nowH)*2;

      }
    }else{

      nowH--;
      if(maxH>nowH){
	cnt+=(maxH-nowH)*2-1;
      }

    }
  }
  
  maxH=nowH=20000LL;
  maxW=(int)str.size()-1;

  cnt=0;

  for(int i=(int)str.size()-1;i>=0;i--){
    if(str[i]=='\\'){
      nowH++;
      if(maxH==nowH){
	cnt++;
	ans.push_back(P(maxW,cnt/2));
	cnt=0;
      }else if(maxH<nowH){
	maxH=nowH;
	maxW=i;
      }else{
	cnt+=(maxH-nowH)*2+1;
      }
    }else if(str[i]=='_'){
      if(maxH>nowH){
	cnt+=(maxH-nowH)*2;
	
      }else if(maxH==nowH){
	maxW=i;
      }
    }else{
      if(nowH==maxH)maxW=i;
      nowH--;
      if(maxH>nowH){
	cnt+=(maxH-nowH)*2-1;
      }
    }
  }

  sort(ans.begin(),ans.end());
  anssum=anssize=0;
  for(int i=0;i<(int)ans.size();i++){
    if(i>0&&ans[i-1]==ans[i])continue;
    anssum+=ans[i].second;
    anssize++;
  }
  
  cout<<anssum<<endl;
  cout<<anssize;
  for(int i=0;i<(int)ans.size();i++){
    if(i>0&&ans[i-1]==ans[i])continue;
    cout<<' '<<ans[i].second;
  }
  cout<<endl;
}

