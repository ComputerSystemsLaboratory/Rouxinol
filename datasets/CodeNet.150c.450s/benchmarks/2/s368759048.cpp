#include <bits/stdc++.h>

using namespace std;

int partition (int v[], int p, int r)  
{  
    int pivot = v[r];
    int i = (p - 1);
    int temp;
  
    for (int j = p; j < r; j++)  
    {  
        if (v[j] <= pivot)  
        {  
            i++;
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }  
    }  
    temp = v[i+1];
    v[i+1] = v[r];
    v[r] = temp;
    return (i + 1);  
}

int main() 
{
    int n, i, x;
    scanf("%d", &n);
    
    int v[n];
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    
    x = partition(v, 0, n-1);
    
    for(i = 0; i < n-1; i++)
    {
        if(i == x)
            printf("[%d] ", v[i]);
        else
            printf("%d ", v[i]);
    }
    if(i == x)
        printf("[%d]\n", v[i]);
    else
        printf("%d\n", v[i]);
    
    return 0;
}
