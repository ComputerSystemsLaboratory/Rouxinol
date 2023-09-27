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

        int count = 0;                                      //文字が一致した回数を数える。

        if( taro.size() > hanako.size() )
            for( int j = 0; j < hanako.size(); j++ )
            {

                if( taro[j] > hanako[j] )
                {
                    pointT += 3;
                    break;
                }
                else if( taro[j] == hanako[j] )
                {
                    count++;
                    if( count == hanako.size() )
                        pointT += 3;
                }
                else
                {
                    pointH += 3;
                    break;
                }
            }
        else if( taro.size() < hanako.size() )
            for( int j = 0; j < taro.size(); j++ )
            {
                if( taro[j] > hanako[j] )
                {
                    pointT += 3;
                    break;
                }
                else if( taro[j] == hanako[j] )
                {
                    count++;
                    if( count == taro.size() )
                        pointH += 3;
                }
                else
                {
                    pointH += 3;
                    break;
                }
            }
        else
            for( int j = 0; j < hanako.size(); j++ )
            {
                if( taro[j] > hanako[j] )
                {
                    pointT += 3;
                    break;
                }
                else if( taro[j] == hanako[j] )
                {
                    count++;
                    if( count == hanako.size() )
                    {
                        pointT += 1;
                        pointH += 1;
                    }
                }
                else
                {
                    pointH += 3;
                    break;
                }
            }
    }
        cout << pointT << " " << pointH << endl; 
    return 0;
}
