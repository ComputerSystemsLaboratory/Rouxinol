#include <stdio.h>
#include <math.h>
#define MAX 1000000
//エラトステネスの篩
int main(){
    int mem[100000] = {2};
    bool list[MAX]={true,true};
    int set = 2,m = 1,j,x;
    while( set < sqrt( MAX )){
    	for( int i = set;i < MAX;i++ ) if( i % set == 0 ) list[i] = true;
    	for( int i = set;i < MAX;i++ ) if( list[i] == false ){ set = i,mem[m++] = i,list[i] = true;break; }
    }
    for( int i = set;i < MAX;i++ )if( list[i] == false ) mem[m++] = i;
    while( scanf( "%d",&x ) != EOF ){
        for( j = 0;mem[j] <= x && j < m;j++ );
        printf( "%d\n",j );
    }
    return 0;
}