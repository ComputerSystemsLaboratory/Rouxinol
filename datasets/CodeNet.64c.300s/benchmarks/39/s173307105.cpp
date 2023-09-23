#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
    int a=0;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            for(int p=0;p<10;p++)
                for(int q=0;q<10;q++)
                    if(i+j+p+q==n)
                        a++;
    cout<<a<<endl;
    }
}