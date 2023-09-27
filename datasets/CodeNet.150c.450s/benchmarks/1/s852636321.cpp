#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int rec[100001];
int len[100001];

int main(){



    int con, ptr = 0, sum = 0;
    scanf("%d", &con);
    while(con--){
        scanf("%d", &rec[ptr]);
        //len[ptr] = 1;
        ptr++;
    }


    vector<int> v;
    v.push_back(rec[0]);

    for (int i = 1; i < ptr; ++i)
    {
        int n = rec[i];

        if (n > v.back())
            v.push_back(n);
        else{
            //printf("      %d\n", *lower_bound(v.begin(), v.end(), n));
            *lower_bound(v.begin(), v.end(), n) = n;
        }
        //for(int g = 0; g < v.size(); ++g)printf("%d ", v[g]);
        //printf("\n");

    }

    printf("%d\n" , v.size());



return 0;
}