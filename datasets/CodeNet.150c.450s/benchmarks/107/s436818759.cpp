// 17D8104010B 宮本拓輝 1_E c++14

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  int n=1;
  int result[n];
  for(int s=0;s<n;s++){
    string x,y;
    cin>>x;
    cin>>y;
    int x_size=x.size();
    int y_size=y.size();
    int score[x_size+1][y_size+1];

    for(int i=0;i<x_size+1;i++){
      score[i][0]=i;
    }
    for(int j=0;j<y_size+1;j++){
      score[0][j]=j;
    }

    for(int i=1;i<x_size+1;i++){
      for(int j=1;j<y_size+1;j++){
        int a=1;
        if(x[i-1]==y[j-1]){
          a=0;
        }
        score[i][j]=min(score[i-1][j]+1,score[i][j-1]+1);
        score[i][j]=min(score[i-1][j-1]+a,score[i][j]);
      }
    }
    /*
    for(int i=0;i<x_size+1;i++){
      for(int j=0;j<y_size+1;j++){
        cout<<score[i][j]<<' ';
      }
      cout<<"\n";
    }
    */
    cout<<score[x_size][y_size]<<"\n";

  }

  return 0;
}

/* 実行結果
Miyamoto:~ miyamotohiroki$ ./a.out
apple
player
5
Miyamoto:~ miyamotohiroki$ ./a.out
acac
acm
2
Miyamoto:~ miyamotohiroki$ ./a.out
icpc
icpc
0
*/
