#include <cstdio>
#include <iostream>
using namespace std;

int N;
char phone[9][6] = {".,!? ","abc","def","ghi","jkl", "mno", "pqrs", "tuv","wxyz"};

int main(){
  cin >> N;
  
  for(int i=0; i<N; ++i){
    char input[1025];
    cin >> input;
    char old = '0';
    int count = 0;
    for(int j=0; input[j] != '\0'; ++j){
      if(input[j] == '0'){
        if(old != '0'){
          if('2' <= old && old <= '6' || old == '8'){
            putchar(phone[old-'1'][(count-1)%3]);
          }
          else if(old == '1'){
            putchar(phone[old-'1'][(count-1)%5]);
          }
          else{
            putchar(phone[old-'1'][(count-1)%4]);
          }
        }
        old = input[j];
        count = 0;
      }else{
        old = input[j];
        count++;
      }
    }
    cout << endl;
  }
  return 0;
}