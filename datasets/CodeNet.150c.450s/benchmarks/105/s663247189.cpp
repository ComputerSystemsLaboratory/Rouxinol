#include <bits/stdc++.h>
using namespace std;
using ll=long long;
/*
最後の0ラッシュで作れる値と同じだったらOKとか
10^18までふえうるかな
setとsort+uniqueどっちが時間かかるか
mapなら早いとかある？

くそう
mapでも超でかいメモリ。入る数字が多いということか
調整できないやつを探すとか
00001
00010
00100
01000
10000
の5個があれば、どれでも調整可能
調整できない桁を探すとか
010
111
101

010

101はいけるとか
最大2^100 2^100になるか
桁でみる？
さっぱりわからん
set,map,sort+unique全部だめ。
map有力だと思ったんだが
せいぜい2^30くらいまで

むしできるbit桁を探す
それででたのがM4かな
もっと短縮せな

項目3つって、パターン少ないの

うしろから見る。0になる要素なら継続、そうじゃないなら1で終了
*/
int main(){
  ll T,N; cin>>T;
  for(ll i=0; i<T; i++){
    cin>>N;
    vector<ll> A(N,0);
    for(ll j=0; j<N; j++) cin>>A[j];
    string S; cin>>S;
    vector<ll> DP(1,0);//ありえる要素の最小値を追加
    bool end=false;
    for(ll j=N-1; j>=0; j--){
      ll tmp=A[j];
      for(auto v:DP) tmp=min(tmp,tmp^v);
      if(S[j]=='0' && tmp>0) DP.emplace_back(tmp);
      else{
        if(tmp>0){//存在しなかったら0にならない
          end=true;
          break;
        }
      }
    }
    cout<<end<<endl;
  } 
}
