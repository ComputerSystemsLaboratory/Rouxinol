#include<iostream>

using namespace std;

int main(){

    while(1){
        int H;
        cin>> H;
        if(!H) break;

        int a[H][5];
        for(int i=0; i<H; i++){
            for(int j=0; j<5; j++){
                cin>> a[i][j];
            }
        }

        int f=1, s=0;
        while(f){
            f=0;
            int _s=0;
            for(int i=0; i<H; i++){
                for(int j=0; j+2<5; j++){
                    if(a[i][j]!=0&&a[i][j]==a[i][j+1]&&a[i][j+1]==a[i][j+2]){
                        f++;
                        int d=a[i][j];
                        for(; j<5&&a[i][j]==d; j++){
                            a[i][j]=0;
                            s+=d;
                        }
                    }
                }
            }
            for(int j=0; j<5; j++){
                for(int i=0; i+1<H; i++){
                    if(a[i+1][j]==0){
                        for(int k=i+1; k-1>=0; k--){
                            swap(a[k][j], a[k-1][j]);
                        }
                    }
                }
            }
        }

        cout<< s<< endl;
    }

    return 0;
}