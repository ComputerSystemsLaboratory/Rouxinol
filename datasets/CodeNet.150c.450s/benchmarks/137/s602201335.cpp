#include<stdio.h>
#include<string.h>

const int L = 14;
const int M = 1046527;

char H[M][L]; /* Hash Table */

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
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

int h1(int key){ return key % M; }
int h2(int key){ return 1 + (key % (M-1)); }

int find(char str[]){
    long long key,i = 0;
    key = getKey(str);
    while(1)
    {
        int h = ( h1(key) + i*h2(key) ) % M;
        if(strcmp( H[h],str) == 0 ) return 1;
        else if(strlen(H[h]) == 0) return 0;
        i++; 
    }
    return 0;
}

void insert(char str[]){

    long long i = 0,key;
    key = getKey(str);
    while(1)
    {
        int h = ( h1(key) + i*h2(key) ) % M;
        if(strcmp(H[h],str) == 0 ) return ;
        else if(strlen(H[h]) == 0 )
        {
            strcpy(H[h],str);
            return ;
        }
        i++;
    }
    return ;
}

int main(){
    int i, n;
    char str[L], com[9];
    for ( i = 0; i < M; i++ ) H[i][0] = '\0';
        scanf("%d", &n);

    for ( i = 0; i < n; i++ ){
        scanf(" %s %s", com, str);

    if ( com[0] == 'i' ){
        insert(str);
    } else {
        if (find(str)){
        printf("yes\n");
        } else {
        printf("no\n");
        }
    }
    }

    return 0;
}
