#include<iostream>
using namespace std;
int main(){
    int x, s2, n, arr[4][13] = {{},{},{},{}};
    cin >> x;
    char s, suit[] = {'S', 'H', 'C', 'D'};
    for(int i = 0; i < x; i++){
        cin >> s >> n;
        switch(s){
            case 'S': s2 = 0; break;
            case 'H': s2 = 1; break;
            case 'C': s2 = 2; break;
            default: s2 = 3;
        }
        arr[s2][n-1] = 1;
    }

    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 13; j++)
            if(arr[i][j] == 0)
                cout << suit[i] << " " << (j + 1) << endl;
    return 0;
}
