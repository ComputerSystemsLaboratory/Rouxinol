
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<complex>
using namespace std ;
typedef vector<int> vi ;
typedef vector<vi> vvi ;
typedef vector<string> vs ;
typedef pair<int, int> pii; 
typedef long long ll ;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()

int main(void){
  static bool cmp[10000000] = {true};
  static int npr[10000000];
  loop(i,2,10000000){
    if(!cmp[i]){
      for(int j = 2 ; j * i < 10000000 ; j ++){
	cmp[i*j]=true;
      }
    }
    npr[i]=npr[i-1] + !cmp[i];
  }
  int n ;
  while(cin>>n){
    cout<<npr[n]<<endl;
  }
}
  