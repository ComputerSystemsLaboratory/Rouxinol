//কী পেয়েছো তুমি, কী চেয়েছিলে তুমি.? হিসেবটা তোমার বড়ই গড়মিল...!!//
#include <bits/stdc++.h>
using namespace std;
#define INF 0x3F3F3F3F
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    ll sum=1;
    for(int i=2;i<=n;i++){
        sum=sum*i;
    }
    cout<<sum<<endl;
}
/*
5 6
1 0
0 5
1 2
1 3
2 3
3 4
*/

