    #include<iostream>
using namespace std;
int main ()
{
  int i,j,h,w,shahen,min,h1,w1;

while(1){
  cin >> h >> w;
  if(h==0 && w==0){
    return 0;
  }
  shahen=h*h+w*w;
  min=150*150;
for(i=1;i<150;i++){
 for (j=1;j<150;j++){
  if(shahen <= i * i + j * j && min > i*i+j*j && i<j){
    if(shahen==i*i+j*j && h<i ){
      /* code */
      h1=i;
      w1=j;
      min=i*i+j*j;
    }else if(shahen<i*i+j*j){
        min=i*i+j*j;
        h1=i;
        w1=j;
      }
    }else if(shahen < i*i+j*j && min == i*i+j*j && i<j){
        if(i<h1){
          h1 =i;
          w1=j;
          min=i*i+j*j;
        }
      }
    }
  }
    cout << h1 << " " <<  w1 << endl;
  }
  }
