#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector<int> in;
    for(int n; cin >> n; in.push_back(n));
    
    sort(in.begin(), in.end(), greater<int>());

    for(int i = 0; i < 5; i ++) cout << ((i) ? " ":"") << in[i];
    cout << endl;

    return 0;
}