#include<bits/stdc++.h>
using namespace std;

void Output(int sum){

  //cout << sum << '=';

  if((int)(sum/1000) != 0){
    if((int)(sum/1000) != 1){
      cout << sum/1000;
    }
    cout << 'm';
  }
  sum = sum%1000;

  if((int)(sum/100) != 0){
    if((int)(sum/100) != 1){
      cout << sum/100;
    }
    cout << 'c';
  }
  sum = sum%100;

  if((int)(sum/10) != 0){
    if((int)(sum/10) != 1 ){
      cout << sum/10;
    }
    cout << 'x';
  }
  sum = sum%10;

  if(sum != 0){
    if(sum != 1){
      cout << sum;
    }
    cout << 'i';
  }

  cout << endl;
}

int main(){

  int n;
  int sum;
  int num;
  char in;

  cin >> n;
  getchar();

  for(int i=0; i<n; i++){
    sum = 0;
    num = 1;
    //getchar();
    while(scanf("%c",&in) && in!='\n'){

      if(in == 'm'){
        sum += num*1000;
        num = 1;
      }
      else if(in == 'c'){
        sum += num*100;
        num = 1;
      }
      else if(in == 'x'){
        sum += num*10;
        num = 1;
      }
      else if(in == 'i'){
        sum += num;
        num = 1;
      }
      else if(in != ' '){
        num = in-'0';
      }

    }

    Output(sum);

  }



  return 0;
}