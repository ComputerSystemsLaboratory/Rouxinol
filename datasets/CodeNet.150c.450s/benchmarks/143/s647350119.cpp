#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
int N;
cin>>N;
 long long sum=0;
vector<long long>number(10000001,0);
  rep(i,N) {
   long long a;
   cin>>a;
   sum+=a;
   number.at(a)++;
 }
long long q;
  cin>>q;
  rep(i,q){
  	long long a,b;
    cin>>a>>b;
  	sum+=(b-a)*number.at(a);
    number.at(b)+=number.at(a);
    number.at(a)=0;
    cout<<sum<<endl;
  }
}