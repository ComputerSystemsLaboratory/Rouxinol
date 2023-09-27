#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define pb push_back
#define rep(i,a) for(int i = 0; i < a; i++)

int main(void){
  int num,l;
  int ans;
  while(cin>>num>>l,num+l){
    vector<int> a;
    a.pb(num);
    int index = 0,j;
    bool flag = true;
    while(flag){
      vector<int> dig(l);
      int tmp = a[index];
      for(int i = 0 ; i < l ; i ++){
	dig[i] = tmp % 10 ;
	tmp /= 10;
      } 
      sort(dig.begin(),dig.end());
      
      int maxa = 0 ,mina = 0;
      for(int i = 0 ; i < l ; i ++){
	mina = mina * 10 + dig[i];
	maxa = maxa * 10 + dig[l - i - 1];
      }
      a.pb(maxa-mina);
      index++;
      
      rep(i,index){
	if(a[index] == a[i]){
	  flag = false;
	  j = index;
	  ans = i;
	  break;
	}
      }
    }
    cout<<ans<<" "<<a[index]<<" "<<index-ans<<endl;
  }
}