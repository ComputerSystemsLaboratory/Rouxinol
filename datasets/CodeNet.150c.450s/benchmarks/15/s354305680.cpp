#include<iostream>
#include<vector>

using namespace std;
int Check(int ni,vector<int> Li,int inh){
    Li.resize(ni+1);
    Li[ni]=inh;
    int  ih=0;
    while (Li[ih]!=inh){
        ih++;}
    if(ih==ni){
        return -1;
    }else{
        return ih;
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> L(n);

    int count=0;
    for (int i=0;i<n;++i){
        cin>>L[i];

    }
    int q;
    cin>>q;
    while(q>0){
        q--;
        int l;
        cin>>l;

        if(Check(n,L,l)!=-1){

           ++count;
        }else{

        }
    }

    cout<< count<<endl;
}
