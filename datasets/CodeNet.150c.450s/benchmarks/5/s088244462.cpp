#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int N, input;
    vector<int> intList;
    cin >> N;
    while(N-- > 0) {
        cin >> input;
        intList.push_back(input);
    }

    cout << intList[intList.size()-1];
    for(int i=intList.size()-2; i >= 0; i--) {
        cout << " " << intList[i];
    }
    cout << endl;

    return 0;
}