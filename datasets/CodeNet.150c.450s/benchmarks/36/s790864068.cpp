#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    long long int a , b , c , counter;

    while(cin >> a){

        b=600;
        c=0;

        while(true){

            b-=a;

            if(b==0)break;

            c+= b*b;

            //b-=a;
        }

        cout << c*a << endl;
    }

    return 0;
}