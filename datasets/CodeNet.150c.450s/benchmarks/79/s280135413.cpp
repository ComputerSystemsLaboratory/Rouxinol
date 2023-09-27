#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    vector<int> vec;
    int n,m;
    int x,y,z;
    while(1){
        vec.clear();
        cin >> n >> m;
        if(n == 0 && m == 0)break;
        for(int i = 0;i < n;i++){
            vec.push_back(i+1);
        }
        for(int i = 0;i < m;i++){
            cin >> x >> y;
            vector<int>::iterator ite = vec.end() - (x+y-1);
            for(int j = 0;j < y;j++){
                z = *ite;
                vec.erase(ite);
                vec.push_back(z);
            }
        }
        cout << vec.back() <<endl;
    }
    return 0;
}