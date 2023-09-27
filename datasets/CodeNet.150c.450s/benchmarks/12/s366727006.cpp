#include<iostream>
using namespace std;

int main() {

  int N;
  cin>>N;

  int a[N];
  for(int i = 1; i <= N; i++) cin>>a[i];

  for(int i = 1; i <= N; i++) {
    cout<<"node "<<i<<": key = "<<a[i]<<", ";
    if(i != 1) cout<<"parent key = "<<a[i/2]<<", ";
    if(i*2 <= N) cout<<"left key = "<<a[i*2]<<", ";
    if(i*2+1 <= N) cout<<"right key = "<<a[i*2+1]<<", ";
    cout<<endl;
  }
  return 0;
}

