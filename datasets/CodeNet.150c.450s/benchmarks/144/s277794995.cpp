#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int n,m,l;
    cin>>n>>m>>l;
     long long ue[101][101] = {};
     long long sit[101][101] = {};
     long long kam[101][101] = {};
     for(int i = 0;i<n;i++){
         for(int j = 0;j<m;j++){
             cin>>ue[i][j];
         }
     }
     for(int i = 0;i<m;i++){
         for(int j = 0;j<l;j++){
             cin>>sit[i][j];
         }
     }
     for(int i = 0;i<n;i++){
         for(int j = 0;j<l;j++){
             for(int k = 0;k<m;k++){
                 kam[i][j] += ue[i][k]*sit[k][j];
             }
         }
     }
     for(int i = 0;i<n;i++){
         for(int j = 0;j<l;j++){
             cout<<kam[i][j];if(j !=l -1)cout<<" ";
         }cout<<endl;
     }
     return 0;
}

