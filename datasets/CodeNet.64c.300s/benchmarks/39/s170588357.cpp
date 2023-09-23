#include <iostream>

using namespace std;

int main()
{
    int count;
    int num;
    while(cin >> num)
    {
        count = 0;
        for(int a = 0; a < 10 && a <= num; ++a)
            for(int b = 0; b < 10 && a + b <= num; ++b)
                for(int c = 0; c < 10 && a + b + c <= num; ++c)
                    for(int d = 0; d < 10 && a + b + c + d <= num; ++d)
                        if(a + b + c + d == num) count++;
        cout << count << endl;
    }
}