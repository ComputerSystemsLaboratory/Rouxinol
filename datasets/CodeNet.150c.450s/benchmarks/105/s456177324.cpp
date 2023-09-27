#include "bits/stdc++.h"
using namespace std;
#define REP(i, n) for(ll i = 0;i < n;i++)
#define ll long long
#define MOD 1000000007LL
#define llMAX 9223372036854775807LL
#define llMIN -9223372036854775808LL
using vi = vector<ll>; // intの1次元の型に vi という別名をつける
using vvi = vector<vi>; // intの2次元の型に vvi という別名をつける

ll n,x,y,t;

vi zsan(200);
vi osan(200);


ll zw=0;
ll ow=0;




ll cbit(ll i){
  ll tmp=0;
  for(tmp=0;i>0;i/=2){
    tmp++;
  }
  return tmp;
}





ll kensyo(ll aj)
{
  if (aj==0){
    return 0;
  }
  if (zw==0){
    return 1;
  }
  

  ll caj=cbit(aj);
  ll myno=0;
  vi zdmy(zw);
  ll maxno=0;
  for(int i=0;i<zw;i++){
    zdmy[i]=zsan[i];
    maxno=max(maxno,zsan[i]);
  }

  ll mcbit=cbit(maxno);//maxnoは1<<(mcbit-1)以上～1<<mcbit未満
  if (aj>=(1LL<<mcbit))return 2;

  ll newmaxno=0;
  for(int i=0;i<64;i++){
    mcbit=cbit(maxno);//maxnoは1<<(mcbit-1)以上～1<<mcbit未満
    if (aj>=(1LL<<mcbit))return 3;
    if ((1LL<<(mcbit-1))<=aj)
    {
      aj^=maxno;//これで最上位がきえた
    }
    //cout<<"aj"<<aj<<" ";

    newmaxno=0;
    for(ll j=0;j<zw;j++){
      if ((1LL<<(mcbit-1))<=zdmy[j]) zdmy[j]^=maxno;
      newmaxno=max(newmaxno,zdmy[j]);
    }
    maxno=newmaxno;
    if (maxno==0)break;
  }

  if (aj!=0){
    return 4;
  }
  return 0;
}





int main(){
  
  

  
  cin>>t;
  vi ans(t);
  for(ll i=0;i<t;i++){
    cin >> n;
    vi a(n);
    REP(j,200) zsan[j]=0;
    REP(j,200) osan[j]=0;

    REP(j,n) cin>>a[j];
    string s;cin>>s;
    ll leng=s.length();
    zw=0;
    ow=0;
    ans[i]=0;
    for(int j=leng-1;j>=0;j--){
      if (s[j]==48){//0さん
        zsan[zw]=a[j];
        zw++;
      }else{//1さん
        osan[ow]=a[j];
        ow++;
        //ここで検証。どうやっても0が勝てないなら1を出力
        ans[i]+=kensyo(a[j]);
      }
    }
    if (ans[i]!=0)ans[i]=1;
    
  }
  

  for(ll i=0;i<t;i++){
    cout<<ans[i]<<endl;
  }
  
  return 0;

}