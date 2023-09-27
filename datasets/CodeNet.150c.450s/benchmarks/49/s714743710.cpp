#include <iostream>
#include <vector>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
    vector<int> vc;
    int n;
    while(cin >> n){
        if(n == 0) break;
        int tmp;
        vc.clear();
        REP(i,n){
            cin >> tmp;
            vc.push_back(tmp);
        }
        sort(vc.begin(), vc.end());
        vc.erase(vc.begin());
        vc.erase(--vc.end());
        int sum = 0;
        vector<int>::iterator it = vc.begin();
        while(it != vc.end()){
            sum += (*it);
            it++;
        }
        cout << sum/(n-2) << endl;
    }
    return 0;
}