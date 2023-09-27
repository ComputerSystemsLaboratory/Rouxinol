#include<iostream>
#include<stack>
#include<queue>
#include<string>
#define P pair<int, int>

using namespace std;

int main(){
  string s;
  stack<int> s1, s3;
  stack<P> s2;
  int total=0;
  cin >> s;
  for(int i=0;i<s.length();i++){
    if(s[i]=='\\')s1.push(i);
    else if(s[i]=='/'){
      if(!s1.empty()){
        int j=s1.top();s1.pop();
        total += i-j;
        int a = i-j;
        while(!s2.empty() && s2.top().first>j){
          a += s2.top().second;s2.pop();
        }
        s2.push(P(j, a));
      }
    }
  }
  cout << total << endl;
  while(!s2.empty()){s3.push(s2.top().second);s2.pop();}
  cout << s3.size() << (s3.empty()?'\n': ' ');
  while(!s3.empty()){
    cout << s3.top();s3.pop();
    cout << (s3.empty()?'\n':' ');
  }
}
