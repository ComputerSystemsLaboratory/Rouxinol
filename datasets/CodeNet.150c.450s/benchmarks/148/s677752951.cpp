#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    int c[4] = {0};
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;
        switch(s[0])
        {
            case 'A':
                c[0]++;
                break;
            case 'W':
                c[1]++;
                break;
            case 'T':
                c[2]++;
                break;
            case 'R':
                c[3]++;
                break;
        }
    }
    printf("AC x %d\n", c[0]);
    printf("WA x %d\n", c[1]);
    printf("TLE x %d\n", c[2]);
    printf("RE x %d\n", c[3]);
    return 0;
}