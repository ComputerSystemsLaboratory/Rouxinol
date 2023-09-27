#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<bool> v;

    for (int i = 1; i <= 52; i++) {
        v.push_back(false);
    }

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        char mark;
        cin >> mark >> num;
        switch(mark) {
            case 'S':
                v[num] = true;
                break;
            case 'H':
                v[num+13] = true;
                break;
            case 'C':
                v[num+26] = true;
                break;
            case 'D':
                v[num+39] = true;
                break;
            default:
                break;
        }
    }

    for (int i = 1; i <= 52; i++) {
        if (!v[i]){
            if (i <= 13) {
                cout << "S " << i << endl;
            } else if(i > 13 && i <= 26) {
                cout << "H " << i - 13 << endl;
            } else if(i > 26 && i <= 39) {
                cout << "C " << i - 26 << endl;
            } else if(i > 39) {
                cout << "D " << i - 39 << endl;
            }
        }
    }

    return 0;
}