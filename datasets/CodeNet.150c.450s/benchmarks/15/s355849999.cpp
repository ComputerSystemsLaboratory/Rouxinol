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
        int j = 0;
        s[n] = m[i];
        while(s[j] != m[i])    j++;
        if(j<n)   count++;
    }
    cout << count << endl;
    return 0;
}