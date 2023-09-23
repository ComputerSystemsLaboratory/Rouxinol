#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int inf[4] = {};
    int room[4][3][10] = {};
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < 4; ++j){
            cin >> inf[j];
        }
        room[inf[0]-1][inf[1]-1][inf[2]-1] += inf[3];
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 10; ++k)
            {
                cout << " " <<room[i][j][k];
            }
            cout << endl;
        }
        if(i < 3) cout << "####################" << endl;
    }
    return 0;
}