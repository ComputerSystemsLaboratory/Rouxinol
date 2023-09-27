#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, score_taro=0, score_hanako=0;
    cin >> n;
    string card_taro, card_hanako;
    for(int i = 0; i != n; ++i){
        cin >> card_taro >> card_hanako;
        if (card_taro > card_hanako){
            score_taro += 3;
        }else if (card_taro < card_hanako){
            score_hanako += 3;
        }else{
            score_taro += 1;
            score_hanako += 1;
        }
    }
    cout << score_taro << ' ' << score_hanako << endl;
}