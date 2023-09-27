#include <iostream>
#include<algorithm>
#include <string>
using namespace std;
int main(void){
   string str, moji, m;
   int q = 0;
   cin >> str;
   cin >> q;
   for(int i = 0; i < q; i++){
       int a = 0, b = 0;    
       cin >> moji >> a >> b;  
       if(moji == "print"){          
           cout << str.substr(a, b-a+1) <<endl;
       }  
       else if(moji == "reverse"){
               string str2 = str.substr(a, b-a+1);
               reverse(str2.begin(), str2.end());
               str = str.replace(a, b-a+1, str2);
       }
       else if(moji == "replace"){
           cin >> m;
           str = str.replace(a, b-a+1, m);
       }    
   }
   return 0;    }
