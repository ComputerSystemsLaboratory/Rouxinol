#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n,m,l=0,i;
    string id;
    string c;
    vector<string>vec;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>id;
        vec.push_back(id);
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>c;
        if(find(vec.begin(), vec.end(), c)!=vec.end()){
            cout<<((++l%2)==1?"Opened by ":"Closed by ")<<c<<endl;
        }
        else
            cout<<"Unknown "<<c<<endl;
    }
    return 0;
}