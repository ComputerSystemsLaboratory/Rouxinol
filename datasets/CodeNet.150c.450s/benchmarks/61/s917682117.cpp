#include<iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <set>
#include <functional>

using namespace std;

int d[102];
int main()
{
    int n,a,b,c,x;
    while(true){
        cin>>n>>a>>b>>c>>x;
        int tot=0;
        if(n==0){
            break;
        }
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        for(int i=0;i<n;i++){
            if(i>0){
                tot++;
                x=(a*x+b)%c;
            }
            while(true){
                if(x==d[i]){
                    break;
                }
                x=(a*x+b)%c;
                //cout<<"x: "<<x<<endl;
                tot++;
                if(tot>10000){
                    tot=-1;
                    goto next;
                }
            }
        }
    next:cout<<tot<<endl;
    }
    return 0;
}