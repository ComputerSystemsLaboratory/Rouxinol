#include <iostream>
#include <vector>

using namespace std;

class Mat
{

};

int main()
{        
    while(1)
    {
        int m,f,r;
        cin >> m >> f >> r;
        if(m == -1 && f == -1 && r == -1)
        {
            return 0;
        }
        else if(m < 0 || f < 0)
        {
            cout  << "F";
        }
        else if((m + f) >= 80)
        {
            cout << "A";
        }
        else if((m + f) >= 65)
        {
            cout << "B";
        }
        else if((m + f) >= 50)
        {
            cout << "C";
        }
        else if((m + f) >= 30)
        {
            if(r >= 50)
            {
                cout << "C";
            }
            else
            {
                cout << "D";
            }
        }
        else
        {
            cout << "F";
        }
        cout << endl;
    }
}