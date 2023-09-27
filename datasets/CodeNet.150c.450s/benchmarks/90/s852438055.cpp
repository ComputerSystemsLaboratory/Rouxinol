#include <iostream>

using namespace std;

constexpr int n = 100;
int freq[n];
int main(){
  int a;
  while(cin >> a){
    freq[a-1]++;
  }
  int maxi,maxval=-1;
  for(int i=0;i<n;++i){
    if(maxval<freq[i]){
      maxi = i;
      maxval = freq[i];
    }
  }

  for(int i=0;i<n;++i){
    if(freq[i]==maxval){
      cout << i+1 << endl;
    }
  }
}