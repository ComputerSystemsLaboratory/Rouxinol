#include <stdio.h>

using namespace std;

struct Node{
	Node(){
		left_child = right_child = parent = -1;
	}
	int left_child,right_child,parent;
};

class Heap{
public:
	Heap(int H){
		index = 0;
		array = new long long[H];
		struct_array = new Node[H];
	}
	~Heap(){
		delete[] array;
	}
	void push(long long data){
		array[index] = data;
		if(index != 0){
			if(index%2 == 0){
				struct_array[(index-1)/2].right_child = index;
				struct_array[index].parent = (index-1)/2;
			}else{
				struct_array[index/2].left_child = index;
				struct_array[index].parent = index/2;
			}
		}
		index++;
	}

	void print(){
		for(int i = 0; i < index; i++){
			printf("node %d: key = %d, ",i+1,array[i]);
			if(struct_array[i].parent != -1) printf("parent key = %lld, ",array[struct_array[i].parent]);
			if(struct_array[i].left_child != -1) printf("left key = %lld, ",array[struct_array[i].left_child]);
			if(struct_array[i].right_child != -1) printf("right key = %lld, ",array[struct_array[i].right_child]);
			printf("\n");
		}
	}

private:
	long long* array;
	Node* struct_array;
	int index;
};

int main(){
	int H;
	long long tmp;
	scanf("%d",&H);
	Heap heap(H);

	for(int i = 0; i < H; i++){
		scanf("%lld",&tmp);
		heap.push(tmp);
	}
	heap.print();
}