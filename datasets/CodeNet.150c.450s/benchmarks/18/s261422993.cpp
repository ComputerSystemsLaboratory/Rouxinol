#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int week, fraction;

    cin >> week;
        double debt = 100000;
        double const rate = 1.05;

        for (int i = 0; i < week; i++){
            debt = debt*rate;
            fraction = (int)debt % 1000;

            if (fraction > 0){
                debt = debt + 1000 - fraction;
            }
        }
        cout << (int)debt << endl;

    return 0;
}