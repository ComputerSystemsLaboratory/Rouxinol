#include <iostream>
using namespace std;
int main(void){
    int m = 0, f = 0, r = 0, sum;
    char result;
    for (;;)
    {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1)
            break;
        if (m == -1 || f == -1)
        {
            result = 'F';
        }
        else
        {   
            sum = m + f;
            if (sum >= 80)
            {
                result = 'A';
            }
            else if (sum >= 65)
            {
                result = 'B';
            }
            else if (sum >= 50)
            {
                result = 'C';
            }
            else if (sum >= 30)
            {
                if (r >= 50)
                {
                    result = 'C';
                }
                else
                {
                    result = 'D';
                }
            }
            else
            {
                result = 'F';
            }
        }
        
        cout << result << endl;
    }
}