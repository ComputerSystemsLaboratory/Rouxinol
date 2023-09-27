#include<iostream>
#include<vector>

using namespace std;
vector<int> vec(2000000);
void maxHeapify( int i,int n){
  int l,r,largest;
  l=2*i;
  r=2*i+1;
  if(l<=n && vec[l]>vec[i]){
    largest= l;
  }
  else largest = i;

  if(r<= n && vec[r]> vec[largest]){
    largest =r;
  }

  if(largest != i){
    swap(vec[i],vec[largest]);
    maxHeapify(largest, n);
  }
}

int main(){
  int n;
  cin>> n;
  for(int i=1;i<= n;i++){
    cin>> vec[i];
  }
  for(int i=n/2; i >=1 ; i--){
    maxHeapify(i,n);
  }

  for(int i=1;i<=n;i++){
    cout<<" "<<vec[i];
  }
  cout<<endl;
  return 0;
}

