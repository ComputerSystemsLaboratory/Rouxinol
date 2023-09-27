#include<cstdio>
#include<bitset>
#include<cstring>
using namespace std;
int R,C,MAX;
bitset<10000> A[10];
void dfs(int cur)
{
    int sum1 = 0, sum2 = 0, sum = 0;
    if(cur == R){
        for(int i = 0; i < C; i++){
            for(int j = sum1 = sum2 = 0; j < R; j++){
                if(A[j][i] == 1) sum1++;
                else sum2++;
            }
            sum += max(sum1,sum2);
        }
        MAX = max(sum,MAX);
    }
    else{
        A[cur].flip();
        dfs(cur+1);
        A[cur].flip();
        dfs(cur+1);
    }
}
int main()
{
    int temp;
    while(scanf("%d%d",&R,&C) && R){
        for(int i = 0; i < R; i++)
            for(int j = 0; j < C; j++)
               scanf("%d",&temp),A[i][j] = temp;
        MAX = -1;
        dfs(0);
        printf("%d\n",MAX);
    }
    return 0;
}