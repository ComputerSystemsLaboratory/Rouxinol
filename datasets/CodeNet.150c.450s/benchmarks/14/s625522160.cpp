#include<iostream>
using namespace std;

void include3(int x,const int &i);

void check_num(const int &i){
  int x = i;
  if(x % 3 == 0){
    cout << " " << i;
    return;
  }else{
    include3(x,i);
  }
}

void include3(int x,const int &i){
  if(x % 10 == 3){
    cout << " " << i;
    return;
  }
  x /= 10;

  if(x){
    include3(x,i);
  }
}




int main(){
  int i = 1,n;

  cin >> n;
  
  while(true){
    check_num(i);

    if( ++i > n){
      break;
    }
  }

  cout << endl;
}

