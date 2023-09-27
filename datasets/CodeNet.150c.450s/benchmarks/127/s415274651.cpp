#include<iostream>
#include<string>
#include<algorithm>
#include<set>
using namespace std;
int main(){
  
  string str;
  int n;
  cin >>n;
  for(int i=0;i<n;i++){
    set<string> s;
    cin >> str;
    for(int j=1;j<str.size();j++){
      string str1=str.substr(0,j);
      string str2=str.substr(j);
      string str3=str1;
      string str4=str2;
      reverse(str3.begin(),str3.end());
      reverse(str4.begin(),str4.end());
      s.insert(str1+str2);    
      s.insert(str1+str4);    
      s.insert(str2+str1);    
      s.insert(str4+str1);    
      s.insert(str3+str2);    
      s.insert(str3+str4);    
      s.insert(str2+str3);    
      s.insert(str4+str3);    
    }      
    cout << s.size() << endl;
  }
  return 0;
}