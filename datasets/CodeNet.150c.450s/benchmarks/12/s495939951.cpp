#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <map>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int N;
    int data[251];
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>data[i];
    }
    for(int i=1;i<=N;i++){
        cout<<"node "<<i<<": key = "<<data[i];
        if(i/2){
            cout<<", parent key = "<<data[i/2];
        }
        if(i*2<=N){
            cout<<", left key = "<<data[i*2];
        }
        if(i*2+1<=N){
            cout<<", right key = "<<data[i*2+1];
        }
        cout<<", "<<endl;
    }
}