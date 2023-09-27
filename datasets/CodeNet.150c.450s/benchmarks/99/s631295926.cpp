#include <iostream>
#include <string>

using namespace std;

int main(){

  int n,a,a2;
  int Asize,Bsize;
  int m = 1000;
  int c = 100;
  int x = 10;
  int i = 1;

  cin>>n;

  for(int i = 0;i<n;++i){

    int sum = 0;
    int sum2 = 0;
    string str,str2,str3;

    cin>>str>>str2;

    Asize = str.size();
    Bsize = str2.size();

    a = 0;

    for(int j = 0;j<Asize;++j){
      str3 = str[j];

      if(str3 == "2"){
        a = 2;
      }
      else if(str3 == "3"){
        a = 3;
      }
      else if(str3 == "4"){
        a = 4;
      }
      else if(str3 == "5"){
        a = 5;
      }
      else if(str3 == "6"){
        a = 6;
      }
      else if(str3 == "7"){
        a = 7;
      }
      else if(str3 == "8"){
        a = 8;
      }
      else if(str3 == "9"){
        a = 9;
      }
      else if(str3 == "m"){
        if(a == 0){
          a = 1;
        }
        a2 = 1000;
        sum += a*a2;
        a = 0;
      }
      else if(str3 == "c"){
        if(a == 0){
          a = 1;
        }
        a2 = 100;
        sum += a*a2;
        a = 0;
      }
      else if(str3 == "x"){
        if(a == 0){
          a = 1;
        }
        a2 = 10;
        sum += a*a2;
        a = 0;
      }
      else if(str3 == "i"){
        if(a == 0){
          a = 1;
        }
        a2 = 1;
        sum += a*a2;
        a = 0;
      }
    }

    a = 0;

    for(int j = 0;j<Bsize;++j){
      str3 = str2[j];

      if(str3 == "2"){
        a = 2;
      }
      else if(str3 == "3"){
        a = 3;
      }
      else if(str3 == "4"){
        a = 4;
      }
      else if(str3 == "5"){
        a = 5;
      }
      else if(str3 == "6"){
        a = 6;
      }
      else if(str3 == "7"){
        a = 7;
      }
      else if(str3 == "8"){
        a = 8;
      }
      else if(str3 == "9"){
        a = 9;
      }
      else if(str3 == "m"){
        if(a == 0){
          a = 1;
        }
        a2 = 1000;
        sum2 += a*a2;
        a = 0;
      }
      else if(str3 == "c"){
        if(a == 0){
          a = 1;
        }
        a2 = 100;
        sum2 += a*a2;
        a = 0;
      }
      else if(str3 == "x"){
        if(a == 0){
          a = 1;
        }
        a2 = 10;
        sum2 += a*a2;
        a = 0;
      }
      else if(str3 == "i"){
        if(a == 0){
          a = 1;
        }
        a2 = 1;
        sum2 += a*a2;
        a = 0;
      }
    }
    sum += sum2;

    int tmp;
    string str4,str5;

    tmp = sum/m;

    if(tmp == 1){
      str5 = "m";
      str4 = str5;
    }
    if(tmp == 2){
      str5 = "2m";
      str4 = str5;
    }
    if(tmp == 3){
      str5 = "3m";
      str4 = str5;
    }
    if(tmp == 4){
      str5 = "4m";
      str4 = str5;
    }
    if(tmp == 5){
      str5 = "5m";
      str4 = str5;
    }
    if(tmp == 6){
      str5 = "6m";
      str4 = str5;
    }
    if(tmp == 7){
      str5 = "7m";
      str4 = str5;
    }
    if(tmp == 8){
      str5 = "8m";
      str4 = str5;
    }
    if(tmp == 9){
      str5 = "9m";
      str4 = str5;
    }

    sum = sum - (tmp*m);
    tmp = sum/c;

    if(tmp == 1){
      str5 = "c";
      str4 += str5;
    }
    if(tmp == 2){
      str5 = "2c";
      str4 += str5;
    }
    if(tmp == 3){
      str5 = "3c";
      str4 += str5;
    }
    if(tmp == 4){
      str5 = "4c";
      str4 += str5;
    }
    if(tmp == 5){
      str5 = "5c";
      str4 += str5;
    }
    if(tmp == 6){
      str5 = "6c";
      str4 += str5;
    }
    if(tmp == 7){
      str5 = "7c";
      str4 += str5;
    }
    if(tmp == 8){
      str5 = "8c";
      str4 += str5;
    }
    if(tmp == 9){
      str5 = "9c";
      str4 += str5;
    }

    sum = sum - (tmp*c);
    tmp = sum/x;

    if(tmp == 1){
      str5 = "x";
      str4 += str5;
    }
    if(tmp == 2){
      str5 = "2x";
      str4 += str5;
    }
    if(tmp == 3){
      str5 = "3x";
      str4 += str5;
    }
    if(tmp == 4){
      str5 = "4x";
      str4 += str5;
    }
    if(tmp == 5){
      str5 = "5x";
      str4 += str5;
    }
    if(tmp == 6){
      str5 = "6x";
      str4 += str5;
    }
    if(tmp == 7){
      str5 = "7x";
      str4 += str5;
    }
    if(tmp == 8){
      str5 = "8x";
      str4 += str5;
    }
    if(tmp == 9){
      str5 = "9x";
      str4 += str5;
    }

    sum = sum - (tmp*x);

    if(sum == 1){
      str5 = "i";
      str4 += str5;
    }
    if(sum == 2){
      str5 = "2i";
      str4 += str5;
    }
    if(sum == 3){
      str5 = "3i";
      str4 += str5;
    }
    if(sum == 4){
      str5 = "4i";
      str4 += str5;
    }
    if(sum == 5){
      str5 = "5i";
      str4 += str5;
    }
    if(sum == 6){
      str5 = "6i";
      str4 += str5;
    }
    if(sum == 7){
      str5 = "7i";
      str4 += str5;
    }
    if(sum == 8){
      str5 = "8i";
      str4 += str5;
    }
    if(sum == 9){
      str5 = "9i";
      str4 += str5;
    }

    cout<<str4<<endl;
  }
  return 0;
}