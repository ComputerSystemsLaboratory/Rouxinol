#include<iostream>
#include<string>
using namespace std;

int main(void){
   string str,command,p,tmp;
   int count,a,b;
   cin >> str >> count;
   for (int i = 0; i < count; i++){
      cin >> command;
      if (command == "replace"){
         cin >> a >> b >> p;
         for (int j = 0; j < b - a + 1; j++){
            str[a + j] = p[j];
         }
      }
      if (command == "reverse"){
         cin >> a >> b;
         for (int j = a; j <= b; j++){
            tmp[b - j] = str[j]; 
         }
         for (int j = a; j <= b; j++){
            str[j] = tmp[j - a];
         }
      }
      if (command == "print"){
         cin >> a >> b;
         for (int j = 0; j < b - a + 1; j++){
            cout << str[a + j];
         }
         cout << endl;
      }
   }
   return 0;
}
