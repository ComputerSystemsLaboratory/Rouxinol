#include<iostream>
using namespace std;

int main(){
  int n, index;

  cin >> n;

  int nums[n];

  for(int i = 0; i < n; i++){
    index = i;
    cin >> nums[index];
  }

  for(int j = (n - 1); j >= 0; j--){
    index = j;
    cout << nums[index];
    if(j != 0)cout << " ";
  }
  cout << endl;
}