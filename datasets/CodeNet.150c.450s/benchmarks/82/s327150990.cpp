#include <iostream>
using namespace std;

void SOLVE(int* dice, int u, int f) {
    int around[4];
    switch(u) {
        case 0 : {
            around[0] = 1;   around[1] = 2;   around[2] = 4;   around[3] = 3;
            break;
        }
        case 1 : {
            around[0] = 0;   around[1] = 3;   around[2] = 5;   around[3] = 2;
            break;
        }
        case 2 : {
            around[0] = 0;   around[1] = 1;   around[2] = 5;   around[3] = 4;
            break;
        }
        case 3 : {
            around[0] = 0;   around[1] = 4;   around[2] = 5;   around[3] = 1;
            break;
        }
        case 4 : {
            around[0] = 0;   around[1] = 2;   around[2] = 5;   around[3] = 3;
            break;
        }
        case 5 : {
            around[0] = 1;   around[1] = 3;   around[2] = 4;   around[3] = 2;
            break;
        }
    }
    int index = 0;
    while(dice[f] != dice[around[index]])   ++index;
    index += 1;
    if(index < 4)   cout << dice[around[index]] << endl;
    else            cout << dice[around[0]] << endl;
}

int main(void) {
    int dice [6];
    int n;
    int u, f;
    int u_index, f_index;
    
    for(int i = 0; i < 6; ++i) {
        cin >> dice[i];
    }
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        cin >> u >> f;
        u_index = 0;
        f_index = 0;
        while(dice[u_index] != u)   ++u_index;
        while(dice[f_index] != f)   ++f_index;
        SOLVE(dice, u_index, f_index);
    }
    return 0;
}
