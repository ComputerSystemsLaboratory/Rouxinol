#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <set>
#include <unordered_set>
#include <vector>
#include<valarray>
#include<map>

#include <utility>

#include <deque>
#include <queue>


using namespace std;
long long a[10001];
int main()
{
long long n;
cin>>n;
long long x,y,z;
long long counter;
set<long long >numbers;
for(int i=1;i<=n;i++)
{

    numbers.insert(i);
}


    for(x=1;x<=98;x++)
    {

        for (y = 1; y <= 98; y++)
        {
            for (z = 1; z <= 98; z++)
            {
                long long c=(x * x) + (y * y) + (z * z) + (x * y) + (z * x) + (z * y);

                auto it=numbers.find(c);
                if(it!=numbers.end())
                {
                    a[c]++;
                }
            }
        }

    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }



    return 0;
}