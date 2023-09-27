#include<iostream>
#include<string>

using namespace std;

int main () {

    while (1) {
        string card;

        cin >> card;

        if (card[0] == '-') {
            break;
        }

        int m;
        cin >> m;
        for (int i = 0; i < m; i++) {
            
            int h;
            cin >> h;

            string tmp;
            tmp = card.substr(0, h);

            // cout << tmp << endl;

            // int gomi;
            // cin >> gomi;

            int cnt = 0;
            for (int j = h; card[j] != 0; j++) {
                card[j - h] = card[j];
                cnt++;
            }
            for (int j = cnt; card[j] != 0; j++) {
                card[j] = tmp[j - cnt];
            }

        }

        cout << card << endl;
    }
    return 0;
}
