#include <iostream>
#include <cstring>
#include <cstdlib> 
using namespace std;


int X;
char s[1050];

string b[9] = {".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


int main(){

  cin >> X;
  while(X){

    cin >> s;

    int i = 0;
    char pre;
    int n;

    for(i = 0; i < strlen(s); i++){
      n = 1;
     
      pre = s[i];
      if(pre == '0') continue;
      while(pre == s[i+1] && i < strlen(s)){
	n++;
	i++;
      }
      int x = atoi(&pre);
   
      cout <<  b[x-1][(n-1) % b[x-1].length()];
    }
    cout << endl;
    X--;
  }
  return 0;
}