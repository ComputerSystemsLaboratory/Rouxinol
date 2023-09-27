#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 100005
int head,tail,n;
typedef struct PP
{
    char name[100];
    int time;
}P;

P Q[LEN];
void enqueue(P p)
{

    Q[tail] = p;
    tail = (tail+1) % LEN;
    return;
}
P dequeue()
{
    P p;
    p = Q[head];
    head = (head+1) % LEN;
    return p;
}
int min(int a, int b) { return a>b ? b:a;}
int main()
{
    int n,q;
    P u;
    int elapse = 0;
    int c = 0;
    scanf("%d %d",&n,&q);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d",Q[i].name, &Q[i].time); 
    } 
    head = 0, tail = n;
    while (head!=tail)
    { 
        u = dequeue();
        c = min(q, u.time);
        u.time -= c;
        elapse += c;
        if(u.time > 0) enqueue(u);
        else
        { 
            printf("%s %d\n",u.name,elapse); 
        } 
    } 
    return 0;
}