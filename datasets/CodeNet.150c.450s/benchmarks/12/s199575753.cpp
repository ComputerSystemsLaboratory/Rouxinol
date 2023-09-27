#include <stdio.h>
#define NIL 2000000001
#define NUM 10000000

int heap[NUM];

void output(int num){
    printf("node %d: key = %d, ", num, heap[num]);
    if(num != 1){
        printf("parent key = %d, ", heap[num / 2]);
    }
    if(heap[num * 2] != NIL){
        printf("left key = %d, ", heap[num * 2]);
    }
    if(heap[num * 2 + 1] != NIL){
        printf("right key = %d, ", heap[num * 2 + 1]);
    }
    printf("\n");
}

int main(void){
    for(int i = 0; i < NUM; i++){
        heap[i] = NIL;
    }

    int H;
    scanf("%d", &H);

    int index = 1;

    for(int i = 0; i < H; i++){
        scanf("%d", &heap[i + 1]);
    }

    for(int i = 0; i < H; i++){
        output(i + 1);
    }

}

