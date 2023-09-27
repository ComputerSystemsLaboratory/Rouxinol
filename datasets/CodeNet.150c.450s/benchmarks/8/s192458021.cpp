#include <iostream>
#include <string>

using namespace std;

int main(){

        int gameNum = 0,Hanako = 0,Taro = 0;
        string HCard,TCard;
        cin >> gameNum;
        for(int i = 0; i < gameNum; i++){
                cin >> HCard >> TCard;
                if(HCard.compare(TCard) == 0){
                        Hanako++;
                        Taro++;
                }
                else if(HCard.compare(TCard) < 0) Taro += 3;
                else Hanako += 3;
        }

        cout << Hanako << " " << Taro << endl;

        return 0;
}