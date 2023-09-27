#include<iostream>

#include<cmath>

using namespace std;

int main(){

 int h,w;

 while(1){

  cin >> h >> w;

  if(h==0)break;

  int r=h*h+w*w;

  for(int f=0;;r++,f++){

   for(int H=1;H<r;H++){

    if(f==0&&H<=h) continue;

    int W=r-H*H;

    if(W>H*H){

     for(int i=0;i*i<=W;i++){

      if(i*i==W){

       cout <<H << ' ' << sqrt(W) << endl;

       goto a;

      }

     }

    }

   }

  }

 a:;

 }

 return 0;

}