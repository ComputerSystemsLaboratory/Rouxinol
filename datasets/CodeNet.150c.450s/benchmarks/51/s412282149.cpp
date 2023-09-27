#include<iostream>

using namespace std;

int main(){
    int n;
    int student[31]={0};
    for(int i=1;i<=30;i++){
        cin>>n;
        student[n]=1;
    }
    for(int i=1;i<=30;i++)
        if(!student[i])
           cout<<i<<endl;
    return 0;
}