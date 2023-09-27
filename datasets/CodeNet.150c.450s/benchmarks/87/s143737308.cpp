#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main(){

  int h;
  cin >> h;

  while(h!=0){
    int a[h][5];
    for(int i=0;i<h;i++){
      for(int j=0;j<5;j++)cin >> a[i][j];
    }

    int score=0;

    int c=1;
    while(c!=0){
      c=0;
      //b・・・各列に対しての落差
      int b[5]={};
      for(int i=0;i<h;i++){
        //その行はすべて消える
        if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][2]==a[i][3] && a[i][3]==a[i][4] && a[i][0]!=0){
          c+=5*a[i][1];
          for(int j=0;j<5;j++){
            b[i]++;
            a[i][j]=0;
          }
        }
        //左から4つ消える
        else if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][2]==a[i][3] && a[i][0]!=0){
          c+=4*a[i][1];
          for(int j=0;j<4;j++){
            b[j]++;
            a[i][j]=0;
          }
        }
        //右から4つ消える
        else if(a[i][3]==a[i][4] && a[i][1]==a[i][2] && a[i][2]==a[i][3] && a[i][1]!=0){
          c+=4*a[i][1];
          for(int j=1;j<5;j++){
            b[j]++;
            a[i][j]=0;
          }
        }
        //左から3つ消える
        else if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][2]!=0){
          c+=3*a[i][2];
          for(int j=0;j<3;j++){
            b[j]++;
            a[i][j]=0;
          }
        }
        //真ん中の3つ消える
        else if(a[i][3]==a[i][2] && a[i][1]==a[i][2] && a[i][2]!=0){
          c+=3*a[i][2];
          for(int j=1;j<4;j++){
            b[j]++;
            a[i][j]=0;
          }
        }
        //右から3つ消える
        else if(a[i][4]==a[i][3] && a[i][3]==a[i][2] && a[i][2]!=0){
          c+=3*a[i][2];
          for(int j=2;j<5;j++){
            b[j]++;
            a[i][j]=0;
          }
        }
      }

      score += c;
      for(int i=0;i<5;i++){
        int z=0;
        for(int j=h-1;j>=0;j--){
          if(a[j][i]==0)z++;
          else if(z!=0){
            a[j+z][i]=a[j][i];
            a[j][i]=0;
          }
        }
      }

    }

    cout << score << endl;

    cin >> h;
  }


}
