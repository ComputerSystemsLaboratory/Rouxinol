#include <iostream>
using namespace std;
int W,H,c[50][50];
void island(int h, int w){
    c[h][w]=0;
    for(int i=h-1; i<h+2; i++){
        for(int j=w-1; j<w+2; j++){
            if(c[i][j]==1 && i>=0 && j>=0 && i<H && j<W) island(i,j);
        }
    }
}

int main(void){
    int count;
    while(1){
        cin>>W>>H;
        count=0;
        if(W==0 && H==0) break;
        for(int i=0; i<H; i++){
            for(int j=0; j<W; j++){
                cin>>c[i][j];
            }
        }
        for(int i=0; i<H; i++){
            for(int j=0; j<W; j++){
                if(c[i][j]==1){
                    count++;
                    island(i,j);
                }
            }
        }
        cout<<count<<endl;
    }
}

