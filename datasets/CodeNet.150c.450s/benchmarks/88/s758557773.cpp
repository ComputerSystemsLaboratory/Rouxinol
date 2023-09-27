#include<iostream>
using namespace std;
int main(){
  int h,w;

  cin >> h >> w;
  while(h!=0 && w!=0){
    int d = h*h + w*w;
    int d_min = 1000000, h_min = 151, w_min=151;
    for(int j=2; j<=150; j++){
      for(int i=1; i<150; i++){
        if(j>i){
          if(d == (i*i + j*j) && d_min >= (i*i + j*j)){
            if(h<i){

              if(d_min == (i*i + j*j)){
                if(h_min>i){
                  h_min = i;
                  w_min = j;
                  d_min = i*i + j*j;
                }
              }else{
                h_min = i;
                w_min = j;
                d_min = i*i + j*j;
              }
            }

          }else if(d < (i*i + j*j) && d_min >= (i*i + j*j)){

            if(d_min == (i*i + j*j)){
              if(h_min>i){
                h_min = i;
                w_min = j;
                d_min = i*i + j*j;
              }
            }else{
              h_min = i;
              w_min = j;
              d_min = i*i + j*j;
            }

          }
        }
      }
    }
    cout << h_min << " " << w_min << endl;
    cin >> h >> w;
  }
}

