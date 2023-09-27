#include <iostream>
#include <string>

using namespace std;

int main(){
    while(true){
        string cards;
        cin >> cards;
        if(cards == "-") break;
        int m;
        cin >> m;
        for(int i = 0; i != m; ++i){
            int h;
            cin >> h;
            cards = cards.substr(h) + cards.substr(0, h);
        }
        cout << cards << endl;
    }
}