#include<iostream>
#include<string>
using namespace std;
int main() {
    int count[31] = { 0 }, n, i;
    for (i = 1; i <= 28; i++)
    {
        cin >> n;
        count[n] = 1;
    }
    for (i = 1; i <= 30; i++)
    {
        if (count[i] == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}