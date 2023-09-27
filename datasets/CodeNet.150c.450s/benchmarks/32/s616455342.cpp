#include <iostream>
using namespace std;

int main(){
        int m,n_min,n_max,gap,gap_max,i,ans;
        int a[10000];

        while(1) {
                ans=0;
                gap_max=0;
                cin>>m>>n_min>>n_max;
                if(m==0&&n_min==0&&n_max==0) {
                        break;
                }

                for(i=0; i<m; i++) {
                        cin>>a[i];
                }

                for(i=n_min-1; i<n_max; i++) {
                        gap=a[i]-a[i+1];
                        if(gap>=gap_max) {
                                gap_max=gap;
                                ans=i+1;
                        }
                }

                cout<<ans<<endl;
        }
}

