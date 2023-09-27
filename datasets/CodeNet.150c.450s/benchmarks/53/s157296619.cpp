#include <bits/stdc++.h>
using namespace std;


int main() {

long N;
cin>>N;

cout<<N<<":";

vector<long> p(1000005);
p[2]=1;
p[3]=1;
for(int i=6;i<=1000000;i+=6){
  int tmp=i-1;
  bool isprime=1;
  for(int j=2;j<=sqrt(tmp);j++){
    if(tmp%j==0) isprime=0;
  }
  if(isprime) p[i-1]=1;

  tmp=i+1;
  isprime=1;
  for(int j=2;j<=sqrt(tmp);j++){
    if(tmp%j==0) isprime=0;
  }
  if(isprime) p[i+1]=1;

}

for(int i=0;i<10;i++){
  //cout<<i<<" "<<p[i]<<endl;
}

int i=2;
int tmp=N;

while(i<=sqrt(N)){
  if(p[i]==1) while(tmp%i==0){
    cout<<" "<<i;
    tmp/=i;
  }
  i++;
}

if(tmp>1) cout<<" "<<tmp;
cout<<endl;
}

