#include <iostream>
using namespace std;

int main() {
    int AsPoint, BsPoint, AsCard, BsCard;
    int key;
    while(true){
        cin >> key;
        AsPoint = BsPoint = 0;
        if(key == 0) return 0;
        while(key != 0) {
            cin >> AsCard;
            cin >> BsCard;
            if(AsCard == BsCard) {
                AsPoint += AsCard;
                BsPoint += BsCard;
            } else {
                AsPoint += (AsCard > BsCard) ? AsCard + BsCard : 0;
                BsPoint += (BsCard > AsCard) ? AsCard + BsCard : 0;
            }
            --key;
        }
        cout << AsPoint << " " << BsPoint << endl;
    }
}