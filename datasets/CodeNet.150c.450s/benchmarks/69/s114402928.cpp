#include<iostream>
using namespace std;
 
int data[10];
 
bool solve(int i, int a, int b){
 
  if(i == 10) return true;
 
  if(data[i] > a) return solve(i+1, data[i], b);
  if(data[i] > b) return solve(i+1, a, data[i]);
  
  return false;
}
 
int main(){
 
  int n;
 
  cin >> n;
  while(n--){
 
    for(int i=0;i<10;i++) cin >> data[i];
 
    cout << (solve(0, 0, 0)?"YES\n":"NO\n");
 
  }
 
}