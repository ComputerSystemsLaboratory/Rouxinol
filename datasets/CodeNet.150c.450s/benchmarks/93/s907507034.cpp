#include <bits/stdc++.h>

using namespace std;

struct Card
{
    char c;
    int num;
    int t;
};

const int MAX = 100000;
Card cards[MAX];
    
int partition (Card v[], int p, int r)  
{  
    Card pivot = v[r];
    int i = (p - 1);
  
    for (int j = p; j < r; j++)  
        if (v[j].num <= pivot.num)
            swap(v[j], v[++i]);
   
    swap(v[++i], v[r]);
    return i;
}

void quicksort(Card v[], int p, int r)
{
    if(p < r)
    {
        int x = partition(v, p, r);
        
        quicksort(v, p, x-1);
        quicksort(v, x+1, r);
    }
}

int main() 
{
    int n, i;
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> cards[i].c >> cards[i].num;
        cards[i].t = i;
        
    }
    
    quicksort(cards, 0, n-1);
    bool cond = true;
    
    for(i = 0; i < n-1; i++)
    {
        if(cards[i].num == cards[i+1].num && cards[i].t > cards[i+1].t)
        {
            cond = false;
            break;
        }
    }
    
    if(cond)
        cout << "Stable\n";
    else
        cout << "Not stable\n";
    
    for(i = 0; i < n; i++)
        cout << cards[i].c << " " << cards[i].num << "\n";
    
    return 0;
}
