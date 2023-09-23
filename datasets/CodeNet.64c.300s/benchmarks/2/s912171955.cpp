#include <iostream>
using namespace std;

typedef struct{
  int m;
  int f;
  int r;
  int sum;
  char judge;
}Score;

char j_s(Score X){
  char score;

  if(X.m == -1 || X.f == -1){
    score = 'F';
  }else{
    if(X.sum >= 80 ){
      score = 'A';
    }else if(X.sum >= 65){
      score = 'B';
    }else if(X.sum >= 50){
      score = 'C';
    }else if(X.sum >= 30){
      if(X.r >= 50){
        score = 'C';
      }else{
        score = 'D';
      }
    }else{
      score = 'F';
    }
  }
  return score;
}


int main(){
  int n=0;
  Score data[100];
  
  while(1){
    cin >> data[n].m >> data[n].f >> data[n].r;
    if(data[n].m == -1 && data[n].f == -1 && data[n].r == -1){
      break;
    }
    n++;
  }

  for(int i=0;i<n;i++){
    data[i].sum = data[i].m + data[i].f;
    data[i].judge = j_s(data[i]);
    cout << data[i].judge << endl;
  }
  return 0;
}