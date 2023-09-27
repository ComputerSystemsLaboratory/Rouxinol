#include<iostream>
#include<string>
using namespace std;

int main(void){
    int Tarou = 0;
    int Hanako = 0;
    int cards;
    string card1,card2;
    cin >> cards;
    for (int i = 0;i < cards;i++){
        cin >> card1 >> card2;
        if (card1.compare(card2) == 0) {
            Tarou += 1;
            Hanako += 1;
        }
        else if(card1.compare(card2) > 0) {
            Tarou += 3;
        }
        else {
            Hanako += 3;
        }
    }
            cout << Tarou << " " << Hanako << endl;
}
