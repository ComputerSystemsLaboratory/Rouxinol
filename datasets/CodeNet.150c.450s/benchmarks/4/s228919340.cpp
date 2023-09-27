#include <bits/stdc++.h>

using namespace std;

char getGrade(int mid, int term, int reex) {
    int sum = mid + term;
    char grade;
    if (mid == -1 || term == -1) {
        grade = 'F';
    } else if (sum >= 80) {
        grade = 'A';
    } else if (sum >= 65) {
        grade = 'B';
    } else if (sum >= 50) {
        grade = 'C';
    } else if (sum >= 30) {
        if (reex >= 50) grade = 'C';
        else grade = 'D';
    } else if (sum < 30) {
        grade = 'F';
    }

    return grade;
}

int main() {
    int mid, term, reex;
    while (1) {
        cin >> mid >> term >> reex;
        if (mid == -1 && term == -1 && reex == -1) break;
        cout << getGrade(mid, term, reex) << endl;
    }
}