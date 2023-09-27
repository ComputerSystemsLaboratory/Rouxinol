#include <iostream>
#include <vector>
#include <map>
#include <set>
#define FOR(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    n-=2;
    int first;
    cin >> first;
    vector<int> V(n);
    for(int i=0;i<n;i++){
        cin >> V[i];
    }
    int result;
    cin >> result;
    vector<ll> O(21);
    O[first] = 1;
    for(int i=0;i<n;i++){
        vector<ll> NO(21);
        for(int j=0;j<=20;j++){
            int ne1 = j + V[i];
            int ne2 = j - V[i];
            if(ne1 <= 20 && ne1 >= 0){
                NO[ne1] += O[j];
            }
            if(ne2 <= 20 && ne2 >= 0){
                NO[ne2] += O[j];
            }
        }
        O = NO;
    }
    cout << O[result] << endl;
}