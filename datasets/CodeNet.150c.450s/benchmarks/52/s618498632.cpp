#include<iostream>
using namespace std;
int main()
{
    int train[10]={0},n,count=0,outTrain[10],trainCount=0;
    while(cin >> n){
        if(cin.eof())break;
        if(n){
            for(int i=count ; i!=0 ; i--){
                train[i]=train[i-1];
            }
            train[0]=n;
            count++;
        }
        else{
            outTrain[trainCount]=train[0];
            cout << train[0] << '\n';
            for(int i=0 ; i<count ; i++){
                train[i]=train[i+1];
            }
            train[count]=0;
            count--;
            trainCount++;
        }
    }
    return 0;
}