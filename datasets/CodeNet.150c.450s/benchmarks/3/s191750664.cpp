#include<iostream>
#include<string>
using namespace std;

int main(){
 int q,a,b;
 string str,com,rep;
 char temp;

 cin >> str >> q;

 for(int i = 0; i < q; i++){
  cin >> com >> a >> b;

  if(com == "print"){
   cout << str.substr(a, b-a+1) << endl;
  } else if(com == "reverse") {
   while(a < b){
    temp = str[a];
    str[a] = str[b];
    str[b] = temp;
   
    a++;
    b--;
   }
  } else if(com == "replace"){
   cin >> rep;

   str = str.replace(a, b-a+1, rep);
  }
 }

 return 0;
}