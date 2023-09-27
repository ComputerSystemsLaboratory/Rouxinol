#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    vector<int>v;
    for(int i=0;i<3;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++){
        cout << v[i];
        if(i!=2) cout << " ";
    }
    cout << endl;
    return 0;
}