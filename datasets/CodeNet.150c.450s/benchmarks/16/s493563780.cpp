#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

int main(){
  int j, pertial_area, total_area=0;
  string s;
  stack<int> S1;
  stack<pair<int, int> > S2;
  vector<int> V;
  
  cin >> s;
  for(int i=0; i<s.size(); i++){
    if(s[i] == '\\')
      S1.push(i);
    else if(!S1.empty() && s[i] == '/'){
      pertial_area = i - S1.top();
      total_area += pertial_area;

      while(!S2.empty() && S2.top().first > S1.top()){
        pertial_area += S2.top().second;
        S2.pop();
      }
      
      S2.push(make_pair(S1.top(), pertial_area));
      S1.pop();
    }
  }

  while(!S2.empty()){
    V.push_back(S2.top().second);
    S2.pop();
  }
  
  cout << total_area << endl;
  cout << V.size();
  for(int i=V.size()-1; i>=0; i--){
    cout << " " << V[i];
  }
  cout << endl;
  
  return 0;
}

