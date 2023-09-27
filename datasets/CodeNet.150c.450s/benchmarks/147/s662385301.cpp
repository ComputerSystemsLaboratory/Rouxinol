#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  
  vector<int> num(N+1);
  int count = 1;
  while(count <= N){
    for(int x = 1; ; x++){
      int fnx = x*x + 1 + 1 + x + 1 + x;
      if(fnx > count){
        break;
      }
      
      for(int y = 1; ; y++){
        int fny = x*x + y*y + 1 + x*y + y + x;
        if(fny > count){
          break;
        }//if
        
        for(int z = 1; ; z++){
          int fnz = x*x + y*y + z*z + x*y + y*z + z*x;
          if(fnz == count ){
            num.at(count)++;
          }//if
          if(fnz > count){
            break;
          }//if
        }//for
        
      }//for
    
    }//for
    
    count++;
  }//while
  
  for(int i = 1; i <= N; i++){
    cout << num.at(i) << endl;
  }
  
}