#include<iostream>
#include<set>
#include<string>
#include<vector>
using namespace std;
int main()
{
  int n;
  string a,b;
  vector<string> answer;
  typedef set<string> set_t;
  set_t A;
  cin >>n;
  for(int variable = 0;variable < n;++variable){
    cin >> a;
    if(a == "insert"){
      cin >> b;
      A.insert(b);
    }
    else{
      cin >> b;
      if(A.count(b) == 1) answer.push_back("yes") ;
      else answer.push_back("no");
    }
  }
  for(int variable = 0;variable < answer.size();++variable)
    cout << answer[variable] <<endl;
}