#include <iostream>
#include <string>
using namespace std;

void toLowerCase(string& str) {
    for (int i = 0; i < str.length(); ++i) {
        str[i] = (char) tolower(str[i]);
    }
}

// if Taro wins, return -1
// if Hanako wins, return 1
// if draw, return 0
int compareCard(string tCard, string hCard) {
    if (tCard == hCard) {return 0;}

    int min_len = tCard.length() > hCard.length() ? tCard.length() : hCard.length();
    for (int i = 0; i < min_len; ++i) {
        if (tCard[i] != hCard[i]) {
            return tCard[i] < hCard[i] ? 1 : -1;
        }
        if (i == min_len - 1) {
            return min_len == tCard.length() ? 1 : -1;
        }
    }
}

int main() {
//    freopen("in.txt", "r", stdin);

    int n, result, tSum = 0, hSum = 0;
    string ta, ha;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> ta >> ha;
        result = compareCard(ta, ha);
        switch(result) {
        case -1:
            tSum += 3;
            break;
        case 0:
            ++tSum;
            ++hSum;
            break;
        case 1:
            hSum += 3;
            break;
        }
    }
    cout << tSum << " " << hSum << endl;
}