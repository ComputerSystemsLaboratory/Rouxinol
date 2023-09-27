#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	int n, y, m, d, count;

	scanf("%d\n",&n);

	for(int i=0; i<n; i++){
		scanf("%d %d %d\n",&y, &m, &d);
		count=0;
		/* 翌年から記念日までの日数 */
		for(int j=y+1; j<1000; j++){
			if(j%3==0){ count += 200;}
			else{ count += 195;}
		}
		/* 翌月から年末までの日数 */
		for(int j=m+1; j<=10; j++){
			if((y%3!=0)&&(j%2==0)){ count += 19;}
			else{count += 20;}
		}
		/* 翌日から月末までの日数 */
		if((y%3!=0)&&(m%2==0)){ count += 19-d;}
		else{count += 20-d;}

		printf("%d\n",count+1); /* 当日分+1 */
	}
	return 0;
}