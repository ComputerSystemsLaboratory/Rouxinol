#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n = 0;
    int q = 0;
    cin >> n;
    
    int s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&s[i]);
    }
    cin >> q;
    int t[q];
    for (int i = 0; i < q; i++) {
        scanf("%d",&t[i]);
    }
    int sum = 0;
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < n; j++) {
            if (s[j] == t[i]) {
                sum++;
                break;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}