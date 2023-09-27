#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    char ring[201], x[100], tmp[101];

    cin >> tmp;
    std::strcpy(ring, tmp);
    std::strcat(ring, tmp);
    //cout << ring << endl;
    cin >> x;
    //cout << x << endl;

    if (std::strstr(ring, x) != NULL)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    

    return 0;
}
