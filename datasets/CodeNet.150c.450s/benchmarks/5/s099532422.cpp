#include<bits/stdc++.h>
using namespace std;
#define ANSWER(x) cout<<x<<endl
#define debug(x) cout<<#x<<": "<<x
int main(){
  int n,num;
  stack<int> array;
  
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> num;
    array.push(num);
  }
  for(int i=0;i<n;i++){
    cout << array.top();
    array.pop();
    if(i == n-1)cout << endl;
    else cout << " ";
  }
}