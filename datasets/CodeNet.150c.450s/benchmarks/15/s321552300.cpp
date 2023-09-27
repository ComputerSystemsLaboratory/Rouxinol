#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <set>
using namespace std;
set<int>p, q;
set<int>::iterator pit;
set<int>::iterator qit;
int main(){
    int n, m;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        p.insert(a);
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        int b;
        scanf("%d", &b);
        q.insert(b);
    }

    int cnt = 0;
    for(pit=p.begin(); pit!=p.end(); pit++){
        for(qit=q.begin(); qit!=q.end(); qit++){
            if(*pit == *qit){
                cnt++;
                break;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
