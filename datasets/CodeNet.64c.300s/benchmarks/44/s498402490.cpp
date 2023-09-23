#include<iostream>
using namespace std;

int main(){
  while(true){
    int n;
    cin >> n;
    if(n==0){
      break;
    }

    int INF=1000000000;
    int T[10][10];
    for(int i=0; i<10; i++){
      for(int j=0; j<10; j++){
        T[i][j] = INF;
        if(i==j){
          T[i][j] = 0;
        }
      }
    }

    int a,b,cost,m=0;
    for(int i=0; i<n; i++){
      cin >> a >> b >> cost;
      T[a][b] = T[b][a] = cost;

      if(m<a){
        m=a;
      }
      if(m<b){
        m=b;
      }
    }

    for(int k=0; k<m+1; k++){
      for(int i=0; i<m+1; i++){
        for(int j=0; j<m+1; j++){
            if(T[i][j] > T[i][k] + T[k][j]){
              T[i][j] = T[i][k] + T[k][j];
            }
        }
      }
    }

  //  cout << "ekinokazu " << m << endl;
    int total=0,total2=10000,nummber;

    for(int i=0; i<m+1; i++){   //どこの駅から始まるか
      for(int j=0; j<m+1; j++){   //どこの駅で終わるか
        total = total + T[i][j];
        //cout << i << "駅start" << j << "駅まで " << T[i][j] << endl;
        if(j==m){
          //cout << i << "駅start " << total << endl;
          if(total2>total){
            total2 = total;
            nummber = i;
          }
          total = 0;
        }
      }
    }
    cout << nummber << ' ' << total2 << endl;

  }

  return 0;
}
