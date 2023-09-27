#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <stack>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cmath>
#include<list>
#include <cstdlib>
using namespace std;
typedef long long ll;

int n;

list<int> p;

int main()
{
    scanf("%d",&n);
    char s[20];
    int x;
    for(int i = 0; i < n; ++i){
        scanf("%s",s);
        if(s[0] == 'i'){
            scanf("%d",&x);
            p.push_front(x);
        }else if(s[6] == 'F'){
            p.pop_front();
        }else if(s[6] == 'L'){
            p.pop_back();
        }else if(s[0] == 'd'){
            scanf("%d",&x);
            for(list<int>::iterator it = p.begin(); it != p.end(); ++it){
                if(*it == x){
                    p.erase(it);
                    break;
                }
            }
        }
    }
    for(list<int>::iterator it = p.begin(); it != p.end(); ++it){
        printf("%s%d",it == p.begin() ? "" : " ", *it);
    }
    printf("\n");
    return 0;
}