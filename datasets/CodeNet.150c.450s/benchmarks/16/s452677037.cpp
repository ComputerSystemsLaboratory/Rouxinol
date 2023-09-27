#include <cstdio>
#include <stack>
#include <list>
using namespace std;

typedef struct{
    int left_edge;
    int area;
}part;

list<part> calc(list<part> parts){
    int num = parts.size() - 1;
    part tmp;
    parts.push_front(parts.back());
    parts.pop_back();
    for(int i=0;i<num;i++){
        if(parts.back().left_edge < parts.front().left_edge)
            parts.push_front(parts.back());
        else
            parts.front().area += parts.back().area;
        parts.pop_back();
    }
    return parts;
}

int main(){
    list<part> parts;
    stack<int> s;
    char str[20001];
    int i=0;
    int sum=0;
    part tmp;

    scanf("%s",str);

    while(str[i]!='\0'){
        switch(str[i]){
        case '\\':
            s.push(i);
            break;
        case '_':
            break;
        case '/':
            if(s.empty())
                break;
            tmp.left_edge = s.top();
            tmp.area = i - tmp.left_edge;
            sum += tmp.area;
            parts.push_back(tmp);
            s.pop();
            break;
        default:
            return -1;
        }
        i++;
    }

    printf("%d\n",sum);

    parts = calc(parts);

    printf("%lu",parts.size());

    while(parts.size()){
        printf(" %d", parts.front().area);
        parts.pop_front();
    }

    printf("\n");

    return 0;
}

