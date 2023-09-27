#include<iostream>

using namespace std;
typedef pair<int, int> pii;

int fld[21][21];
int dx[]={0, 1, 0, -1};
int dy[]={1, 0, -1, 0};

int md(char c){
    if(c=='N') return 0;
    if(c=='E') return 1;
    if(c=='S') return 2;
    else return 3;
}

int main(){

    while(1){
        int N;
        cin>> N;
        if(N==0) break;
        for(int i=0; i<=20; i++){
            for(int j=0; j<=20; j++){
                fld[i][j]=0;
            }
        }
        for(int i=0; i<N; i++){
            int x, y;
            cin>> x>> y;
            fld[y][x]=1;
        }
        int X, Y;
        X=Y=10;
        int cnt=0;
        int M;
        cin>> M;
        for(int i=0; i<M; i++){
            char d; int l;
            cin>> d>> l;
            int j=md(d);
            for(int k=0; k<l; k++){
                X+=dx[j];
                Y+=dy[j];
                if(fld[Y][X]==1) cnt++;
                fld[Y][X]=0;
            }
        }

        cout<< (cnt==N? "Yes": "No")<< endl;
    }

    return 0;
}