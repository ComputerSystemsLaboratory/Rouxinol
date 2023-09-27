#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
  int num,tmp;
 
  cin >> num;

  int a[num][3];


  for(int i=0; i<num; ++i)
    cin >> a[i][0] >> a[i][1] >> a[i][2];


  for(int i=0; i<num; ++i){

    sort(a[i],a[i]+3,greater<int>());
    
    if(a[i][0]*a[i][0] == a[i][1]*a[i][1] + a[i][2]*a[i][2]){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
  }  

}