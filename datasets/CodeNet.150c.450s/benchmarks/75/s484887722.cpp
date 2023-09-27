#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> h(2000001);

void maxHeapify(int i){
  int l = 2*i;
  int r = 2*i+1;
  int largest;
  if(l <= n && h.at(l) > h.at(i)){
    largest = l;
  }else{
    largest = i;
  }

  if(r <= n && h.at(r) > h.at(largest)){
    largest = r;
  }
  
  if(largest != i){
    swap(h.at(i),h.at(largest));
    maxHeapify(largest);
  }
}



int main(){
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> h.at(i);
  }
  for(int i = n/2;i >= 1;i--){
    maxHeapify(i);
  }
  for(int i = 1; i <= n; i++){
    cout << " " << h.at(i);
  }
  cout << endl;
  return 0;
}
