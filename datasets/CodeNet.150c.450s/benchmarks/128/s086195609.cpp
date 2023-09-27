#include <iostream>
#include <string.h>
using namespace std;
char a[20];
int CharNumber;
int z = 0;
char temp;

int main()
{
        cin >> a;
        CharNumber = strlen(a);

    for(int x = 0; x < CharNumber; x++)
    {
                for(z = 0; z < CharNumber-x-1; z++)
        {
            temp = a[z+1];
            a[z+1] = a[z];
            a[z] = temp;
        }
    }



        cout << a << endl;


}