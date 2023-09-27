#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
    int n;
    int count = 0;
    cin >> n;
    if(n==0){break;}
    vector<string> str(n);
    for(int i = 0;i<n;i++){
      cin >> str.at(i);
    }
    for(int i=0;i < n-1;i++){
      if (str.at(i) == "lu"&&str.at(i+1)=="ru"){
        count++;
      }
     else if (str.at(i) == "ru"&&str.at(i+1)=="lu"){
        count++;
      }
       else if (str.at(i) == "rd"&&str.at(i+1)=="ld"){
        count++;
      }
       else if (str.at(i) == "ld"&&str.at(i+1)=="rd"){
        count++;
      }
    }
    cout << count<< endl;
  }
}
      
    
    
     
