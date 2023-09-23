#include <iostream>
#include <algorithm>
using namespace std;

int main(){
        int N;
        cin >> N;
        int a[110][110]={{0}};
        for(int i=0; i<N; i++){
                int v,n;
                cin >> v;
                cin >> n;
                for(int j=0; j<n; j++){
                        int V;
                        cin >> V;
                        a[v-1][V-1]=1;
                }
        }
        for(int i=0; i<N; i++){
                for(int j=0; j<N; j++){
                        cout << a[i][j];
                        if(j<N-1)cout << " ";
                }
                cout << endl;
        }
}