
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <stack>
#include <functional>
#include <set>
#include <map>
#include <deque>

using namespace std;

struct Process{char name[10]; int time;};

Process Stack[100000];
int p = 0;

void push(Process data){
    Stack[p] = data;

    ++p;
}

Process pop(){
    Process ret;
    ret = Stack[0];


    for (int i = 1; i < p; ++i) {
        Stack[i - 1] = Stack[i];
    }

    --p;

    return ret;
}

int main(){
    int time_sum=0;

    int n, q;

    cin >> n >> q;

    Process tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp.name >> tmp.time;

        if (tmp.time > q){
            time_sum += q;
            tmp.time -= q;
            push(tmp);
        }else{
            time_sum += tmp.time;
            printf("%s %d\n", tmp.name, time_sum);
        }
    }

    while (p > 0){
        tmp = pop();

        if (tmp.time > q){
            time_sum += q;
            tmp.time -= q;
            push(tmp);
        }else{
            time_sum += tmp.time;
            printf("%s %d\n", tmp.name, time_sum);
        }
    }
}