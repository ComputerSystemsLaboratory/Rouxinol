#include <bits/stdc++.h>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define square(x) (x) * (x)
#define cube(x) (x) * (x) * (x)

const int INF = 1e9;

using namespace std;

int main() {
    int n;
    list<int> a;
    scanf("%d", &n);
    REP(i, n){
        char ope[11];
        scanf("%s", ope);
        if(ope[0] == 'i'){
            int x;
            scanf("%d", &x);
            a.push_front(x);
        } else if(ope[6] == 'F'){
            a.pop_front();
        } else if(ope[6] == 'L') {
            a.pop_back();
        } else if(ope[0] == 'd') {
            int x;
            scanf("%d", &x);
            for(list<int>::iterator s = a.begin(); s != a.end(); s++){
                if(*s == x){
                    a.erase(s);
                    break;
                }
            }
        }
    }

    bool first = true;
    for(list<int>::iterator s = a.begin();s != a.end();s++){
        if(first)
            first = false;
        else{
            printf(" ");
        }//cout << *s << " ";
        printf("%d", *s);
    }
    printf("\n");

    return 0;
}