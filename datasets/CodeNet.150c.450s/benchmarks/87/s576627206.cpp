#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> mp;
ll inf =  1e9;


int main(){
 while(1){
  ll h;
  cin>>h;
  if( h==0 ) break;
  vector<vector<ll> > a(h,vector<ll>(5,0) );
  for(ll i=h-1;i>=0;i--)
   for(ll j=0;j<5;j++) cin>>a[i][j];

  ll res = 0;
  bool flag = true;
  while(flag){
   flag = false;
   for(ll i=0;i<h;i++){
    ll num = a[i][0];
    ll cnt = 1;
    for(ll j=1;j<5;j++){
     if( num == a[i][j] ){
      cnt++;
      if( cnt >= 3 && num != 0){
       if(cnt == 3 ){
	res += num*2;
	a[i][j-1] = a[i][j-2] = 0;
	flag = true;
       }
       a[i][j] = 0;
       res += num;
      }

     }else{
      cnt = 1;
      num = a[i][j];
     }
    }
   }
 /*
   cout<<"before"<<endl;
   for(ll i=h-1;i>=0;i--){
    for(ll j=0;j<5;j++)cout<<a[i][j]<<' ';
    cout<<endl;
   }
  cout<<endl;
*/


   if( flag )
    for(ll i=h-1;i>=0;i--){
     for(ll j=0;j<5;j++){
      if(a[i][j] == 0 ){
       //for(ll k=i+1;k<h;k++) swap( a[k-1][j] , a[k][j] );
       for(ll k=i+1;k<h;k++) a[k-1][j] = a[k][j];
       a[h-1][j] = 0;
      }
     }
    }
  /* cout<<"after"<<endl;
   for(ll i=h-1;i>=0;i--){
    for(ll j=0;j<5;j++)cout<<a[i][j]<<' ';
    cout<<endl;
   }
  cout<<endl;
*/

  }
/*
  for(ll i=h-1;i>=0;i--){
   for(ll j=0;j<5;j++)cout<<a[i][j]<<' ';
   cout<<endl;
  }
  */
  cout<<res<<endl;
 }
    return 0;
}

