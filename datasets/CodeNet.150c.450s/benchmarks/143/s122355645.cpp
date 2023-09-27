#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
vector<int> a(n);
vector<int> anum(100000);
unsigned long long int ans=0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    ans+=a[i];
    anum[a[i]]++;
}
int q;
cin>>q;
vector<int> b(q);
vector<int> c(q);

for (int i = 0; i < q; i++)
{
    cin>>b[i]>>c[i];
}

for (int i = 0; i < q; i++)
{
  ans+=anum[b[i]]*(c[i]-b[i]);

anum[c[i]]+=anum[b[i]];
anum[b[i]]=0;
cout<<ans<<endl;

}



}