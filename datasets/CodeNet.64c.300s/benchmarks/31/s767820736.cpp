#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int stu[28];
    int stusum = 0;
    int sum = 0;
    int Nostu[2];

    for (int i = 0; i < 28; i++){
        cin >> stu[i];
        stusum += stu[i];
    }

    for (int i = 1; i <= 30; i++){
        sum += i;
    }

    sort(stu, stu + 28);
    
    for (int j = 0; j < 30; j++){
        if (stu[j] != j + 1){
            Nostu[0] = j + 1;
            break;
        }
    }
    
    Nostu[1] = (sum - stusum) - Nostu[0];

    for (int i = 0; i < 2; i++){
        cout << Nostu[i] << endl;
    }

    return (0);
}