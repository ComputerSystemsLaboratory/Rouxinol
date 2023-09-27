#include<cstdio>
#include<cstring>
#include<list>
#include<algorithm>
using namespace std;
 
int main() {
    list<int> L;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char s[15];
        int  x;
        scanf("%s", s);
        if (s[0] == 'i') {
            scanf("%d", &x);
            L.push_front(x);
        }
        else {
            if (s[6] == 'F') L.pop_front();
            else if (s[6] == 'L') L.pop_back();
            else if (s[0] == 'd') {
                scanf("%d", &x);
                for (list<int> ::iterator it = L.begin(); it != L.end(); it++) {
                    if (*it == x) {
                        L.erase(it);
                        break;
                    }
                }
            }
        }
    }
    int i = 0;
    for (list<int>::iterator it = L.begin(); it != L.end(); it++) {
        if (i++) printf(" ");
        printf("%d", *it);
    }
    puts("");
}