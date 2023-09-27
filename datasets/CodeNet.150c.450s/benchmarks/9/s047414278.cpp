#include <iostream>
#include <string>
using namespace std;

int main(void){
    string cards;
    int m, h;
    int i;
    string unders, tops;
    
    while(true){
    cin >> cards;
    if(cards == "-") break;
    cin >> m;
    for(i = 0; i < m; i++){
        cin >> h;
 //       cout << cards << " ";
        unders = cards.substr(0, h);
        tops = cards.substr(h, cards.length() - h);
        cards = tops + unders;
//        cout << cards << endl;
    }
    cout << cards << endl;
    }
    return 0;
}