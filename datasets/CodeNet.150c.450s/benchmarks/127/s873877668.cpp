#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

void trans(vector<char> l, vector<char> r);

set<vector<char>> st;
int main(){
  int n;
  
  cin >> n;

  for(int i=0; i<n; ++i){
    string str;
    vector<char> v;
   

    cin >> str;
    v.assign(str.begin(), str.end());
    //cout << "clear" << endl;
    for(int j=0; j<v.size()-1; ++j){
      vector<char> lhs;
      vector<char> rhs;
      lhs.assign(&v[0], &v[j+1]);
      rhs.assign(&v[j+1], &v[v.size()]);
      // for(auto i:lhs){
      // cout << i;
      //}
      //cout << " is lhs" << endl;
      //for(auto i:rhs){
      // cout << i;
      ///}
      //cout << " is rhs" << endl;
      // cout << "clear" << endl;
      trans(lhs,rhs);
      trans(rhs,lhs);
      //cout << "clear" << endl;
    }
    //cout << "clear" << endl;
    cout << st.size() <<endl;
    //for(auto j:st){
    //for(auto k:j){
    //cout << k;
    //}
    //cout << endl;
    //}
    st.clear();
  }
  return 0;
}

void trans(vector<char> l, vector<char> r){
  vector<char> v;

  v.assign(l.begin(),l.end());
  v.insert(v.end(), r.begin(), r.end());
  st.insert(v);
  
  reverse(l.begin(), l.end());
  
  v.assign(l.begin(),l.end());
  v.insert(v.end(), r.begin(), r.end());
  st.insert(v);
  
  reverse(r.begin(), r.end());

  v.assign(l.begin(),l.end());
  v.insert(v.end(), r.begin(), r.end());
  st.insert(v);
  
  reverse(l.begin(), l.end());
  
  v.assign(l.begin(),l.end());
  v.insert(v.end(), r.begin(), r.end());
  st.insert(v);
  //cout << "loop" << endl;
}