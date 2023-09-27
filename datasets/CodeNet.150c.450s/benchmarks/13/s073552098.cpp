#include <iostream>
using namespace std;
int main(void){
   string s,p;
   cin>>s>>p;
   
   string ans="No";
   for(int i=0;i<(int)s.length();i++){
       bool flag=true;
       for(int j=0; j<(int)p.length();j++){
           if(s[(i+j)%(int)s.length()]!=p[j]){
               flag=false;
               break;
           }
       }
       if(flag){
           ans="Yes";
           break;
       }
   }
   cout<<ans<<endl;
}

