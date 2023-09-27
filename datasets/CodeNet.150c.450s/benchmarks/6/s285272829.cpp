#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
        int x, y, z;

        scanf("%d %d %d", &x, &y, &z);
        
        if( x<y && y<z ){ cout << "Yes\n"; }
        else{ cout << "No\n"; }

        return 0;
}