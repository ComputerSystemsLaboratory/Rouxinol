#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){

    while(1){
        std::vector<int> a;
        int a0,L;
        cin>>a0>>L;
        if(a0==0 && L==0) break;
        a.push_back(a0);

        std::vector<int> degit(L);

      int ptr=0,ans=-1;

        while(1){
            int t=a[ptr++];
             for(int i=1;i<=L;i++){
                if(t!=0){
                    degit[L-i]=t%10;
                    t/=10;
                }else{
                    degit[L-i]=0;
                }
            }

            int max=0,min=0;
            sort(degit.begin(),degit.end());
            for(int i=0;i<L;i++){
                min*=10;
                max*=10;
                min+=degit[i];
                max+=degit[L-i-1];
            }

            a.push_back(max-min);

            for(int i=0;i<a.size()-1;i++){
                if(a[a.size()-1]==a[i]){
                    cout<<i<<" "<<a[a.size()-1]<<" "<<a.size()-1-i<<endl;
                    ans=0;
                }                    
            }

            if(ans>=0) break;
        }
    }

}
