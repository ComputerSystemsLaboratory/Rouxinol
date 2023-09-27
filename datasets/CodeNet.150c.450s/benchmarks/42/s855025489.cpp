
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

#define N 100000

using namespace std;

struct Process{char name[10]; int time;};

Process Queue[N];
int head = 0, tail = 0;

void push(Process data){
    Queue[tail % N] = data;

    ++tail;
}

Process pop(){
    Process ret;
    ret = Queue[head % N];

    ++head;

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

    while (head != tail){
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