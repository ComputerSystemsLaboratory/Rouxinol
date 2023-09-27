#include <iostream>
using namespace std;

int main(){

    int m,n_min,n_max,gap,temp_gap,n;
    int p[200];

    while(cin>>m>>n_min>>n_max,m||n_min||n_max){

        for(int i=0;i<m;i++){
            cin>>p[i];
        }

        gap=p[n_min-1]-p[n_min];

        for(int i=n_min;i<=n_max;i++){
            temp_gap=p[i-1]-p[i];
            if(temp_gap>=gap){
                gap=temp_gap;
                n=i;
            }
        }

        cout<<n<<endl;
    }

    

    return 0;

}
