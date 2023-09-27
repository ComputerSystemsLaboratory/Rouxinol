#include <iostream>


using namespace std;

bool adjmatrix[101 * 101];
int costs[101];



void BFS(int vertex, int cur_cost, int N) {
  if (costs[vertex] < cur_cost) return;
  costs[vertex] = cur_cost;
  for (int i =1; i<= N; i++) {
    if(adjmatrix[vertex*101 + i]) {
      BFS(i, cur_cost + 1, N);
    }
  }
}
  

int main() {
  for (int i = 0; i < 101; i++) {
    costs[i] = 101;
  }
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int vertex, degree;
    cin >> vertex >> degree;

    for (int j = 0; j < degree; j++) {
      int outvertex;
      cin >> outvertex;
      adjmatrix[vertex * 101 + outvertex] = true;
    }
  }


  /*
  //function to print adjmatrix
  for (int i = 0; i <= N; i++) {
    for (int j= 0; j <= N; j++) {
      if (adjmatrix[i * 101 + j]) {
	cout << "1 ";
      } else {
	cout << "0 ";
      }
    }
    cout << endl;
    }*/

  BFS(1, 0, N);

  for (int i =1; i<=N; i++) {
    if (costs[i] == 101) {
      cout << i << " " << -1 << endl;
    } else {
      cout << i << " " << costs[i] << endl;
    }
  }

 

}