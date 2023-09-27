#include<queue>
#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  priority_queue<int> Q;
  vector<int> answer;
  string str;
  int q;
  while(cin >> str && str != "end"){
    if(str == "insert"){
      cin >> q;
      Q.push(q);
    }
    else{
      answer.push_back(Q.top());
      Q.pop();
    }
  }
  for(int variable = 0;variable < answer.size();++variable)
    cout << answer[variable] << endl;
}
    