#include <iostream>
#include <list>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int q, x;
    char cmd[20];
    list<int> v;
    scanf("%d",&q);
    for (int i=0; i<q; i++) {
        scanf("%s",cmd);
        if (strcmp(cmd,"insert")==0) {
            scanf("%d",&x);
            v.push_front(x);
        } else if (strcmp(cmd,"deleteLast")==0) {
            v.pop_back();
        } else if (strcmp(cmd,"deleteFirst")==0) {
            v.pop_front();
        } else if (strcmp(cmd,"delete")==0) {
            scanf("%d",&x);
            list<int>::iterator it;
            for (it=v.begin(); it!=v.end(); it++)  {
                if (*it==x) {
                    v.erase(it);
                    break;
                }
            }
        }
    }
    int i=0;
    list<int>::iterator it;
    for (it=v.begin(); it!=v.end(); it++) {
        if (i++) {
            printf(" ");
        }
        printf("%d",*it);
    }
    printf("\n");
    return 0;
}