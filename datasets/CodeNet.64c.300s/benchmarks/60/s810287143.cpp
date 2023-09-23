#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  int a,b;
  const int ini = -1;
  while (cin >> a >> b && a != 0 && b != 0){  
    int field[18][18] = {0};
    
    for (int i=1; i<=b; ++i){
      for (int j=1; j<=a; ++j){
	if (i == 1 && j == 1){
	  field[i][j] = 1;
	}
	else{
	  field[i][j] = ini;
	}
      }
    }
    int n;
    cin >> n;
    for (int i=0; i<n; ++i){
      int x,y;
      cin >> x >> y;
      field[y][x] = 0;
    }

    for (int i=1; i<=b; ++i){
      for (int j=1; j<=a; ++j){
	if ( (field[i][j] != 0) && !(i == 1 && j == 1)){
	  field[i][j] = field[i-1][j] + field[i][j-1];
	}
      }
    }
    /*
    for (int i=b; 1<=i; --i){
      for (int j=1; j<=a; ++j){
	cout << field[i][j] << " ";
      }
      cout << endl;
    }
   */
    cout << field[b][a] << endl;
    
  }
  return 0;
}