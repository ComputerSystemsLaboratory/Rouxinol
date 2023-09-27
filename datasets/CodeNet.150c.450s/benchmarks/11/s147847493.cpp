#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

void printVector(vector<vector<int> > v) {
    for (int i = 0; i < v.size(); i++ ) {
        for (int j = 0; j < v.front().size(); j++) {
            cout << v[i][j] << " "; 
        }
        cout << endl;
    }
}

int FromCharToInt(char moji) {
    if (moji == 'S') {
        return 0;
    } else if (moji == 'H') {
        return 1;
    } else if (moji == 'C') {
        return 2;
    } else {
        return 3;
    }
}

char FromIntToChar(int mojinum) {
    if (mojinum == 0) {
        return 'S';
    } else if (mojinum == 1) {
        return 'H';
    } else if (mojinum == 2) {
        return 'C';
    } else {
        return 'D';
    }
}

void searchVector(vector<vector<int> > v) {
    for (int i = 0; i < v.size(); i++ ) {
        for (int j = 0; j < v.front().size(); j++) {
            if( v[i][j] == 0) {
                char mark = FromIntToChar(i);
                cout << mark << " " << j + 1 << endl;
            }
        }
    }
    
}

int main(void) {
    vector<vector<int> > v(4, vector<int>(13, 0));
    int n;
    cin >> n;
    char moji;
    int mojinum;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> moji >> num;
        mojinum = FromCharToInt(moji);
        v[mojinum][num - 1] = 1;
    }
    searchVector(v);
    return 0;
}