#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
  int n,i;
  string s,head,tail;
  set<string> list;
  cin>>n;
  while(n-->0){
    cin>>s;
    list.clear();
    for(i=1;i<s.size();i++){
      head=s.substr(0,i);
      tail=s.substr(i);
      list.insert(head+tail);
      list.insert(tail+head);
      reverse(head.begin(),head.end());
      list.insert(head+tail);
      list.insert(tail+head);
      reverse(tail.begin(),tail.end());
      list.insert(head+tail);
      list.insert(tail+head);
      reverse(head.begin(),head.end());
      list.insert(head+tail);
      list.insert(tail+head);
    }
    cout<<list.size()<<endl;
  }
}