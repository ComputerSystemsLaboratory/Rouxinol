#include    <iostream>
#include    <map>

using namespace std;

int main() {
    int n;
    const char mark[4] = {'S', 'H', 'C', 'D'};
    map<pair<char,int>, int> playingCard;

    cin >> n;
    for(int i = 0; i < n; i++) {
        char c;
        int x;
        
        cin >> c >> x;
        playingCard[make_pair(c,x)]++;
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 1; j <= 13; j++) {
            if(playingCard[make_pair(mark[i], j)] == 0) cout << mark[i] << ' ' << j << endl;
        }
    }

    return 0;
}
