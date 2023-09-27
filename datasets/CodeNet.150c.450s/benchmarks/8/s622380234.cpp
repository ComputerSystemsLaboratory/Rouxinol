#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t=0, h=0;
    string t_card,h_card;
    cin >> n;
    while(n--){
        cin>> t_card >> h_card;
        if(t_card > h_card)
            t += 3;
        else if(t_card < h_card)
            h += 3;
        else{
                t++;
                h++;
            }
    }
    cout<< t << " " << h << endl;
}
