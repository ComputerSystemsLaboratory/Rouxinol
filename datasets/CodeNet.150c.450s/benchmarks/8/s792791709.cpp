#include <iostream>
using namespace std;
int main(void){
    string card_t, card_h;
    int n, point_t, point_h;
    point_t = 0;
    point_h = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> card_t >> card_h;
        if (card_t > card_h) {
            point_t += 3;
        } else if (card_t < card_h) {
            point_h += 3;
        } else {
            point_t++;
            point_h++;
        }
    }
    cout << point_t << " " << point_h << endl;
    return 0;
}