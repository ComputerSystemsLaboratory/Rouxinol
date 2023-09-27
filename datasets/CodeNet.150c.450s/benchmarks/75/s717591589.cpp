#include <bits/stdc++.h>

#define NIL -1
#define INF 1000000001

using namespace std;


void maxHeapify(int i, vector<int> &heap_array){
    int H = (int)heap_array.size(); // H+1
    int left = 2*i;
    int right= 2*i+1;
    int largest;
    if(left < H && heap_array[left] > heap_array[i]) largest = left;
    else largest = i;
    if(right< H && heap_array[right]> heap_array[largest]) largest = right;

    if(largest != i){
        swap(heap_array[largest],heap_array[i]);
        maxHeapify(largest,heap_array);
    } 
}

void buildMaxHeap(vector<int> &heap_array){
    int H = (int)heap_array.size();
    for(int i = H/2;i > 0;i--){
        maxHeapify(i,heap_array);
    }
}

int main(){
    int size_of_H;
    int temp;
    scanf("%d",&size_of_H);
    vector<int> heap_array(size_of_H+1,0);
    
    for(int i = 1;i <= size_of_H;i++){
        scanf("%d",&temp);    
        heap_array[i]= temp;
    }
    
    buildMaxHeap(heap_array);
    for(int i = 1;i <= size_of_H;i++){
        printf(" %d",heap_array[i]);
    }
    printf("\n");
    return 0;
}
