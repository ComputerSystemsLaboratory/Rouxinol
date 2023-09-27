#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


typedef struct{
    char name[20];
    int time;
}QUEUE;

int main(int argc, const char * argv[]){
    
    //Input
    int t_slice, num;
    int size;
    int front = 0;
    int rear = 0;;
    int ctime = 0;
    
    scanf("%d %d", &num, &t_slice);
    
    size = 2 * num;
    
    QUEUE q[size];
    
    
    for(rear = 0; rear < num; rear++){
        scanf("%s %d", q[rear].name, &(q[rear].time));
    }
    
    
    while(front != rear){
        
        if(q[front].time > t_slice){
            q[front].time -= t_slice;
            q[rear] = q[front];
            rear = (rear + 1) % size;
            ctime += t_slice;
        }else{
            printf("%s %d\n", q[front].name, ctime + q[front].time);
            ctime += q[front].time;
        }
        front = (front + 1) % size;
    }
    
    return 0;
}