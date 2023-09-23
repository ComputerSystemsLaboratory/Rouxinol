#include<iostream>
using namespace std;
int main(){
    int n,i,k,j;
    char s;
    int a[4][13];
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            a[i][j]=0;
        }
    }
    cin >> n;
    for(i=0;i<n;i++){
        cin >> s >> k;
        if(s == 'S') a[0][k-1] =1;
        if(s == 'H') a[1][k-1] =1;
        if(s == 'C') a[2][k-1] =1;
        if(s == 'D') a[3][k-1] =1;
    }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(a[i][j]==0){
                if(i==0) cout << "S ";
                if(i==1) cout << "H ";
                if(i==2) cout << "C ";
                if(i==3) cout << "D ";
                cout << j+1 << endl;
            }
        }
    }
    return 0;
}
