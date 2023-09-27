#include <iostream>
#include <string>
using namespace std;

int main(void){
  string word;
  string str;
  int wordcount;
  int count = 0;
  int wordnum;
  int flag;

  cin >> word;

  for(int i = 0 ; word[i] != '\0' ; i++){
      wordnum++;
      if ( (word[i] >= 'a') && (word[i] <= 'z') ){ word[i]-=32; }
  }

  while(1){

    getline(cin,str);

    if ( str == "END_OF_TEXT"){break;}
    flag = 1;
    wordcount = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){

      if ( (str[i] >= 'a') && (str[i] <= 'z') ){ str[i]-=32; }

      if ( str[i] == ' '){
        flag = 1;
        wordcount = 0;
      }else{
        if ( (flag == 1 ) && (str[i] == word[wordcount]) ){

          if( (wordcount == wordnum - 1) && ((str[i+1] == ' ') ||  (str[i+1] == '\0')) ){
            count++;
            wordcount = 0;
          }else{
            wordcount++;
          }

        }else{
          flag = 0;
          wordcount = 0;
        }
      }
    }
  }

  cout << count << endl;
}