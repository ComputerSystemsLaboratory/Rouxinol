#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <map>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

void f(const int,const int,int*);

int main()
{
    priority_queue<int> qu;
    char str[8];
    int num;
    while(1){
        scanf("%s",str);
        if(!strcmp(str,"insert")){
            scanf("%d",&num);
            qu.push(num);
        }else if(!strcmp(str,"end")){
            break;
        }else{
            printf("%d\n",qu.top());
            qu.pop();
        }
    }
}