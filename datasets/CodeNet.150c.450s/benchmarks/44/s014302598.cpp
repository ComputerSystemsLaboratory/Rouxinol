#include<iostream>
#include<array>

using namespace std;

void check_num(array<int,8> a){
  int hit_num=0,blow_num=0;
  for(int i=0;i<4;i++){
    for(int j = 4;j<8;j++){
      if(a[i] == a[j]){
        if(j-4 == i){
          ++hit_num;
        }else{
          ++blow_num;
        }
      }
    }
  }

  cout<<hit_num<<" "<<blow_num<<endl;
}

int main(void){
  array<int,8> a; //プレイヤーa,bの値
  int input;

  while(cin >> input){
    a[0]=input;
    for(int i = 1;i<8;i++){
      cin >>a[i];
    }
    check_num(a);
  }

  return 0;
}

