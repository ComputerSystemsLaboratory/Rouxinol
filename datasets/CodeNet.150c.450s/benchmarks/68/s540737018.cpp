#include<stdio.h>

struct CELL
{
	int value;
	struct CELL *next;
};

int main()
{
	int n;
	struct CELL stu[1001];
	struct CELL header,*front,*back;
	int min,temp;

	while (1)
	{
		scanf("%d",&n);
		if (n == 0) break;
		header.next = NULL;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &stu[i].value);
			front = &header;
			back = header.next;
			while (back != NULL && stu[i].value > back->value)
			{
				front = back;
				back = back->next;
			}
			stu[i].next = back;
			front->next = &stu[i];
		}

		min = 1000001;
		front = header.next;
		back = front->next;
		for(int i=0;i<n-1;i++)
		{
			temp = back->value - front->value;
			if (temp < min)
				min = temp;
			front = back;
			back = back->next;
		}
		printf("%d\n",min);
	}
	return 0;
}
