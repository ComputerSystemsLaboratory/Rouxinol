#include<iostream>

using namespace std;

int remainder (int large, int small) {

    // cout << "remainder mode" << endl;

    if (small == 0) {
        return large;
    }

    int x, y;

    x = small;
    y = large % small;

    int answer = remainder (x, y);

    // cout << "ERROR" << endl;

    return answer;

}

int main () {

    int x, y;

    cin >> x >> y;

    int answer = remainder (x, y);

    // for (int i = max(x, y); i >= 0; i--) {
    //     // cout << i << ": " << y % i << " " << z % i << endl; 
    //     if (x % i == 0 && y % i == 0) {
    //         d = i;
    //         break;
    //     } 
    // }

    cout << answer << endl;

    return 0;

}
