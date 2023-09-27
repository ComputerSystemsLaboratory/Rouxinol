#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int  abc[3];
    for (int i = 0; i < 3; i++){
        cin >> abc[i];
    }
    sort(abc, abc+3);
    cout << abc[0] << " "<< abc[1] << " "<< abc[2] << endl;
}
