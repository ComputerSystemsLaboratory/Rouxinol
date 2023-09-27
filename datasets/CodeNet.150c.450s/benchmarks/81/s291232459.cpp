#include <iostream>

using namespace std;

typedef long long ll;
void show_path_list();

ll path_list[10][10];

void init(){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      path_list[i][j] = 99999999999;
    }
  }
}

int main(){
  int n, from, to, cost, t;

  while(true){
    t = 0;

    init();
    cin >> n;

    if( n == 0 ) break;

    for(int i = 0; i < n; i++){
      cin >> from >> to >> cost;
      path_list[from][to] = cost;
      path_list[to][from] = cost;
      t = max( t, max( from, to ) );
    }
    t++;

    for(int i = 0; i < t; i++){
      path_list[i][i] = 0;
    }

    for(int k = 0; k < t; k++){
      for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
          path_list[i][j] = min( path_list[i][j], path_list[i][k] + path_list[k][j] );
        }
      }
    }

    ll min_town, min_cost = 9999999999;

    for(int i = 0; i < t; i++){
      ll cost = 0;
      for(int j = 0; j < t; j++){
        cost += path_list[i][j];
      }
      if( cost < min_cost ){
        min_town = i;
        min_cost = cost;
      }
    }
    //show_path_list();

    cout << min_town << " " << min_cost << endl;
  }
}

void show_path_list(){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      cout << path_list[i][j] << " ";
    }
    cout << endl;
  }
}