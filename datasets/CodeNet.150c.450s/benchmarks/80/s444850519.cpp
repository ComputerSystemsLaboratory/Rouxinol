#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
	int sum[2]={0};
  	for(int i=0; i<2; i++){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      sum[i]+=(a+b+c+d);
    }
  cout<<max(sum[0],sum[1])<<endl;
}
		


