#include<iostream>
using namespace std;

int main(){
        int n; //yomu card no kazu                                             

        int i,j,k;
        char m;
        int r;
        char mark[4];
        mark[0] = 'S';
        mark[1] = 'H';
        mark[2] = 'C';
        mark[3] = 'D';

        int rank[13];
        for( i = 0; i < 13; i++)
        {
                rank[i] = i+1;
        }
        int cnt[4][13] = {};

        cin >> n;
        for(k = 0; k<n; k++)
        {
                cin >> m >> r;
                for(i = 0; i < 4; i++){
                        if(mark[i]==m) cnt[i][r-1]=1;
                        }
        }
        for(i = 0; i<4; i++){
                for(j=0; j<13; j++){
                        if(cnt[i][j] == 0) cout << mark[i] << " " << rank[j] <\
< endl;
                }
        }

        return 0;
}