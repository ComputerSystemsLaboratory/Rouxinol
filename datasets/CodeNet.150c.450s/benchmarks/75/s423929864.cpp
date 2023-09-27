#include <stdio.h>

int Array[500000];
int H;

void maxHeapify(int i){
    int left = 2*(i+1)-1;
    int right = 2*(i+1);
    int largest;
    if ( left <= H && Array[left] > Array[i])
        largest = left;
    else 
        largest = i;
    if ( right <= H && Array[right] > Array[largest])
        largest = right;

    if ( largest != i ){
        int temp = Array[i];
        Array[i] = Array[largest];
        Array[largest] = temp;
        maxHeapify(largest);
    }
}

int main(){
    scanf("%d\n",&H);
    for ( int ix = 0 ; ix < H ; ix++){
        if ( ix == H-1) scanf("%d\n",&Array[ix]);
        else scanf("%d ",&Array[ix]);
    }
    for ( int ix = (H/2)-1 ; ix >= 0 ; ix--)
        maxHeapify(ix);
    
    for ( int ix = 0 ; ix < H ; ix++)
        printf(" %d",Array[ix]);
    printf("\n");
    
    return 0;
}
