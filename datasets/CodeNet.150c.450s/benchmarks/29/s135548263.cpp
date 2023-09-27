#include <cstdio>
#include <list>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    char s[15];
    list<int>l;
    while(n--){
        int m;
        scanf("%s", s);
        if(s[0] == 'i'){
            scanf("%d", &m);
            l.push_front(m);
        }
        else if(s[6] == 'L'){
            l.pop_back();
        }
        else if(s[6] == 'F'){
            l.pop_front();
        }
        else{
            scanf("%d", &m);
            for(list<int>::iterator it=l.begin(); it!=l.end(); it++){
                if(*it == m){
                    l.erase(it);
                    break;
                }
            }
        }
    }

    bool flag = true;
    for(list<int>::iterator it=l.begin(); it!=l.end(); it++){
        if(flag){
            flag = !flag;
            printf("%d", *it);
        }
        else{
            printf(" %d", *it);
        }
    }
    printf("\n");
    return 0;
}
