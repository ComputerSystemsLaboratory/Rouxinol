#include <iostream>

using namespace std;

void func(int &points_A, int &points_B, string str1, string str2) {
    int n;
    int isLonger = 0;
    if (str1.length() > str2.length()) {
        n = str2.length();
        isLonger = 1;
    } else if (str1.length() < str2.length()) {
        n = str1.length();
        isLonger = 2;
    } else {
        n = str1.length();
    }
    for (int i = 0; i < n; i++) {
        if ((int) str1[i] > (int) str2[i]) {
            points_A += 3;
            return;
        } else if ((int) str1[i] < (int) str2[i]) {
            points_B += 3;
            return;
        }
    }

    if (isLonger == 1) {
        points_A += 3;
        return;
    } else if (isLonger == 2) {
        points_B += 3;
        return;
    } else if (isLonger == 0) {
        points_A++;
        points_B++;
    }


}

int main() {
    int points_A = 0;
    int points_B = 0;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        string str1;
        string str2;
        cin >> str1;
        cin >> str2;

        func(points_A, points_B, str1, str2);
    }
    cout << points_A << " " << points_B << "\n";

}