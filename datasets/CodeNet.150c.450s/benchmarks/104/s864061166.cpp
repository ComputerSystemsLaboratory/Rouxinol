#include <iostream>

using namespace std;

int main()
{
    int w,n;
    scanf("%d", &w);
    scanf("%d", &n);
    int amida[w + 1];
    for(int i = 1; i <= w; i++) amida[i] = i;
    for(int i = 0; i < n; i++) {
        int a, b;
        scanf("%d,%d", &a, &b);
        swap(amida[a], amida[b]);
    }
    for(int i = 1; i <= w; i++) cout << amida[i] << endl;
    return 0;
}