#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a[101];
    memset(a,0,sizeof(a));
    vector<int>vec;
    int in;
    while(cin>>in){
        a[in]++;
    }
    int m=0;
    for(int i=0;i<101;i++){
        if(a[i]>m){
            m=a[i];
            vec.clear();
            vec.push_back(i);
        }
        else if(a[i]==m){
            vec.push_back(i);
        }
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}