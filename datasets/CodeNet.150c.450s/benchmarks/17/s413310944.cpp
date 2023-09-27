#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void){
  int x;
  vector<int>vec;

  for(int i=0;i<5;i++){
    cin >> x;
    vec.push_back(x);
  }
  sort(vec.begin(),vec.end(),greater<int>());
  for(vector<int>::iterator ite=vec.begin();ite!=vec.end();ite++){
    cout << *ite;
    if(ite+1!=vec.end())cout <<" ";
    else cout << endl;
  }
  return 0;
}