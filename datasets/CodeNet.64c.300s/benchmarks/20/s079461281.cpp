#include <iostream>

using namespace std;

int main()
{
    int d;
    int Answer;

    while(cin >> d)
    {
        Answer = 0;
        for(int i = d; i < 600; i+=d)
        {
            Answer = Answer + i*i*d;
        }

        cout << Answer << endl;
    }

}