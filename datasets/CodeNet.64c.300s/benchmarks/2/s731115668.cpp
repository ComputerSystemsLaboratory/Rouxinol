#include <iostream>
using namespace std;
int main(){
  int m,f,r;
  int i = 0;
  int j = 0;
  int a[1000][3];
  for(i = 0;i < 10000;i++){
    cin  >>  m >> f >> r;
    a[i][0] = m;
    a[i][1] = f;
    a[i][2] = r;
    if(m == -1 && f == -1 && r == -1){
      break;
    }
  }
  for(j = 0;j < i;j++){
    if(a[j][0]== -1 || a[j][1] == -1){
      cout << "F" <<endl;
    }else if(a[j][0]+a[j][1] >= 80){
      cout <<"A"<<endl;
    }else if(a[j][0]+a[j][1] >=65 && a[j][0]+a[j][1] < 80){
      cout <<"B" << endl;
    }else if(a[j][0]+a[j][1] >= 50 && a[j][0]+a[j][1] <65){
      cout <<"C"<<endl;
    }else if(a[j][0]+a[j][1] >=30 && a[j][0]+a[j][1] < 50){
      if(a[j][2] < 50){
        cout <<"D"<<endl;
      }else{
        cout <<"C"<<endl;
      }
    }else{
      cout <<"F"<<endl;
    }
  }
}