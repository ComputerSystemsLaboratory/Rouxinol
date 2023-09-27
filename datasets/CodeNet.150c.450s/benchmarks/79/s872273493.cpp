#include <iostream>
#include <vector>
 
using namespace std;

int main(){
    int n,r,p,c;
    vector<int> cards;

    while(cin >> n >> r, n&&r){
        cards.clear();
        for(int i = 0; i < n; i++){
            cards.push_back(n - i);
        }
        while(r--){
            cin >> p >> c;
            vector<int> cpCards = cards;
            int pos = 0;
            for(int i = p - 1; i < p - 1 + c; i++){
                cards[pos] = cpCards[i];
                pos++;
            }
            for(int i = 0; i < p - 1; i++){
                cards[pos] = cpCards[i];
                pos++;
            }
        }
        cout << cards.front() << endl;
    } 
}