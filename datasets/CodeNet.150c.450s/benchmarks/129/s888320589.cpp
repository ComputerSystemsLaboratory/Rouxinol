#include <iostream>
using namespace std;
int main(void){
    int r,c;
    cin>>r>>c;
    int vec[r+1][c+1];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cin>>vec[i][j];
        }
    }
    for(int i=0;i<=r-1;i++){
        vec[i][c]=0;
    }
    for(int j=0;j<=c-1;j++){
        vec[r][j]=0;
    }
    vec[r][c]=0;
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            vec[i][c]+=vec[i][j];
            vec[r][j]+=vec[i][j];
        }
        vec[r][c]+=vec[i][c];
    }
    for(int i=0;i<=r;i++){
        for(int j=0;j<=c-1;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<vec[i][c]<<endl;
    }
    return 0;
}