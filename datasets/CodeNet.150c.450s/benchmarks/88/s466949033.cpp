#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,int> pa;
int sq(int a,int b){
    return a*a+b*b;
}
bool com(pa p1,pa p2){
    int a=p1.first,b=p1.second,c=p2.first,d=p2.second;
    return sq(a,b)==sq(c,d)?a<c:sq(a,b)<sq(c,d);
}
int main(){
    int h,w;
    vector<pair<int,int> >v;
    for(int i=1;i<160;i++)
        for(int j=i+1;j<160;j++)
            v.push_back(make_pair(i, j));
    sort(v.begin(),v.end(),com);
    while(cin>>h>>w,h){
        pa p=make_pair(h,w);
        for(int m=0;m<v.size();m++){
            if(com(p,v[m])){
                cout<<v[m].first<<" "<<v[m].second<<endl;
                break;
            }
        }
    }
}