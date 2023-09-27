#include <stdio.h>
#include <string.h>

const int MAX = 100000;
struct data {char name[11]; int time;} queue[MAX];
int head = 0, tail = 0;

int isEmpty(){
    return head == tail;
}

void enqueue(char n[], int v){
    strcpy(queue[tail].name, n);
    queue[tail].time = v;
    tail++;
    if(tail >= MAX) tail = 0;
}

struct data dequeue(void){
    struct data d = queue[head];
    head++;
    if(head >= MAX) head = 0;
    return d;
}

int main(void){
    int i, j, n, q, total = 0;
    char ch[11];
    struct data d;

    scanf("%d %d", &n, &q);
    for(i = 0; i < n; i++){
        scanf("%s %d", ch, &j);
        enqueue(ch, j);
    }

    while(!isEmpty()){
        d = dequeue();
        if(d.time > q){
            total += q;
            enqueue(d.name, d.time - q);
        } else {
            total += d.time;
            printf("%s %d\n", d.name, total);
        }
    }

    return 0;
}