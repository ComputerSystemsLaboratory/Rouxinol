#include <iostream>

using namespace std;

float FindGradient(float a1, float b1, float a2, float b2)
{
    return (b2 - b1)/(a2 - a1);
}

int main()
{
    int T;
    string Result[100];
    cin >> T;

    for(int a = 0; a < T; a++)
    {
        float x1,x2,x3,x4,y1,y2,y3,y4;
        float M1,M2;

        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        M1 = FindGradient(x1,y1,x2,y2);
        M2 = FindGradient(x3,y3,x4,y4);

        if(M1 == M2)
        {
            Result[a] = "YES";
        }
        else
        {
            Result[a] = "NO";
        }
    }

    for(int b = 0; b < T; b++)
    {
        cout << Result[b] << endl;
    }
}