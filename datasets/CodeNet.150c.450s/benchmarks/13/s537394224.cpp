#include <iostream>
#include <string>
using namespace std;

int str_length(string);

int main(void){

  string str_s;
  string str_p;
  int loop;
  int s_num;
  int p_num;
  int first_num;

  loop = 0;
  s_num = 0;
  p_num = 0;
  first_num = 0;

  cin >> str_s;
  cin >> str_p;

  while(loop <= 2){

    if(str_s[s_num] == str_p[p_num]){

      if(p_num == str_length(str_p) - 1){
        cout << "Yes" << endl;
        break;
      }else if(s_num == str_length(str_s) - 1){
        s_num = 0;
        p_num++;
        loop++;
        if(loop >= 2){
          cout << "No" << endl;
          break;
        }
      }else{
        s_num++;
        p_num++;
      }

    }else{

      first_num++;

      s_num = first_num;

      if(s_num > str_length(str_s) - 1){
        cout << "No" << endl;
        break;
      }else{

        p_num = 0;

      }
    }
  }

  return 0;
}

int str_length(string str){

  int strlen;

  strlen = 0;

  while(str[strlen] != '\0'){
    strlen++;
  }

  return strlen;
}