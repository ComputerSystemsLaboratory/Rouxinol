#include<iostream>
using namespace std;


int main(){
    int count[5][4][11], n;
    
    for ( int s = 1; s <= 4; s++){
        for ( int t = 1; t <= 3; t++)
            for ( int u = 1; u <= 10; u++)
            count[s][t][u] = 0;
    }
    cin >> n;
    for ( int i = 0 ; i < n; i++){
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    count[b][f][r] += v;
}
    
    
    for ( int s = 1; s <= 4; s++){
        if (s > 1) cout << "####################\n";
        for ( int t = 1; t <= 3; t++){
            for ( int u = 1; u <= 10; u++){
                cout << " " << count[s][t][u];
            }
            cout << endl;
        }
    }

    return 0;
}