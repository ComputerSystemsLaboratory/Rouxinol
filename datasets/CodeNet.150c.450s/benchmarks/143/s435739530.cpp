#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  vector<int> backet(100000,0);
  long long sum=0LL;
  for(int i=0;i<N;i++){
    int A;
    cin>>A;
    sum+=A;
    backet.at(A-1)++;
  }
  int Q;
  cin>>Q;
  for(int i=0;i<Q;i++){
    int B,C;
    cin>>B>>C;
    sum+=backet.at(B-1)*(C-B);
    backet.at(C-1)+=backet.at(B-1);
    backet.at(B-1)=0;
    cout<<sum<<endl;
  }
}
