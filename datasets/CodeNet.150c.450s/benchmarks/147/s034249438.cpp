#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define cs(ele) cout<<ele<<'\n'
int main()
{

  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  vector<int> d(10050,0);
  for(int i=1; i<=105; i++){
    for(int j=1; j<=105; j++){
        for(int k=1; k<=105; k++){
            ll a=i*i+j*j+k*k+i*j+k*j+i*k;
            //cout<<a<<endl;
            if(a<10050){d[a]++; }//cout<<d[a]<<endl;}
        }
    }
  }
  for(int i=1; i<=n; i++){
    cout<<d[i]<<endl;
  }

    return 0;
}