#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    vector<int> v;
    
    for(unsigned int i = 0;i < 5;i++){
        cin >> n;
        v.push_back(n);
    }
    
    sort(v.begin(), v.end(), greater<int>());
    
    for(int i = 0;i < v.size()-1;i++){
        cout << v.at(i) << " ";
    }cout << v.at(v.size()-1) << endl;
}