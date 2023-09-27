#include <iostream>
using namespace std;

int main()
{
    int n, s[15000], t, m[1000], count = 0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> s[i];
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> m[i];
        for(int j=0; j<n; j++)
        {
            if(m[i] == s[j])
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}