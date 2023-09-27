#include <iostream>
#include <vector>

using namespace std;

string judge(int m, int f, int r) {
    string ret;

    if (m == -1 || f == -1) {
        ret = "F";
    } else if (m + f >= 80) {
        ret = "A";
    } else if (m + f >= 65) {
        ret = "B";
    } else if (m + f >= 50) {
        ret = "C";
    } else if (m + f >= 30) {
        if (r >= 50) {
            ret = "C";
        } else {
            ret = "D";
        }
    } else {
        ret = "F";
    }

    return ret;
}

int main(void){
    vector<string> list;
    while (true) {
        int m, f, r;
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1) break;
    
        list.push_back(judge(m, f, r));
    }

    for (auto &rank : list) {
        cout << rank << endl;
    }
    
    return 0;
}