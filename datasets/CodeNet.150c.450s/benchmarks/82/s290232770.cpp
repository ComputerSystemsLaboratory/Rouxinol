#include<bits/stdc++.h>
using namespace std;
int ans(int x,int y,int a[7]){
    if((a[4]==x&&a[2]==y)||(a[2]==x&&a[3]==y)||(a[3]==x&&a[5]==y)||(a[5]==x&&a[4]==y)) return a[1];
    if((a[1]==x&&a[4]==y)||(a[4]==x&&a[6]==y)||(a[6]==x&&a[3]==y)||(a[3]==x&&a[1]==y)) return a[2];
    if((a[1]==x&&a[2]==y)||(a[2]==x&&a[6]==y)||(a[6]==x&&a[5]==y)||(a[5]==x&&a[1]==y)) return a[3];
    if((a[2]==x&&a[1]==y)||(a[1]==x&&a[5]==y)||(a[5]==x&&a[6]==y)||(a[6]==x&&a[2]==y)) return a[4];
    if((a[1]==x&&a[3]==y)||(a[3]==x&&a[6]==y)||(a[6]==x&&a[4]==y)||(a[4]==x&&a[1]==y)) return a[5];
    if((a[2]==x&&a[4]==y)||(a[4]==x&&a[5]==y)||(a[5]==x&&a[3]==y)||(a[3]==x&&a[2]==y)) return a[6];
}
int main(){
    int a[7];
    for(int i=1;i<7;i++){
        cin>>a[i];
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        cout<<ans(x,y,a)<<endl;
    }
}
