#include <iostream>
#include <array>
#include <iomanip>
#include <utility>
#include <string>
#include <map>
#include <algorithm> //using for swap()
using namespace std;
 
array<pair<char,int>,100001> A;

map<int,pair<string,int>> dat; 

int Partition(int p,int  r){
    int x = A[r].second;
    int i = p-1;
    for(int j=p;j<r;j++){
        if(A[j].second <= x){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

void quick(int p,int r){
    if(p<r){
        int q = Partition(p,r);
        quick(p,q-1);
        quick(q+1,r);
    }
}
 
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
	    char tmp1;
        int  tmp2;
        cin>>tmp1>>tmp2;
        A[i].first =tmp1;
	    A[i].second=tmp2;
        if(dat.count(tmp2)==0){
            string s="";
            s+=tmp1;
            dat.insert(map<int,pair<string,int>>::value_type
                    (tmp2,pair<string,int>(s,0)));
        }else{
            dat[tmp2].first=dat[tmp2].first+tmp1;
        }
    }
    quick(0,n-1);
    bool isStable=true;
    for(int i=0;i<n;i++){
         if(dat[A[i].second].first[dat[A[i].second].second]!=
             A[i].first){
             isStable=false;
         }
         dat[A[i].second].second++;
    }
    if(isStable){
        cout<<"Stable"<<endl;
    }else{
        cout<<"Not stable"<<endl;
    }
    for(int i=0;i<n;i++){
	   cout<<A[i].first<<" "<<A[i].second<<endl;
    }
    return 0;
}