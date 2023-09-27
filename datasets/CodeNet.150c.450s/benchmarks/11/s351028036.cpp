#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<bool>> v(4,vector<bool>(13,false));
    char Mark;
    int Number;
    // 0:S, 1:H, 2:C, 3:D
    for(int i=0; i<N; ++i){
        cin >> Mark >> Number;
        if( Mark=='S' )
            v[0][Number-1]=true;
        if( Mark=='H' )
            v[1][Number-1]=true;
        if( Mark=='C' )
            v[2][Number-1]=true;
        if( Mark=='D' )
            v[3][Number-1]=true;
    }

    for(int i=0; i<4; ++i){
        for(int j=0; j<13; ++j){
            if(v[i][j] == false){
                if( i==0 ){
                    cout << "S " << j+1 <<'\n';
                }
                if( i==1 ){
                    cout << "H " << j+1 <<'\n';
                }
                if( i==2 ){
                    cout << "C " << j+1 <<'\n';
                }
                if( i==3 ){
                    cout << "D " << j+1 <<'\n';
                }
            }
        }
    }

    return 0;
}

