#include <iostream>
using namespace std;
string smallchange(string a){ 
  for(int i = 0;i < a.length();i++){
    if(a[i] >= 'A' && a[i] <= 'Z'){
      a[i] = a[i] + 0x20;
    }   
  }
  return a;
}
int main(){
 std::string bun;
 int a[29] = {0};
 string c = "a";
 while(cin >> bun){
 bun = smallchange(bun);
 for(int i = 0;i < bun.length();i++){
   for(int j = 0;j < 26; j++){
     if(bun[i] == 'a'+j){
       a[j]++;
     }   
   }   
 }
 }
 for(int i = 0;i < 26;i++){
   cout << c << " : " << a[i]<< endl;
   c[0]++;
 }
}