#include <iostream>
using namespace std;

void print20sharps()
{
    for(int i = 0; i < 20; i++) {
        cout << "#";
    }
    cout << endl;
}

int main(){
    int n, b, f, r, v;
    cin >> n;

    // ?????????
    int bldg_01[3][10], bldg_02[3][10], bldg_03[3][10], bldg_04[3][10];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 10; j++) {
            bldg_01[i][j] = 0;
            bldg_02[i][j] = 0;
            bldg_03[i][j] = 0;
            bldg_04[i][j] = 0;
        }
    }

    // ????????????????????????
    for(int i = 0; i < n; i++) {
        cin >> b >> f >> r >> v;
        if(b == 1) bldg_01[f-1][r-1] += v;
        if(b == 2) bldg_02[f-1][r-1] += v;
        if(b == 3) bldg_03[f-1][r-1] += v;
        if(b == 4) bldg_04[f-1][r-1] += v;
    }

    // ???????????¨?????????
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 10; k++) {
                if(i == 0) cout << " " << bldg_01[j][k];
                if(i == 1) cout << " " << bldg_02[j][k];
                if(i == 2) cout << " " << bldg_03[j][k];
                if(i == 3) cout << " " << bldg_04[j][k];
            }
            cout << endl;
        }
        if(i == 3) break;
        print20sharps();
    }

    return 0;
}