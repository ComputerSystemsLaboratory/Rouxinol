#include <cstdio>
#include <map>
using namespace std;

int main(){
    static char s[2000010];
    map<int,int> q;
    while(1){
        scanf("%s",s);
        if(s[0] == 'e' && s[1] == 'n') break;
        if(s[0] == 'i'){
            int x;
            scanf("%d",&x);
            q[x]++;
        } else {
            printf("%d\n",q.rbegin()->first);
            q.rbegin()->second--;
            if(q.rbegin()->second == 0){
                q.erase(q.rbegin()->first);
            }
        }
    }
}