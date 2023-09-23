#include<iostream>
using namespace std;

int main(void){
    int info;
    cin >> info;
    int b = 0,f = 0,r = 0,v = 0;
    int room[4][3][10]={{{}}};
    
    for (int i = 1; i <= info; i++){
        cin >> b >> f >> r >> v;
        room[b-1][f-1][r-1] += v;
    }
    for (int x = 0; x <= 3; x++){
        for (int y = 0; y <= 2; y++){
            for (int z = 0; z <= 9; z++){
                if (z < 9){
                    cout  << " " << room[x][y][z];
                }
                else{
                    cout <<  " " << room[x][y][z] << endl;
                }
            }
        }
        if (x < 3){
            cout << "####################" << endl;
        }
    }
    return 0;
}

