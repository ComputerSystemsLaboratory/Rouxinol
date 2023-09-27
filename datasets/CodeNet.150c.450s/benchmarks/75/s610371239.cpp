#include <bits/stdc++.h>
#define reps(i, s,  n) for(int i=(s); i<=(n); ++i)
using namespace std;

int H, heap[500010];

void maxHeapify(int i)
{
   int l, r, largest;
   l = i * 2;
   r = i * 2 + 1;

   //左の子、自分、右の子の中で最大のノードを選ぶ
   if( l<= H && heap[l] > heap[i])largest = l;
   else largest = i;

   if( r <= H && heap[r] > heap[largest] )largest = r;

   if( largest != i ) {
      swap(heap[i], heap[largest]);
      maxHeapify(largest);
   }
}

int main()
{
   scanf("%d", &H);
   reps(i, 1, H) {
      scanf("%d", &heap[i]);
   }

   for( int i = H /2; i >= 1; --i ) maxHeapify(i);

   reps(i, 1, H )printf( " %d", heap[i] );
   putchar_unlocked('\n');
}

