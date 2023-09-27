#include<iostream>
using namespace std;

int n;
int ad_list[101][101];

void print(){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout << ad_list[i][j];
            if(j==n)cout << "\n";
            else cout << " ";
        }
    }
}

int main(){
    cin  >> n;
    for(int i=1;i<n+1; i++){
        for(int j=1; j<n+1; j++){
            ad_list[i][j]=0;
        }
    }
    int v,k, in;
    for(int i=1; i<n+1; i++){
        cin >> v >> k;
        for (int j=0;j<k;j++){
            cin >> in;
            ad_list[v][in]=1;
        }
    }
    print();
}
