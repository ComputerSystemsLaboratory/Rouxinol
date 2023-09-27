#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<iomanip>
#include <math.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    vector<string>a(10000000);
    vector<int>b(4);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]=="AC"){
            b[0]++;
        }
        else if(a[i]=="WA"){
            b[1]++;
        }
        else if(a[i]=="TLE"){
            b[2]++;
        }
        else{
            b[3]++;
        }
        
    }
    cout<<"AC x "<<b[0]<<endl;
    cout<<"WA x "<<b[1]<<endl;
    cout<<"TLE x "<<b[2]<<endl;
    cout<<"RE x "<<b[3]<<endl;
    
}
