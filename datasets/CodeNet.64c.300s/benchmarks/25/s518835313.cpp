#include<iostream>
using namespace std;

int main(void){
  int a[4];
  int b[4];

  while( cin >> a[0] >> a[1] >> a[2] >> a[3] ){
    cin >> b[0] >> b[1] >> b[2] >> b[3];

    int count=0;
    int hit=0;
    int blow=0;

    for(int i=0; i<3; i++){
      for(int j=i+1; j<4; j++){
        if(a[i] == a[j]){
          count++;
        }
        if(b[i] == b[j]){
          count++;
        }
      }
    }
    if(count==0){
      for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
          if(a[i]==b[j]){
            if(i==j){
              hit++;
            }else{
              blow++;
            }
          }
        }
      }
      cout << hit << " " << blow << endl;
    }
  }
  return 0;
}