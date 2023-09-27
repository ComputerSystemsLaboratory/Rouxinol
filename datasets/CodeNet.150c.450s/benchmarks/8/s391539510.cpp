#include<iostream>
#include<string>
using namespace std;

int main() 
{
    int n;
    int pointT = 0, pointH = 0;
    string taro, hanako;


    cin >> n;

    for( int i = 0; i < n; i++ )
    {
        cin >> taro >> hanako;

        if( taro > hanako )
            pointT += 3;

        else if ( taro < hanako )
            pointH += 3;

        else
        {
            pointT += 1;
            pointH += 1;
        }
    }

    cout << pointT << " " << pointH << endl; 

    return 0;
}
