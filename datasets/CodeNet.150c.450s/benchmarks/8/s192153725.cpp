#include <iostream>
#include <string>

using namespace std;

int main(void){

  int number;
  int A=0,B=0;
  cin >> number;

  for(int i=0; i<number; i++){
     string str1,str2;
     cin >> str1 >> str2;

     if(str1 > str2) A+= 3;
     else if(str1 == str2){
          A++;
          B++;
     }else
         B+=3;
  }

  cout << A << " " << B << endl;

  return 0;
}