#include <iostream>
#include <cstdio>
using namespace std;
void search(char farm[102][102], int x, int y);
int main(){
    int h,w;
    char farm[102][102];
    while (true) {
        cin>>h>>w;
        if (h==0&&w==0) break;
        for (int i=0; i<h+2; i++) {
            for (int j=0; j<w+2; j++) {
                if(i==0||i==h+1||j==0||j==w+1){
                    farm[i][j]='.';
                }
                else{
                    cin>>farm[i][j];
                }
            }
        }
        
        int ans=0;
        for (int i=1; i<h+1; i++) {
            for (int j=1; j<w+1; j++) {
                if(farm[i][j]!='.'){
                    ans++;
                    search(farm,i,j);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

void search(char farm[102][102], int y, int x){
    char tmp=farm[y][x];
    farm[y][x]='.';
    if (farm[y][x+1]==tmp) {
        search(farm,y,x+1);
    }
    if (farm[y][x-1]==tmp) {
         search(farm,y,x-1);
    }

    if (farm[y+1][x]==tmp) {
         search(farm,y+1,x);
    }

    if (farm[y-1][x]==tmp) {
         search(farm,y-1,x);
    }

}