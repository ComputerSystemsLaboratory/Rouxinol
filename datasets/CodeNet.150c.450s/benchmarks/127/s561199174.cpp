#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  int N;
  cin>>N;
  for(int i=0;i<N;++i){
    set<string> s;
    string train;
    cin>>train;
    int len = train.length();
    for(int j=1;j<len;++j){
      string sub1,sub2;
      sub1 = train.substr(0,j);
      sub2 = train.substr(j);
      for(int k=0;k<2;++k){
        swap(sub1,sub2);
        s.insert(sub1+sub2);
        reverse(sub1.begin(),sub1.end());
        s.insert(sub1+sub2);
        reverse(sub2.begin(),sub2.end());
        s.insert(sub1+sub2);
        reverse(sub1.begin(),sub1.end());
        s.insert(sub1+sub2);
      }
    }
    cout<<s.size()<<endl;
  }

  return 0;
}