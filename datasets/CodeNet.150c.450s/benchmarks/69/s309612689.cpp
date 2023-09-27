#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> P;

string str;

int main()
{
  int n;
  int i,j;
  int num;

  cin>>n;

  rep(i,n){

    bool yes=true;
    int max1=0,max2=0;

    rep(j,10){

      scanf("%d",&num);

      if(max1>num && max2>num){
	if(yes)	cout<<"NO"<<endl;
	yes=false;
	continue;
      }
      else if(max1>num)
	max2=num;
      else if(max2>num)
	max1=num;
      else
	max1>max2 ? max1=num : max2=num;

    }//repj
    if(yes)
      cout<<"YES"<<endl;
  }//repi
}