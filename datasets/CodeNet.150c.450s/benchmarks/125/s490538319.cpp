//Shunji Lin 08-144505

#include <iostream>

using namespace std;

bool adjmatrix[101][101]; //adjmatrix
int discover[101];
int processed[101];
int cur_time = 0;


void DFS(int vertex, int N) {
  cur_time++;
  discover[vertex] = cur_time; // set cost
  
  for (int i=1; i<= N; i++) {
    if(adjmatrix[vertex][i] && discover[i] == -1) {
      DFS(i, N);
    }
  }
  
  cur_time++;
  processed[vertex] = cur_time;
}


  
int main() {
  const int cur_time = 0;
  
  for (int i = 0; i < 101; i++) {
    discover[i] = -1; // upper limit
    processed[i] = -1;
  }
  int N;
  cin >> N;

  for (int i = 1; i <= N; i++) {
    int vertex, degree;
    cin >> vertex >> degree;

    for (int j = 0; j < degree; j++) {
      int outvertex;
      cin >> outvertex;
      adjmatrix[i][outvertex] = true;
    }
  }



  for (int i = 1; i <= N; i++) {
    if (discover[i] == -1) {
      DFS(i,N);
    }
  }

  for (int i = 1; i <=N; i++) {
    cout << i << " " << discover[i] << " "<< processed[i] << endl;
  }
}