#include <iostream>
#include <utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int w, n;
    int lots[31];
    cin>>w>>n;
    for(int i=0; i<=w; i++) lots[i]=i;
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a;
        cin.ignore();
        cin>>b;
        swap(lots[a], lots[b]);
    }
    for(int i=1; i<=w; i++) cout<<lots[i]<<'\n';
    return 0;
}