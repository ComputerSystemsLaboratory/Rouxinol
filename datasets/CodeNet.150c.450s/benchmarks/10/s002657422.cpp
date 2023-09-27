#include <iostream>
using namespace std;
int main(){
    int n,b,f,r,v;
    const int B = 4, F = 3, R = 10;
    int inf[B][F][R] = {0};
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        cin >> b >> f >> r >> v;
        inf[b-1][f-1][r-1] += v;
    }
    
    for(int i=0;i<B-1;i++){
        for(int j=0;j<F;j++){
            for(int k=0;k<R;k++){
                cout << " " << inf[i][j][k];
            }
            cout <<endl;
        }
        cout << "####################" <<endl;
    }
    
    for(int i=B-1;i<B;i++){
        for(int j=0;j<F;j++){
            for(int k=0;k<R;k++){
                cout << " " << inf[i][j][k];
            }
            cout <<endl;
        }
    }
    
    return 0;
}