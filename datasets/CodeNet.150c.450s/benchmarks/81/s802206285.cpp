#include<iostream>
#include<algorithm>
#define N 10
#define M 10000

using namespace std;

int data[N][N];

void Init(){
  for(int i=0; i<N; ++i){
    for(int j=0; j<N; ++j){
      if(i == j) data[i][j] = 0;
      else data[i][j] = M;
    }
  }
}

void WarshallFloyd(int& n){
  for(int k=0; k<n; ++k){
    for(int i=0; i<n; ++i){
      for(int j=0; j<n; ++j){
	data[i][j] = min(data[i][j], data[i][k] + data[k][j]);
      }
    }
  }
}

void PrintMinTime(int& n){
  int i, j, m, m_, t;
  m = N*M;
  for(i=0, m=N*M; i<n; ++i){
    for(j=0, m_=0; j<n; ++j) m_ += data[i][j];
    if(m > m_){
      t = i;
      m = m_;
    }
  }
  cout << t << " " << m << endl;
}

int main(){
  int i, n, m, a, b, c;

  while(1){
    cin >> n;
    if(n == 0) break;

    Init();
    for(i=0, m=0; i<n; ++i){
      cin >> a >> b >> c;
      data[a][b] = c;
      data[b][a] = c;
      m = max(m, a);
      m = max(m, b);
    }
    ++m;
    WarshallFloyd(m);
    PrintMinTime(m);
  }
  return 0;
}