#include <stdio.h>
#include <math.h>

using namespace std;

class STACK{
public:
	STACK(){
		index = 0;
	}

	void push(int data){
		array[index] = data;
		index++;
	}
	int pop(){
		index--;
		return array[index];
	}
	bool isEmpty(){
		return index == 0;
	}

private:
	int array[100];
	int index;
};

int main(){

	STACK stack;
	int tmp;
	while(scanf("%d",&tmp) != EOF){
		if(tmp == 0){
			printf("%d\n",stack.pop());
		}else{
			stack.push(tmp);
		}
	}
    return 0;
}