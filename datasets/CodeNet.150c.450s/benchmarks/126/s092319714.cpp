#include<cstdio>
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=0 && b!=0){
        int board[16][16]={{0}};
        int m;
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            int c,d;
            scanf("%d %d",&c,&d);
            board[c-1][d-1]=-1;
        }
        board[0][0]=1;

        for(int i=1;i<a;i++){
            if(board[i][0]!=-1){
                board[i][0]=board[i-1][0];
            }
            else{
                board[i][0]=0;
            }
            for(int j=1;j<b;j++){
                if(board[0][j]!=-1){
                    board[0][j]=board[0][j-1];
                }
                else{
                    board[0][j]=0;
                }
                if(board[i][j]==-1){
                    board[i][j]=0;
                }
                else{
                    board[i][j]=board[i-1][j]+board[i][j-1];
                }
            }
        }
        printf("%d\n",board[a-1][b-1]);
        scanf("%d %d",&a,&b);
    }
    return 0;
}