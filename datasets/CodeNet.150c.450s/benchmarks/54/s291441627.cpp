#include <iostream>
#include <string>
using namespace std;

int main(){
 string t,w;
 int cnt=0;

 cin >> w ;
 for(int i=0;i<w.length();i++){
  w[i]=tolower(w[i]);
 }

 while (1){
  cin >> t ;
  if(t == "END_OF_TEXT")break;
  for(int i=0;i<t.length();i++){
   t[i]=tolower(t[i]);
  }

  if(t==w)cnt++;
 }
 
 cout << cnt << endl;

 return 0;
}