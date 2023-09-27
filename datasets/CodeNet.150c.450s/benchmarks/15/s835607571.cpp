/* C++ */
// ?????¢????´¢???P121

#include <stdio.h>


int main(void)
{
	int n = 0; int S[10001];		// ????´¢????±?
	int q = 0; int T;			// ????´¢??????
	int C = 0;						// ?????´??°

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &S[i]);
//		printf("%d\n", S[i] );
	}

	scanf("%d", &q);

//	printf("q=%d\n", q);

	for (int i = 0; i < q; i++)
	{
//		printf("----\n");
		scanf("%d", &T);
//		printf("T=%d\n", T);
		for(int j = 0; j < n; j++){
//			printf("%d", j);
			if(S[j] == T){
				C++;
				break;
			}
		}
	}

	printf("%d\n", C );

	return 0;
}