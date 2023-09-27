#include<bits/stdc++.h>
using namespace std;
int main(){

  int n;
  string str,s1,s2,s1_r,s2_r;

  cin >>n;

  for(int i=0 ; i < n ; i++){
    cin >>str;
    
    set<string> s;
 
    for(int j=1 ; j < str.size() ; j++){
      s1=str.substr(0,j);
      s2=str.substr(j);
      
     
      s.insert(s1+s2);
      
      s1_r=s1;
      
      reverse(s1_r.begin(),s1_r.end());

      s2_r=s2;

      reverse(s2_r.begin(),s2_r.end());

      s.insert(s1_r+s2);
      s.insert(s1+s2_r);
      s.insert(s1_r+s2_r);
      s.insert(s2+s1);
      s.insert(s2_r+s1);
      s.insert(s2+s1_r);
      s.insert(s2_r+s1_r);

    }
   
    cout <<s.size()<<endl;

  }


  return 0;
}