#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    char str[128];
    set<string> s;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%s", str);
        s.insert((string)str);
    }
    
    int stat = 0;
    
    scanf("%d", &m);
    
    for (int i = 0; i < m; i++){
        scanf("%s", str);
        if (s.find((string)str) == s.end()){
            printf("Unknown %s\n", str);
        }
        else {
            printf("%s by %s\n", stat ? "Closed" : "Opened", str);
            stat ^= 1;
        }
    }
    
    return (0);
}