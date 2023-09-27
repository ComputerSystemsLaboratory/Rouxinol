#include<iostream>
using namespace std;

int main(){
    while(1){
        int grade[3] = {};
        for (int i = 0; i < 3; i++){
            cin >> grade[i];
        }

        if (grade[0] == -1 && grade[1] == -1 && grade[2] == -1) break;

        if (grade[0] == -1 || grade[1] == -1) cout << "F" << endl;
        else if (grade[0] + grade[1] >= 80) cout << "A" << endl;
        else if (grade[0] + grade[1] >= 65) cout << "B" << endl;
        else if (grade[0] + grade[1] >= 50) cout << "C" << endl;
        else if (grade[0] + grade[1] >= 30) {
            if (grade[2] >= 50) cout << "C" << endl;
            else cout << "D" << endl;
        } else cout << "F" << endl;
    }    
    return 0;
}
