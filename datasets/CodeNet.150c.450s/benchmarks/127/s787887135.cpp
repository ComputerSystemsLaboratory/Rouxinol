#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int main(void){
  string s;
  int n;
  map<string,int>m;
  
  cin >> n;
  cin.ignore();
  
  while(n--){
    getline(cin,s);
    
    m[s]=1;
    string rev1,rev2;
    
    for(int i=0;i<s.size();i++){
      
      rev1=s.substr(0,i);
      rev2=s.substr(i,s.size());
      
      m[rev1+rev2]=1;
      m[rev2+rev1]=1;
      
      reverse(rev1.begin(),rev1.end());
      reverse(rev2.begin(),rev2.end());
      
      m[rev1+s.substr(i,s.size())]=1;
      m[s.substr(i,s.size())+rev1]=1;
      m[s.substr(0,i)+rev2]=1;     
      m[rev2+s.substr(0,i)]=1;     
      
      m[rev1+rev2]=1;
      m[rev2+rev1]=1;
    }
    
    cout << m.size() << endl;
    m.clear();
  }
  
  return 0;
}