#include<stdio.h>
#include<string.h>

char map[20][20]={0};
int number=1;
int h,w;

void debug(void) {
	for(int i=0;i<h;i++) { for(int j=0;j<w;j++) putchar(map[i][j]); putchar('\n'); }
}

void trace(int x,int y) {
	if(x-1 >= 0 && map[y][x-1]=='.') {
		map[y][x-1] = '@';
		trace(x-1,y);

		number++;
	}

	if(x+1 < w && map[y][x+1]=='.') {
		map[y][x+1] = '@';
		trace(x+1,y);
		number++;
	}
	if(y-1 >= 0 && map[y-1][x]=='.') {
		map[y-1][x] = '@';
		trace(x,y-1);
		number++;
	}

	if(y+1 < h && map[y+1][x]=='.') {
		map[y+1][x] = '@';
		trace(x,y+1);
		number++;
	}
}

int main(void) {
	char buf[21];

	int x,y;


	for(;;) {

		number=1;
		scanf("%d %d\n",&w,&h);

		if(w==0 || h==0) break;

		for(int i=0;i<h;i++) {
			fgets(buf,1024,stdin);

			memcpy(&map[i],buf,w);
		}


		for(int j=0;j<h;j++) {
			for(int i=0;i<w;i++) {
				if(map[j][i] == '@'){
					x=i;y=j;
				}
			}
		}


		trace(x,y);

		printf("%d\n",number);

	}

	//debug();

	return 0;
}