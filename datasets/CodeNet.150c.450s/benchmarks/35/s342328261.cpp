#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

#define MAX 1000000000
#define MIN -10000000000

#define ll long long

using namespace std;
int main() {

        ll n,k,i,j,temp,last,maxx;
        do {
            cin>>n;
            if(n==0)break;
            vector<ll> a(n);
            vector<ll> s(n+1);
            for(i=0;i<n;i++){
                cin>>a[i];
            }
            s[0]=0;
            for(i=0;i<n;i++){
                s[i+1]=s[i]+a[i];
            }
            maxx=-100000;
            for(i=0;i<n;i++){
                for(j=i+1;j<=n;j++){
                    maxx=max(s[j]-s[i],maxx);
                }
            }
            cout << maxx << endl;



        }while(n!=0);

//cout << "aaa" << endl;

    return 0;
}
