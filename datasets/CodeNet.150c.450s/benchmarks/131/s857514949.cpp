#include<bits/stdc++.h>
using namespace std;
int main(){

  string a;
  int n;
  

  while(1){
    
    cin >>a>>n;

    if(a=="0" && n==0)break;
    
    map<string,int> m;
    
    m[a]=0;
    int b=1;
    int ans1,ans2;

    while(1){

      while(a.size() < n){
	a="0"+a;
      }
      
      string s_max=a,s_min=a;
      sort(s_max.begin(),s_max.end(),greater<char>());
      sort(s_min.begin(),s_min.end());
      
      stringstream ss1,ss2; 
     
      ss1<<s_max;
      ss2<<s_min;

      int max,min;

      ss1>>max;
      ss2>>min;

      int x;

      x=max-min;

      stringstream s_x;

      s_x<<x;

      s_x>>a;
      
      if(m.count(a) != 0){
	ans1=m[a];
	ans2=b-ans1;
	break;
      }
      
      m[a]=b;
      b++;

    }
    
    cout <<ans1<<" "<<a<<" "<<ans2<<endl;

  }
  

  return 0;
}