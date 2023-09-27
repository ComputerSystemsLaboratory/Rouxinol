#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

const int numOfMountain = 10;

int main(){
    int mountainBuf;
    vector<int> mountains;

    for(int i = 0; i < numOfMountain; i++) {
        cin >> mountainBuf;
        mountains.push_back(mountainBuf);
    }

    sort(mountains.begin(), mountains.end());

    vector<int>::iterator out = mountains.end();
    for(int i = 0; i < 3; i++) {
        out--;
        cout << *out << endl;
    }

    return 0;
}
