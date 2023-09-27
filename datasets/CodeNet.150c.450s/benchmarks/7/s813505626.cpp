#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> mountain(10);
    for (int i = 0 ; i < 10 ; i++)
        scanf("%d",&mountain[i]);
    sort(mountain.rbegin(),mountain.rend());
    printf("%d\n%d\n%d\n",mountain[0],mountain[1],mountain[2]);
}