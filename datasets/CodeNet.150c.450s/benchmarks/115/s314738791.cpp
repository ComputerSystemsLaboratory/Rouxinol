#include<iostream>
#include<cstring>
using namespace std;
int L[1001][1001];
int getc(int i,int j){
    if(i>=0&&j>=0)
        return L[i][j];
    else
        return 0;
}
int main(){
    int N;
    string X,Y;
    cin >> N;
    for(int k=0;k<N;++k){
        cin>>X>>Y;
        for(int i=0;i<X.length();++i){
            for(int j=0;j<Y.length();++j){
                if(X[i]==Y[j]){
                    L[i][j]=getc(i-1,j-1)+1;
                }
                else{
                    L[i][j]=max(getc(i-1,j),getc(i,j-1));
                }
            }
        }
        cout <<L[X.length()-1][Y.length()-1]<< endl;
    }
    return 0;
}