#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin>>N;
  string a;
  int ac=0;
  int wa=0;
  int tle=0;
  int re=0;
  for(int i=0;i<N;i++){
 cin>>a;
    if(a=="AC"){
    ac++;
    }
    else if(a=="WA"){
    wa++;
    }
     else if(a=="TLE"){
    tle++;
    }
    else{
    re++;
    }
    
  }

  cout<<"AC x ";
    cout<<ac<<endl;
  
   cout<<"WA x ";
    cout<<wa<<endl;
  
 cout<<"TLE x ";
    cout<<tle<<endl;
  
   cout<<"RE x ";
    cout<<re<<endl;
}
