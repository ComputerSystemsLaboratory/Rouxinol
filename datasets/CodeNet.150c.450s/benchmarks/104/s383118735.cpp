#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int w, n;
    cin >> n;
    cin >> w;
    int T[31];
    for (int i = 1; i <= n; i++)
    {
        T[i] = i;
    }
    for (int i = 0; i < w; i++) {
        int a, b;
        char c;
        cin >> a >> c >> b;
        swap(T[a], T[b]);
    }
    for (int i = 1; i <= n; i++)
        cout << T[i] << endl;
    return 0;
}