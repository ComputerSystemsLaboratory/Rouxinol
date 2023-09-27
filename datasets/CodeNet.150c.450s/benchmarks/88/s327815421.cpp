#include <iostream>
using namespace std;

int main(){
    int w,h;
    while(1){
      cin>>h>>w;
      if(w == 0 && h==0)
        break;
        int d = h*h + w*w;
        int H=150;
        int W=150;
        int D=150*150*2;
        for(int i=1; i<=150; i++){
          for(int j=i+1; j<=150; j++){
            int z = i*i+j*j;
            if(z>d){
              if(z<D){
                H = i;
                W = j;
                D = z;
              }
              break;
            }
          }
        }
        for(int i=h+1; i<150; i++){
          bool flg =false;

          for(int j= i+1; j<=150; j++){
            int x = i*i+j*j;

            if(x==d){
              H=i;
              W=j;
              D=x;
              flg= true;
            }
            if(x>=d)
              break;
          }
          if(flg)
            break;
        }
        cout<<H<<' '<<W<<endl;
    }
    return 0;
}

