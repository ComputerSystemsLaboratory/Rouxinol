#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a.at(i);
    reverse(a.begin(), a.end());
    for(int i=0; i<n; i++){
        cout << a.at(i);
        if (i != a.size() - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
