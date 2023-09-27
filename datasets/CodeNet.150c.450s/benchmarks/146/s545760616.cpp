#include <iostream>
using namespace std;
 
int main(){
    int n;
    long double t[100][8];
    long double ab, cd;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 8; j++){
            cin >> t[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        ab = (t[i][1]-t[i][3])*(t[i][4]-t[i][6]);
        cd = (t[i][5]-t[i][7])*(t[i][0]-t[i][2]);
        if(t[i][0] == t[i][2]){
            if(t[i][4] == t[i][6]){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else if(t[i][1] == t[i][3]){
            if(t[i][5] == t[i][7]){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else if(ab == cd){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}