#include<bits/stdc++.h>
using namespace std;

int main(){
  string query,strconv,str,p;
  int q,a,b;

  cin>>str;
  cin>>q;
  
  for(int i=0; i<q; i++){
    cin>>query;
    cin>>a>>b;
    if(query == "print"){
      cout<<str.substr(a,b-a+1)<<endl;
    }else if(query == "reverse"){
      reverse(str.begin()+a,str.begin()+b+1);
    }else if(query == "replace"){
      cin>>p;
      str.replace(a,b-a+1,p);
    }
  }
}


