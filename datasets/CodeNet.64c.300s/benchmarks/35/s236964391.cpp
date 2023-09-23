#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;

int v,A[100][100],u,k,w;


int main(){
    cin >> v ;
    for (int i=0; i<v; ++i){
        cin >> u >> k;
        for(int j=0; j<k; ++j){
            cin >> w;
            A[u-1][w-1] = 1;
        }
    }
    for (int i=0; i<v; ++i){
        for (int j=0; j<v; ++j){
            cout << A[i][j];
            if (j < v-1)
            cout << " ";
        }
        cout << endl ;
    }
}