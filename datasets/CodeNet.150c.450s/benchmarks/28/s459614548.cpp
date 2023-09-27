#include<iostream>
using namespace std;
int main(){
        int n,k,sum=0,max=0;
        cin>>n>>k;
        int *w = (int *)malloc(sizeof(int)*n);
        for(int i=0;i<n;i++) {
                cin>>w[i];
                sum += w[i];
                max = max>w[i]? max:w[i];
        }
        int low=max, hi=sum, p, ntruck;
        while(low<hi){
                p=(low+hi)/2;
                int i=0,load;
                ntruck=0;
                while(i<n){
                        load = 0;
                        while(i<n && load+w[i]<=p){
                                load += w[i];
                                i++;
                        }
                        ntruck++;
                }
                if(ntruck<=k) hi = p;
                else low = p+1;
        }
        cout<<low<<endl;

        free(w);
        return 0;
}
