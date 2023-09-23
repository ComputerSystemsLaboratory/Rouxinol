#include <iostream>
#include <ctype.h>
using namespace std;
int main(void){
    char data[1200];
    cin.getline(data, sizeof(data));
    for (int i = 0; i < 1200; i++)
    {
        // ?°???????
        if (islower(data[i]) != 0)
        {
            data[i] = toupper(data[i]);
        }
        // ??§??????
        else
        {
            data[i] = tolower(data[i]);
        }
    }
    cout << data << endl;
}