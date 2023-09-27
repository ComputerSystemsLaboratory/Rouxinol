#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;


  while(1){
    int ans =0;
    cin >> n;
    if(n == 0){
      //cout << " n " << n <<endl;
      break;
    }
    
    for(int i = n; i > 0 ; i -= 2){
      
      string str1, str2;
      str1 = str2 = "null";
      /* if(i == 1){
        cin >> str1 >> str2;
      }else{
        cin >> str1 ;
        } */

      if ( n%2 == 1 && i == 1 ) {
        cin >> str1;
        break;
      }

      cin >> str1 >> str2;

      if(str1 == "lu" && str2 == "ru"){
        ans++;
      }
      if(str1 == "ru" && str2 == "lu"){
        ans++;
      }
      if(str1 == "ld" && str2 == "rd" ){
        ans++;
      }
      if(str1 == "rd" && str2 == "ld"){
        ans++;
      }
    }

    cout <<  ans << endl;
  }
  return 0;
}

