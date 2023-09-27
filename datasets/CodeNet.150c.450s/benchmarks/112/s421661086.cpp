#include <cstdio>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

int main(void)
{
    int n, m;
    
    while (1){
        cin >> n;
        if (n == 0) break;
        
        map <char, char> change;
        char a, b;
        for (int i = 0; i < n; i++){
            cin >> a >> b;
            change[a] = b;
        }
        
        cin >> m;
        
        char ans;
        for (int i = 0; i < m; i++){
            cin >> ans;
            map<char, char>::iterator it;
            it = change.find(ans);
            if (it != change.end()){
                char a = it->second;
                ans = a;
            }
            printf("%c", ans);
        }
        printf("\n");
        
    }
    
    return (0);
}