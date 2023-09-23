#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;


using namespace std;


const int MAX = 1000000;

int list[MAX];

int main()
{
  
  for(int i=2;i<MAX;i++){
    list[i]=0;
  }

  //1が素数-1は除外された数;
  for(int i=2;i<MAX;i++){

    if(list[i]!=-1) list[i]=1;{

      for(int k=2;k<MAX;k++){
        if(i*k>=MAX) break;
        list[i*k]=-1; 
      }
    }
  //  cout << i << "=" << list[i] << endl << endl;

  }
 

  while(true){
    int a,d,n;

    cin >> a >> d >> n;

    if(a==0&&d==0&&n==0) break;

    int count=0;
    for(int i=0;(a+d*i)<MAX;i++){
      

      if(list[a+d*i]==1) count++;

      if(count==n){
        cout << a+d*i << endl;
        break;
      }

    }
  }
  return 0;
}