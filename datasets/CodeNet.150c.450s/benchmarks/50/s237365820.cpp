#include <iostream>
using namespace std;

int main(){
    int n;
    int charge;
    int cnt = 0;

    int coin[] = {500, 100, 50, 10, 5, 1};

    while(cin >> n, n != 0){
        charge = 1000 - n;
        for(int i=0; i<6; i++){
            int j = 0;
            while(charge - coin[i] * j >= coin[i]){
                j++;
            }
            charge -= coin[i] * j;
            cnt += j;
        }

        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}