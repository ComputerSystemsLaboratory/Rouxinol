#include <stdio.h>

#define BUF_SIZE 256

class stack10 {
private:
	int stack[10];
	int index;
public:
	stack10() {
		for (int i=0; i<10; i++)  stack[i]=0;
		index=0;
	}
	void PutTrain(int n) {
		if (index<10)  stack[index++] = n;
		else  printf("error: put\n");
	}
	int PopTrain() {
		if (index>0)  return stack[--index];
		else {
			printf("error: pop\n");
			return -1;
		}
	}
};

int main(void) {
	stack10 s;
	int i, j;
	int num;
	char buf[BUF_SIZE];
	
	while (fgets(buf, sizeof(buf), stdin) != NULL) {
		sscanf(buf, "%d", &num);
		
		if (num == 0)  printf("%d\n", s.PopTrain());
		else s.PutTrain(num);
	}
	
	return 0;
}