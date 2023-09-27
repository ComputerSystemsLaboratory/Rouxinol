#include<stdio.h>

int main()
{
	int StrLen, LinkNum;
	int EndNum[50] = {0};
	int link[50][2];
	scanf("%d %d", &StrLen, &LinkNum);
	for (int i = 0; i < LinkNum; i++)
		scanf("%d,%d", &link[i][0], &link[i][1]);
	for (int i = 1; i <= StrLen; i++)
	{
		int posi = i;
		for (int j = 0; j < LinkNum; j++)
		{			
			if (link[j][0] == posi)
				posi = link[j][1];
			else if (link[j][1] == posi)
				posi = link[j][0];				
		}
		EndNum[posi-1] = i;
	}
	for (int i = 0; i < StrLen; i++)
		printf("%d\n", EndNum[i]);
	return 0;
}