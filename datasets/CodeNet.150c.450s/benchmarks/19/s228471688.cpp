#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector< vector<int> > a;
    while(true){
        int i,j;
        cin >> i >> j;
        if(i ==0 && j ==0) break;
        vector<int> b;
        b.push_back(i);b.push_back(j);
        a.push_back(b);
    }
    for(int i = 0; i <= a.size() -1; i++){
        cout << min(a[i][0],a[i][1]) << " " << max(a[i][0],a[i][1]) << endl;
    }
    return 0;
}
