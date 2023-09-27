#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
const int MAX = 100000;

int n;

    
int main()
{
    vector<int> ve;
    int t, n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &t);
        ve.push_back(t);
    }
    make_heap(ve.begin(),ve.end());
    for (vector<int>::iterator it = ve.begin() ; it != ve.end(); ++it)
        printf(" %d",*it);
   printf("\n");
    return 0;
}