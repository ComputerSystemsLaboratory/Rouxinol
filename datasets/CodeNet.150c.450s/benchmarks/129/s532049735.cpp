#include <iostream>
using namespace std;
int main(void){

    long long score[1000][1000],r,c,n;
    cin>>r>>c;

    for(int i=0;i<r;i++){ //縦
        for(int j=0;j<c;j++){ //横
            cin >> n;
            score[i][j] = n;
            score[i][c]+=n;
            cout<<score[i][j]<<" ";
        }
        cout<<score[i][c]<<endl;
    }

    for(int j=0;j<c;j++){ //横
    	for(int i=0;i<r;i++){ //縦
    		score[r][j]+=score[i][j];
    	}cout<<score[r][j]<<" ";
        score[r][c] += score[r][j];
    }cout<<score[r][c]<<endl;
    return 0;
}
