#include <iostream>
#include <string>

using namespace std;

int main()
{

    int TestCase;
    cin >> TestCase;

    string Answer[100];

    for(int a = 0; a < TestCase; a++)
    {
            float line1;
            float line2;
            float x1,x2,x3,x4;
            float y1,y2,y3,y4;

            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

            line1 = (y2-y1)/(x2-x1);
            line2 = (y4-y3)/(x4-x3);

            if (line1 == line2)
            {
                Answer[a] = "YES";
            }
            else
            {
                Answer[a] = "NO";
            }
    }

    for(int b = 0; b < TestCase; b++)
    {
        cout << Answer[b] << endl;
    }



    return 0;
}