#include<iostream>
#include<set>
#include<string>
#include<string.h>
using namespace std;
set<string>S;
int main(){
      int n;
      cin>>n;
      string s1,s2;
      while(n--){
            cin>>s1>>s2;
            if(s1=="insert"){
                  S.insert(s2);
            }
            else if(s1=="find"){
                  if(S.find(s2)==S.end())
                        cout<<"no"<<endl;
                  else
                        cout<<"yes"<<endl;
            }
      }
      return 0;
}
