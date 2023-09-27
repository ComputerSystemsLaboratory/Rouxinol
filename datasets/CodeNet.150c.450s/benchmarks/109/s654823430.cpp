#include <bits/stdc++.h>
using namespace std;
int main(){

  for(;;){

  int n;
  cin>>n;
  if(!n) break;

  pair <string,string> train[n];

  for(int i=0;i<n;i++){

    string s1,s2;
    cin>>s1>>s2;

    train[i]=make_pair(s1,s2);

  }

  sort(train,train+n);

  priority_queue <string, vector <string>,greater <string>> train_q;
  int r=0;

  for(int i=0;i<n;i++){

    if(train_q.empty() || train_q.top()>train[i].first) r++;
    else train_q.pop();

    train_q.push(train[i].second);

  }

  cout<<r<<endl;

  }

  return 0;

}

