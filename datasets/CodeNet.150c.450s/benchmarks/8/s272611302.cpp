#include <iostream>
#include <string>

int main()
{
    using namespace std;
    
    string str1, str2;
    int n, i, score1 = 0, score2 = 0;
    
    cin >> n;
    
    for (i = 0; i < n; ++i) {
        cin >> str1 >> str2;
        if (str1 > str2) score1 += 3;
        else if (str1 < str2) score2 += 3;
        else {
            score1++;
            score2++;
        }
    }

    cout << score1 << " " << score2 << endl;

    return 0;
}