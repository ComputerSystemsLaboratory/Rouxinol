#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

int m;

int main(){
  cin>>m;
  
  for(int ite=0;ite<m;ite++){
    string str;
    set<string> S;
    
    cin>>str;

    for(int i=1;i<str.size();i++){
      string Front=str.substr(0,i);
      string Back=str.substr(i,str.size()-i);

      string Front_r(Front);
      string Back_r(Back);

      reverse(Front_r.begin(),Front_r.end());
      reverse(Back_r.begin(),Back_r.end());
      
      S.insert(Front+Back);
      S.insert(Back+Front);
      S.insert(Front_r+Back);
      S.insert(Back+Front_r);
      S.insert(Front+Back_r);
      S.insert(Back_r+Front);
      S.insert(Front_r+Back_r);
      S.insert(Back_r+Front_r);

    }

    cout<<S.size()<<endl;
  }
      
      
  return 0;
}