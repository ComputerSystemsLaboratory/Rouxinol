#include <iostream>
using namespace std;
int main(){
        int N;
        cin >> N;
        int lt[200][200]={0};
        for( int i=0 ; i<N ; i++ ){
                int x,y,n;
                cin >> x >> n;
                for(int l=0 ; l<n ; l++ ){
                        cin >> y;
                        lt[x-1][y-1]=1;
                }
        }
        for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                        cout<<lt[i][j];
                        if(j!=N-1)cout<<" ";
                }
                cout<<endl;
        }
        return 0;
}
