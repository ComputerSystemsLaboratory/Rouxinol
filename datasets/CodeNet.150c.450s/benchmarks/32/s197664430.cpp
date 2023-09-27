#include <bits/stdc++.h>
using namespace std;

int main() {
 int m,a,b;
  while( cin>>m>>a>>b && m > 0 || a > 0 || b > 0){
    
    vector<int>vec(m);
    for(int i=0;i<m;i++){
      cin>>vec.at(i);
    }
    int ans=0;
    int num;
    
    
    for(int i=a;i<=b;i++){
   
     if(vec.at(i-1)-vec.at(i) >=ans){
       ans=vec.at(i-1)-vec.at(i);
       num =i;
     }
    }
    cout << num << endl;
  }
  return 0;
}
    
     
    
    
       
    
    
    
   
    
    
