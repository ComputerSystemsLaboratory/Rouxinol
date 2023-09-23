#include <iostream>
#include <queue>
#include <cctype>
#include <stdio.h>
#include <map>
#include <string.h>
#include <algorithm>

using namespace std;

int main(int argc, char const* argv[])
{
    int money;
    while( cin >> money, money ){

    int coin_count=0;
    int rest =1000;

    rest -= money;
    int tmp =0;

    coin_count += rest /500;
    rest = rest % 500;

    coin_count += rest /100;
    rest = rest % 100;

    coin_count += rest /50;
    rest = rest % 50;

    coin_count += rest /10;
    rest = rest % 10;

    coin_count += rest /5;
    rest = rest % 5;

    coin_count += rest /1;
    cout << coin_count << endl;
    }
    return 0;
}