#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int data[100],cnt=0,n;
  cin >> n;
  for(int i=0;i<n;i++) cin >> data[i];
  for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
      if(data[j]<data[j-1]){
    swap(data[j],data[j-1]);
    cnt++;
      }
    }
  }
  for(int i=0;i<n;i++){
    cout << (i!=0?" ":"") << data[i];
  }
  cout << endl << cnt << endl;
  }