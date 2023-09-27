#include <bits/stdc++.h>
using namespace std;

int que[100000];
int head = 0;
int tail = 0;
void enq(int a){
    que[tail] = a;
    tail = (tail+1)%100000;
}

int deq(){
    int h = head;
    head = (head+1)%100000;
    return que[h];
}

bool empty(){
    return head == tail;
}

int main() {
    int n, q;
    char name[100000][11];
    int time[100000];
    int clock = 0;

    scanf("%d%d", &n, &q);
    for(int i=0; i<n; i++){
        scanf("%s%d", name[i], &time[i]);
        enq(i);
    }

    while(!empty()){
        int i=deq();
        if(time[i] <= q){
            clock += time[i];
            time[i] = 0;
            printf("%s %d\n", name[i], clock);
        }else{
            clock += q;
            time[i] -= q;
            enq(i);
        }
    }
}