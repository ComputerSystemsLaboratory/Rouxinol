#include <bits/stdc++.h>
using namespace std; 

int main(){
  int N;
  cin >> N;
  long long sum=0;
  vector<int> num(200000);
  for(int i=0;i<N;i++){
    int A;
    cin >> A;
    sum+=A;
    num.at(A)++;
  }
  int Q;
  cin >> Q;
  for(int i=0;i<Q;i++){
    int B,C;
    cin >> B >> C;
    sum+=(C-B)*num.at(B);
    num.at(C)+=num.at(B);
    num.at(B)=0;
    cout << sum << endl;
  }
}