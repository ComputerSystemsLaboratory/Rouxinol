#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        vector<int>vec;
        for(int i=0;i<10;i++){
            int t;
            cin>>t;
            vec.push_back(t);
        }
        for(int i=0;i<1<<10;i++){
            vector<int>a,b;
            for(int j=0;j<10;j++){
                if((i>>j)&1){
                    a.push_back(vec[j]);
                }
                else{
                    b.push_back(vec[j]);
                }
            }
            int suc=1;
            if(a.size()>1)
                for(int j=0;j<a.size()-1;j++){
                    if(a[j+1]<a[j])
                        suc=0;
                }
            if(b.size()>1)
                for(int j=0;j<b.size()-1;j++){
                    if(b[j+1]<b[j])
                        suc=0;
                }
            if(suc==1){
                cout<<"YES"<<endl;
                goto next;
            }
            a.clear();
            b.clear();
        }
        cout<<"NO"<<endl;
    next:;
    }
    return 0;
}