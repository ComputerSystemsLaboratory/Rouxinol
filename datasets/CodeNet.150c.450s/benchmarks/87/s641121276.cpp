#include <iostream>
using namespace std;

int main(){
  while(1){
    int N;
    cin >> N ;
    if(N==0){
      break;
    }
    int str[11][6]={0};
    for(int i=N-1;i>=0;i--){
      for(int j=0;j<5;j++){
        cin >> str[i][j];
      }
    }
    int score=0;
    for(int i=0;i<10;i++){
//    for(int q=0;q<N;q++){
//     for(int w=0;w<5;w++){
//       cout << str[q][w];
//     }
//     cout << endl;
//    }
//    cout << endl;
      for(int j=0;j<N;j++){
        int a=str[j][0];
        int ch=0;
        for(int k=0;k<=5;k++){
          if(a==str[j][k]&&a!=0){
            ch++;
          }else{
            if(ch>=3){
              for(int l=k-1;l>=k-ch;l--){
                score+=str[j][l];
                str[j][l]=0;
              }
              break;
            }else{
              a=str[j][k];
              ch=1;
            }
          }
        }
      }
      for(int j=0;j<N;j++){
        for(int k=0;k<N;k++){
          for(int l=0;l<5;l++){
            if(str[k][l]==0){
              str[k][l]=str[k+1][l];
              str[k+1][l]=0;
            }
          }
        }
      }
    }
//    for(int q=0;q<N;q++){
//     for(int w=0;w<5;w++){
//       cout << str[q][w];
//     }
//     cout << endl;
//    }
    cout << score << endl;
  }
}
