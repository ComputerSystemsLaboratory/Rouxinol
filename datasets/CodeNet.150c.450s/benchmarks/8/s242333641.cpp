#include<iostream>

using namespace std;

int main () {

    int scoreT = 0;     // 太郎のカード
    int scoreH = 0;     // 花子のカード

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        string cardT;   // 太郎のカード
        string cardH;   // 花子のカード

        cin >> cardT >> cardH;

        for (int j = 0; cardT[j] != 0 || cardH[j] != 0; j++) {
            
            if (cardT[j] > cardH[j]) {
                // cout << "ScoreT += 3" << endl;
                scoreT += 3;
                break;
            } else if (cardT[j] < cardH[j]) {
                // cout << "ScoreH += 3" << endl;
                scoreH += 3;
                break;
            }

            if (cardT[j + 1] == 0 && cardH[j + 1] == 0) {
                // cout << "ScoreT += 1 & ScoreH +- 1" << endl;
                scoreT += 1;
                scoreH += 1;
            }

        }
    }

    cout << scoreT << " " << scoreH << endl;

    return 0;
}
