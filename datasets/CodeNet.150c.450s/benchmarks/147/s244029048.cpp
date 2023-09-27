#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define inf 100000000000000000
#define mod 1000000007
#define MAX 100005
#define pb push_back
#define vit vector<int>::iterator
typedef pair<int,int> pii;
map<int,int>M;
vector<int> V[MAX];
int A[MAX];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int a=1;a<=100;a++){
        for(int b=1;b<=100;b++){
            for(int c=1;c<=150;c++){
                int sum=a*a+b*b+c*c+a*b+b*c+c*a;
                if(sum<=n)
                    A[sum]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<A[i]<<endl;
    return 0;
}
