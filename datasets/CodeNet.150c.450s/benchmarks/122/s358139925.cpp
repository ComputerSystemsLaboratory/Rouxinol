#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

#define reps(i, s, n) for(int i=(s); i<=(n); ++i)
#define inside(i, H) ( (i) <= (H) )
using namespace std;

int H, A[2000010];
void maxHeapify(int i);

void increaseKey(int i, int key)
{
   if( key < A[i])return;
   A[i] = key;

   while(i > 1 && A[i/2] < A[i]){
      swap( A[i/2], A[i] );
      i /= 2;
   }
   return;
}

void insert(int key)
{
   ++H;
   A[H] = -INF;
   increaseKey(H, key);
}

int extract()
{
   int maxv;
   if(H < 1)return -INF;
   maxv = A[1];
   A[1] = A[H--];
   maxHeapify(1);
   return (maxv);
}

int main()
{
   ios::sync_with_stdio(false), cin.tie(0);

   int key;
   string com;

   for(;;){
      cin >> com;
      if( com == "end" )break;

      if( com[0] =='i') {
         cin >> key;
         insert(key);
      }
      else {
         cout << extract() << '\n';
      }
   }

   return(0);
}

void maxHeapify(int i)
{
   int l, r, lgst;
   l = i * 2;
   r = l + 1;
   lgst =  (inside(l,H) && A[l] > A[i]) ? l : i;
   if( inside(r,H) && A[r] > A[lgst] )lgst = r;
   if(lgst != i){
      swap( A[i], A[lgst] );
      maxHeapify(lgst);
   }
}


