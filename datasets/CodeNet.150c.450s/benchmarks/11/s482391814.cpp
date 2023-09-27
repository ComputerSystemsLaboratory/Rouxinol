#include <iostream>

#include <vector>

#include <stdio.h>

using namespace std;

#define PI 3.141592653589




int main(){

    int n, mark, num;

    char t;

    int c[4][13]={0};

    cin>>n;

    for(int i=0;i<n;i++){

        cin>>t>>num;

        if(t=='S')mark=0;

        if(t=='H')mark=1;

        if(t=='C')mark=2;

        if(t=='D')mark=3;

        c[mark][num-1]=1;

    }

    for(int i=0;i<4;i++){

        for(int j=0;j<13;j++){

            if(c[i][j]==0){

                if(i==0)t='S';

                if(i==1)t='H';

                if(i==2)t='C';

                if(i==3)t='D';

                cout<<t<<" "<<j+1<<endl;

            }

        }

    }

    return 0;

}