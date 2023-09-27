#include <iostream>
using namespace std;

int main()
{
  int room[4][3][10]{0};
  int N;

  cin >> N;
  int b, f, r, v;
  for (int i = 0; i < N; ++i) {
    cin >> b >> f >> r >> v;
    room[b-1][f-1][r-1] += v;
    }

    for(int i=0; i<4; ++i){
        for(int j=0; j<3; ++j){
            for(int k=0; k<10; ++k){
                cout << ' ' << room[i][j][k];
            }
            cout << endl;
        }
        if( i!= 3){
            cout << "####################" << endl;
        }
    }

    return 0;
}

