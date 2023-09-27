#include <iostream>
#include <string>
using namespace std;
int main(){
    string cards, s;
    int m, h, i;
    while(cin>>cards,cards != "-"){
      cin>>m;
        for(int i = 0; i < m; i++){
            cin >> h;
            s.assign(cards, 0, h);
            cards.erase(0, h);
            cards += s;
        }
        cout << cards << endl;
    }

    return 0;
}