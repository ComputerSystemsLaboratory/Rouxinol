#include <iostream>
using namespace std;
 
int main() {
    int n,v,j,k;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; ++i)
    {
        v = s[i];
        j = i-1;
        while (j >= 0 && s[j] > v){
            s[j+1] = s[j];
            j -= 1;
        }
        s[j+1] = v;
        for (k = 0; k < n; ++k)
        {
            cout << s[k];
            if(k < n-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}