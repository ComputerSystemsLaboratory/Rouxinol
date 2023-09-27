#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> v;
    int i;
    while(cin >> i){
        if(i == 0){
            cout << v[v.size() - 1] << endl;
            v.pop_back();
        } else {
            v.push_back(i);
        }
    }
}