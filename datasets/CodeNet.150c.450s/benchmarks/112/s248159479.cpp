#include <iostream>
using namespace std;

int main(){
  int listnum, strnum, i, j;
  char temp;
  char lista[256];
  char listb[256];

  while(cin >> listnum && listnum){
    for(i = 0; i < listnum; i++){
      cin >> lista[i];
      cin >> listb[i];
    }
    cin >> strnum;
    for(i = 0; i < strnum; i++){
      cin >> temp;
      for(j = 0; j < listnum; j++){
        if(temp == lista[j]){
          temp = listb[j];
          break;
        }
      }
      cout << temp;
    }

    cout << "\n";
  }

  return 0;
}