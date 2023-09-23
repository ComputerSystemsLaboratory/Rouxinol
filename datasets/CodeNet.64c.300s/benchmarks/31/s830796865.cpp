#include <iostream>
using namespace std;

int main()
{
    int student;
    bool judge[31] = {false};

    for (int i = 0; i < 28; i++){
        cin >> student;
        judge[student] = true;
    }

    for (int i = 1; i <= 30; i++){
        if (judge[i] == false){
            cout << i << endl;
        }
    }
    return 0;
}