#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> m(5);

    for(int i=0; i<5; i++){
        cin >> m[i];
    }
    sort(m.begin(), m.end(), greater<int>());

    for(int i=0; i<5; i++){
        if(i) cout << " ";
        cout << m[i];
    }
    cout << endl;
    return 0;
}