#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
  string str, code;
  int code_num;

  cin >> str >> code_num;

  for(int i=0; i<code_num; i++){
    cin >> code;
    
    int start, end;
    string buf;
    
    if(code == "replace"){
      cin >> start >> end >> buf;

      for(int i=0; i<=end-start; i++){
        str[start + i] = buf[i];
      }
    }else if(code == "reverse"){
      cin >> start >> end;
      buf = str;
      for(int i=0; i<=end-start; i++){
        str[start + i] = buf[end - i];
      }
    }else if(code == "print"){
      cin >> start >> end;
      for(int i=start; i<=end; i++){
        cout << str[i];
      }
      cout << endl;
    }

  }

  return(0);

}