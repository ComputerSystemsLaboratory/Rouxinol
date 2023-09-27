#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void printVector(vector<vector<int> > v) {
    for (int i = 0; i < v.size(); i++) {
        if (i % 3 == 0 && i != 0) {
            cout << "####################" << endl; 
        }
        for (int j = 0; j < v.front().size(); j++) {
            cout << " " << v[i][j];
        }
        cout << endl;
    }
}

int main(void) {
    vector<vector<int> > house(3*4, vector<int>(10, 0));
    int times;
    int v;
    int f;
    int r;
    int b;
    cin >> times;
    for (int i= 0; i < times; i++) {
       cin >> v >> f >> r >> b; 
       house[3 * (v - 1) + f - 1][r - 1] += b;
    }
    printVector(house); 
    return 0;
}