#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i, n = 0;
    int a[3], score;
    vector<vector<int>> vec;
    
    while(1) {
        cin >> a[0] >> a[1] >> a[2];
        if(a[0] < 0 && a[1] < 0 && a[2] < 0) break;
        vec.push_back(vector<int>(a, a+sizeof(int)));
        ++n;
    }

    for(i=0; i<n; ++i) {
        if(vec[i][0] < 0 || vec[i][1] < 0) cout << 'F' << endl;
        else if(vec[i][0] + vec[i][1] >= 80) cout << 'A' << endl;
        else if(vec[i][0]+vec[i][1]>=65&&vec[i][0]+vec[i][1]<80)
            cout << 'B' << endl;
        else if(vec[i][0]+vec[i][1]>=50&&vec[i][0]+vec[i][1]<65)
            cout << 'C' << endl;
        else if(vec[i][0]+vec[i][1]>=30&&vec[i][0]+vec[i][1]<50) {
            if(vec[i][2] >= 50) {
                cout << 'C' << endl;
                continue;
            }
            cout << 'D' << endl;
        }
        else cout << 'F' << endl;
    }
    
    return 0;
}