#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;

int N, R, p, c;

void show(vector<int> v){
    for (int i = 0; i < N; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    while (cin >> N >> R && N){
        vector<int> card(N);
        for (int i = 0; i < N; i++){
            card[i] = N - i;
        }
        //cout << "初期入力"<< endl;
        //show(card);

        for (int i = 0; i < R; i++){
            cin >> p >> c;
            rotate(card.begin(), card.begin()+p-1, card.begin()+p+c-1);
            //cout << i+1 << "回目のrotate" << endl;
            //show(card);
        }
        cout << card[0] << endl;
    }
}

