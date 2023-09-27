#include<iostream>
#include<vector>
#include<algorithm>

#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
    int n, r;
    vector<int> vc;
    while(cin >> n >> r){
        if(n == 0 && r == 0) break;
        vc.clear();
        REP(i,n){
            vc.insert(vc.begin(),i+1);
        }
        int p, c;
        REP(i,r){
            cin >> p >> c;
            REP(j, c){
                int tmp = vc[p+c-2];
                vc.erase(vc.begin()+p+c-2);
                vc.insert(vc.begin(), tmp);
            }
        }
        cout << vc.front() << endl;
    }
    return 0;
}