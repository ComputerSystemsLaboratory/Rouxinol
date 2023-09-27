#include<iostream>
#include<set>
#include<string>
#include<algorithm>

#define all(c) (c).begin(),(c).end()

using namespace std;

int main(void){

  int n;
  cin >> n;
  while(n--){
    set<string>st;

    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
      string l=s.substr(0,i),r=s.substr(i,s.size()-i);
      
      st.insert(l + r);
      st.insert(r + l);      
      reverse(all(l));
      st.insert(l + r);
      st.insert(r + l);            
      reverse(all(r));
      st.insert(l + r);
      st.insert(r + l);            
      reverse(all(l));
      st.insert(l + r);      
      st.insert(r + l);      
    }
    cout << st.size() << endl;
  }
  
  return 0;
}