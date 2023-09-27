#include <iostream>
using namespace std;
 
int main(){
    int n, num;
    char m;
    cin >> n;
    int a[4][13] = {};

    for(int i=0;i<n;i++){
        cin >> m >> num;
        switch(m){
            case 'S':
            a[0][num-1] = 1;
            break;
            case 'H':
            a[1][num-1] = 1;
            break;
            case 'C':
            a[2][num-1] = 1;
            break;
            case 'D':
            a[3][num-1] = 1;
            break;
        }
    }
    
    
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            if(a[i][j]==0){
                switch(i){
                case 0:
                cout << "S " << j+1 << endl;
                break;
                case 1:
                cout << "H " << j+1 << endl;
                break;
                case 2:
                cout << "C " << j+1 << endl;
                break;
                case 3:
                cout << "D " << j+1 << endl;
                break;
                }
            }
        }
    }
}
