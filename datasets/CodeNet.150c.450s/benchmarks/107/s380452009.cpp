# include<iostream>
# include<string>
# include<algorithm>
using namespace std;
# define N 1001
# define L 1001

int main(){
    string A[2][N];
    int cnt[2];
    for(int i=0; i<2; i++){
        int j=0;
        while((A[i][j] = cin.get()) != "\n"){
            j++;
            cnt[i]++;
        }
    }

    int B[L][L];
    for(int i=0; i<=cnt[0]; i++){
        string str;
        if(i!=0) str = A[0][i-1];
        for(int j=0; j<=cnt[1]; j++){
            if(i==0) B[i][j] = j;
            else if(j==0) B[i][j] = i;
            else if(A[1][j-1] != str) B[i][j] = min({B[i-1][j]+1, B[i][j-1]+1, B[i-1][j-1]+1});
            else B[i][j] = B[i-1][j-1];
        }
    }

    cout << B[cnt[0]][cnt[1]] << "\n";
    return 0;
}

