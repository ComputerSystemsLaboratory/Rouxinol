#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n,p;
  while(cin >> n >> p, n!=0 && p!=0){
    int s[n];
    int index = 0;
    int stone = p;
    for(int i=0;i<n;i++){
      s[i] = 0;
    }
    while(true){
      if(stone > 0){
    s[index]++;
    stone--;
      }else if(stone == 0){
    stone = s[index];
    s[index] = 0;
      }
     
      if(s[index] == p) break;
      if(index == n-1){
    index = 0;
      }else{
    index++;
      }
    }
    cout << index << endl;
  }
}