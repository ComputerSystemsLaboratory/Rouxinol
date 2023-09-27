#include<bits/stdc++.h>
#define test int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back

typedef long long ll;
using namespace std;
int main()
{


            int n,k;
            cin>>n>>k;
            int a[n];
            for(int i=0;i<n;i++)
                cin>>a[i];
            for(int i=k,j=0;i<n;i++,j++)
                if(a[i]>a[j])
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;


return 0;

}
