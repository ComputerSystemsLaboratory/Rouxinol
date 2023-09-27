#include <iostream>
using namespace std;

int main()
{
  int n,c[4][14]={0},math;
  char card;
  cin >> n;
  
  for(int m=0;m<n;m++){
    int k=-1,l=-1;
    cin >> card >> math;
    l=math;
    if(card=='S'){
      k=0; // スペード⇒iに0代入
    }else if(card=='H'){
      k=1; // ハート⇒iに1代入
    }else if(card=='C'){
      k=2; // クラブ⇒iに2代入
    }else if(card=='D'){
      k=3; // ダイヤ⇒iに3代入
    }
    c[k][l]=1; // 記号iと数字jの配列に1を代入
  }
  
  for(int i=0;i<4;i++){
    if(i==0){
      card='S';
    }else if(i==1){
      card='H';
    }else if(i==2){
      card='C';
    }else if(i==3){
      card='D';
    }
    for(int j=1;j<=13;j++){
      if(c[i][j]!=1){ // 記号kとi、数字lとjのいずれか一方が一致しない場合
	cout << card << " " << j << endl;
      }
    }
  }
  return 0;
}