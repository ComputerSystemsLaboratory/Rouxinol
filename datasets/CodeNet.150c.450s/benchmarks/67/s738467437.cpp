#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(){ _;
  int n;
  while(cin>>n,n!=0){
    int sum=0;
    int rest=1;
    for(int i=2;;i++){
      rest+=i;
      if(rest>n){break;}
      if((n-rest)%i==0){sum++;}
    }
    cout<<sum<<endl;
  }
}