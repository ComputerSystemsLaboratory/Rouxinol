#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

/*static*/ const string mark [4]={"S","H","C","D"};         //???????????????????????????

int main(){
  int member[4][13]={};                  //??????????????????????±????????????????
  int i,j;                            //??????????????°??????
  int n,b;                   //n?????\??????????????????????????°???????´??????????????????????????????????????´?
  string a;                  //a??¨??????string???????????§????????????

  cin >> n;                         //??\??????????????????????????°?????\???

  for(i=0;i<n;i++){
    cin >> a >> b;                 //??????????????????????????\???
    if(a=="S")  member[0][b-1]=1;   //?????£????????????????????¨?????????????????????????????????1?????????
    else if(a=="H")  member[1][b-1]=1;
    else if(a=="C")  member[2][b-1]=1;
    else if(a=="D")  member[3][b-1]=1;
  }



  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(member[i][j]== 0){                //?????£??????????????????????????¢?´¢
        cout << mark[i] << ' ' << j+1 << endl;         //?????£??????????????????????????¨???
      }
    }
  }
return 0;
}