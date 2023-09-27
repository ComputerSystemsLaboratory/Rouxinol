#include <stdio.h>
#include <algorithm>
#include <iostream>
 
using namespace std;
 
class Heap{
public:
    Heap(){
        array = new int[2000000];
        n = 0;
    }
    void insert(int data){
        array[n] = data;
        int tmp = n;
        while(tmp != 0 && array[tmp] > array[(tmp-1)/2]){
            std::swap(array[tmp], array[(tmp-1)/2]);
            tmp = (tmp-1)/2;
        }
        n++;
    }
void max_heapify(int* array, int start, int end)
{
	int dad = start;
	int son = dad * 2 + 1;

	while (son <= end)
	{
		if (array[son] < array[son+1] && son+1 <= end)
			son++;
		if (array[dad] > array[son])
			return;
		else
		{
			swap(array[son], array[dad]);
			dad = son;
			son = dad * 2 + 1;
		}
		
	}
}

int heap_sort(int* array, int len)
{
	int i;
        swap(array[0],array[len-1]);
        max_heapify(array,0,len-2);
        return array[len-1];
}
    int extract(){
    int ret = heap_sort(array,n);
    n--;
    return ret;
    }
 
private:
    int* array;
    int n;
};
 
int main(){
 
    int insert_data;
    char buf[22];
    Heap heap;
 
    while(true){
        fgets(buf,22,stdin);
        if(buf[2] == 'd') break;
        if(buf[0] == 'i'){
            insert_data = 0;
            for(int i = 0; buf[i] != '\0';i++){
                if(buf[i] >= '0' && buf[i] <= '9'){
                    insert_data = 10*insert_data + (buf[i] - '0');
                }
            }
            heap.insert(insert_data);
        }else{
            printf("%d\n",heap.extract());
        }
    }
}
