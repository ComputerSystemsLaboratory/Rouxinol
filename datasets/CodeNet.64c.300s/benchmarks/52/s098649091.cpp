#include <iostream>
using namespace std;
int c;

void search(int last, int s, int n)
{
    if(n==0){
        if(s==0) c++;
        return;
    }
    if(n==1){
        if(last<s&&s<10) c++;
        return;
    }
    --n;
    for(int i=last+1; i<10; i++){
        search(i, s-i, n);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(true){
        int n, s;
        cin>>n>>s;
        if(n==0&&s==0) break;
        c=0;
        for(int i=0; i<10; i++){
            search(i, s-i, n-1);
        }
        cout<<c<<'\n';
    }
    return 0;
}