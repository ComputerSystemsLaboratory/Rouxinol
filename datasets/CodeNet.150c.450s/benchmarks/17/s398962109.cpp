#include <iostream>
using namespace std;

int main()
{
    int Number[5];
    int Temp;

    for(int i = 0; i < 5; i++)
    {
        cin >> Number[i];
    }
    {
        for(int x = 0; x < 5; x++)
        {
            for(int z = 0; z < 4; z++)
            {
                if(Number[z] < Number[z+1])
                {
                    Temp = Number[z];
                    Number[z] = Number[z+1];
                    Number[z+1] = Temp;
                }
            }
        }

        for(int y = 0; y < 4; y++)
        {
            cout << Number[y] << " ";
        }
        cout << Number[4] << endl;

    }
    return 0;

}