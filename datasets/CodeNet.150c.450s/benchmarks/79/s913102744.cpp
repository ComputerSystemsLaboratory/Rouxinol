#include <vector>
#include <iostream>
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
    int n, r;
    int p, c;
    int up[100] = {}, down[100] = {};

    while(cin >> n >> r, n){
        vector<int> cards;
        rep(i, n){
            cards.push_back(n - i);
        }
        rep(i, r) {
            cin >> p >> c;
            rep(j, p-1){
                up[j] = cards[j];
            }
            rep(j, c){
                down[j] = cards[p - 1 + j];
            }
            rep(j, c){
                cards[j] = down[j];
            }
            rep(j, p-1){
                cards[c + j] = up[j];
            }            
        }
        cout << cards[0] << endl;
    }

    return 0;
}