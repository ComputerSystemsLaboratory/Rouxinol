#include<iostream>
#include<vector>

using namespace std ;

void lsb(vector<long long> *v, long long a)
{
    int i;
    
    for(i=0; i<60; i++)
    {
        if(a & 1LL<<i)
        {   
            if((*v)[i])
                a ^= (*v)[i];
            else
            {
                (*v)[i] = a;
                break;
            }
        }
    }
}

bool test(vector<long long> *v, long long a)
{
    int i;
    
    for(i=0; i<60; i++)
    {
        if(a & 1LL<<i)
        {   
            if((*v)[i])
                a ^= (*v)[i];
            else
                break;
        }
    }
    
    if(i == 60)
        return true;
    else
        return false;
}

int main(void)
{
    int i, j;
    int t, n;
    long long a[200];
    char s[201];
    vector<long long> v;
    bool ans;
    
    
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
            scanf("%lld", &a[i]);
        scanf("%s", s);
        
        v.clear();
        v.resize(60);
        ans = true;
            
        for(i=n-1; i>=0; i--)
        {
            if(s[i] == '0')
                lsb(&v, a[i]);
            else
                if(!test(&v, a[i]))
                {
                    ans = false;
                    break;
                }
        }
        
        printf("%d\n", !ans);
    }
    
    //system("pause");
    
    return 0;
}
