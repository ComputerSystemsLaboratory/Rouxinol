#include<iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main(){
  int n;
  cin >> n;
  deque<int> deq;

  for(int i=0;i<n;i++){
    int k;
    cin >> k;
    deq.push_front(k);
  }
  for(deque<int>::iterator it=deq.begin(),end=deq.end();it!=end;it++){
    cout << (it!=deq.begin()?" ":"")<< *it;
  }
  cout << endl;
}


