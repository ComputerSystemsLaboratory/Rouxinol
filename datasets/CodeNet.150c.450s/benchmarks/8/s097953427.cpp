#include <iostream>
#include <string>
using namespace std;

int main(void){
  int gamenum;
  string taro,hanako;
  int taropoint,hanakopoint;
  taropoint = 0;
  hanakopoint = 0;

  cin >> gamenum;

  while ( gamenum > 0){
    cin >> taro >> hanako;

    for ( int i = 0 ; (taro[i] != '\0') && (hanako[i] != '\0') ; i++){
      if(taro[i] > hanako[i]){
        taropoint += 3;
        break;
      }else if(taro[i] < hanako[i]){
        hanakopoint += 3;
        break;
      }else if(taro[i] == hanako[i]){
        if((taro[i+1] == '\0') && (hanako[i+1] == '\0')){
          taropoint++;
          hanakopoint++;
          break;
        }else if((taro[i+1] == '\0') && hanako[i+1] != '\0'){
          hanakopoint += 3;
          break;
        }else if((taro[i+1] != '\0') && hanako[i+1] == '\0'){
          taropoint += 3;
          break;
        }
      }
    }

    gamenum--;
  }

  cout << taropoint << " " << hanakopoint << endl;
}