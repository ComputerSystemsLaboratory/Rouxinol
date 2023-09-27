#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int solve(vector<int> &A,int p,int r){
  int x = A[r];
  int i = p - 1;

  for(int j = p ; j < r ; j++){
    if(A[j] <= x){
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);

  return i + 1;
}

int main(){
  int n;

  cin >> n;
  vector<int> v(n);
  for(int i = 0 ; i < n ; i++){
    cin >> v[i];
  }

  int pos = solve(v,0,n-1);
  vector<string> ans(n);

  for(int i = 0 ; i < n ; i++){
    stringstream ss;
    string str;

    ss << v[i];
    ss >> str;

    if(i == pos){
      ans[i] = "[" + str + "]";
    }else{
      ans[i] = str;
    }
  }

  for(int i = 0 ; i < n ; i++){
    if(i != n-1){
      cout << ans[i] << " ";
    }else{
      cout << ans[i] << endl;
    }
  }  

  return 0;
}