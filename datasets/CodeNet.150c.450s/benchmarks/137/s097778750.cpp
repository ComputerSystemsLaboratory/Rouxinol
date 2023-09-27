#include<stdio.h>
#include<string.h>

#define M 1046527
#define L 14

char H[M][L];

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
  else return 0;
}

/* convert a string into an integer value */
long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < strlen(str); i++ ){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ return (key % M); }
int h2(int key){ return 1 + key %( M - 1 ); }

int find(char str[]){
	int key = getKey(str);
	int _h1 = h1(key);
	int _h2 = h2(key);
	int i= 0;
//	printf("== %s -> %d , h1 = %d, h2 = %d\n",str,key,_h1,_h2);
	while(i <= M){
		int h = (_h1 + i * _h2) % M;
		if(strlen(H[h])==0){
//			printf("H[%d] : no value\n",h);
			return -1;
		}else if(strcmp(H[h],str)==0){
//			printf("H[%d] = %s, tgt = %s (hit)\n",h,str,H[h]);
			return h;
		}else{
//			printf("H[%d] = %s, tgt = %s (collision)\n",h,str,H[h]);
		}
		i++;
	}
	return -1;
}

int insert(char str[]){
	int key = getKey(str);
	int _h1 = h1(key);
	int _h2 = h2(key);
	int i= 0;
//	printf("%s -> %d , h1 = %d, h2 = %d\n",str,key,_h1,_h2);
	while(i <= M){
		int h = (_h1 + i * _h2) % M;
		if(strlen(H[h])==0){
//			printf("H[%d] : %s (null) <= insert %s\n",h,H[h],str);
			strcpy(H[h],str);
			return 1;
		}
//		printf("H[%d] : %s (not null) <= could not insert %s\n",h,H[h],str);
		i++;
	}
	return -1;
}

int main(){
    int i, n, h;
    char str[L], com[9];
    for ( i = 0; i < M; i++ ) H[i][0] = '\0';

    scanf("%d", &n);

    for ( i = 0; i < n; i++ ){
	scanf("%s %s", com, str);

	if ( com[0] == 'i' ){
	    insert(str);
	} else {
	    if (find(str) >= 0){
		printf("yes\n");
	    } else {
		printf("no\n");
	    }
	}
    }

    return 0;
}

