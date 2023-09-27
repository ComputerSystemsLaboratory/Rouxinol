#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string kigo = ".,!? ";
  string a = "abc";
  string d = "def";
  string g = "ghi";
  string j = "jkl";
  string m = "mno";
  string p = "pqrs";
  string t = "tuv";
  string w = "wxyz";
  string syu;
  int keta,n,count;
  int flag1 = 0;
  int flag2 = 0;
  cin >> n;
  string nn;
  for(int i = 0; i < n;i++){
    cin >> nn;
    syu = "";
    for(int i = 0; i < nn.length();i++){
      if(nn[i] == '1'){
        flag1 = 1;
        flag2 += 1;
      }else if(nn[i] == '2'){
        flag1 = 2;
        flag2 += 1;
      }else if(nn[i] == '3'){
        flag1 = 3;
        flag2 += 1;
      }else if(nn[i] == '4' ){
        flag1 = 4;
        flag2 += 1;
      }else if(nn[i] == '5'){
        flag1 = 5;
        flag2 += 1;
      }else if(nn[i]== '6'){
        flag1 = 6;
        flag2 += 1;
      }else if(nn[i] == '7'){
        flag1 = 7;
        flag2 += 1;
      }else if(nn[i] == '8'){
        flag1 = 8;
        flag2 += 1;
      }else if(nn[i] == '9'){
        flag1 = 9;
        flag2 += 1;
      }else if(nn[i] == '0'){
        if(flag1 == 0){
        }else{
          flag2 -= 1;
          if(flag1 == 1){
            syu += kigo[(flag2)%5];
            flag1 = 0;
          }else if(flag1 == 2){
            syu += a[flag2%3];
            flag1 = 0;
          }else if(flag1 == 3){
            syu += d[flag2%3];
            flag1 = 0;
          }else if(flag1 == 4){
            syu += g[flag2%3];
            flag1 = 0;
          }else if(flag1 == 5){
            syu += j[flag2%3];
            flag1 = 0;
          }else if(flag1 == 6){
            syu += m[flag2%3];
            flag1 = 0;
          }else if(flag1 == 7){
            syu += p[flag2%4];
            flag1 = 0;
          }else if(flag1 == 8){
            syu += t[flag2%3];
            flag1 = 0;
          }else if(flag1 == 9){
            syu += w[flag2%4];
            flag1 = 0;
          }
          flag2 = 0;
        }
      }
    }
      cout << syu << endl;
  }
}