#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,p;
    while(cin>>n>>p,n){
        vector<int> a(n,0);
        int sum=p;
        for(int i=0;i<1e7;i++){

            if(sum!=0)
                a[i%n]++,sum--;
            else if(a[i%n]==p){
                cout<<i%n<<endl;
                break;
            }
            else{
                sum+=a[i%n];
                a[i%n]=0;
            }
        }

    }
    return 0;
}