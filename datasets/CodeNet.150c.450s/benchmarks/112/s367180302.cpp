#include<iostream>
#include<stdio.h>

using namespace std;

int main(void){
  char data[128];
  while(1){
    int n;
    char before, after;
    cin >> n;
    if(n == 0) break;
    //初期化
    for(int i = 0; i< 128; i++){
      data[i] = i;
    }

    //条件の代入
    for(int i = 0; i< n; i++){
      cin >> before;
      cin >> data[before];
      //    printf("%d\n",data[before]);
    }
    
    int num;
    cin >> num;
    char figure;
    for(int i = 0; i< num ; i++){
      cin >> figure;
      cout << data[figure];
    }
    cout << "\n";
  }
}