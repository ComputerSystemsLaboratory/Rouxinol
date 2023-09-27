#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

typedef pair<int,int> cor_t;

int board[5][10];

int main(){
    int H;
    while(scanf("%d",&H)&&H!=0){
        for(int j=H-1;j>=0;j--)
            for(int i=0;i<5;i++) {
                int temp;
                scanf("%d",&temp);
                board[i][j]=temp;
            }

        int score=0;
        bool has_puzzles=false;
        do{
            has_puzzles=false;
            for(int row=0;row<H;row++){
                for(int i=0;i<=2;i++){
                    if (board[i][row]==0) continue;

                    int len=1;
                    for(int j=i+1;j<5&&board[j][row]==board[i][row];j++) len++;

                    if (len>=3){
                        for(int k=i;k<i+len;k++) {
                            score+=board[k][row] ;
                            board[k][row]=0;
                        }
                        has_puzzles=true;
                        break;
                    }
                }
            }

            for(int i=0;i<5;i++)
                for(int row=H-1;row>0;row--)
                    for(int j=0;j<row;j++)
                        if (board[i][j]==0) swap(board[i][j],board[i][j+1]);


            // puts("demo");
            // for(int i=H-1;i>=0;i--){
            //     for(int j=0;j<5;j++){
            //         printf("%d ",board[j][i]);
            //     }
            //     putchar('\n');
            // }
                    
        }while(has_puzzles);

        printf("%d\n",score);

    }

    return 0;
}
