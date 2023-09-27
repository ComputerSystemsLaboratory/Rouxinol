/*
今回は、vectorでなく、普通に配列使う。
[ヒープを表す配列A、ヒープのサイズ（要素数）をheap_sizeとすれば、A[1...heap_size]にヒープの要素が格納される。木の根はA[1]であり、節点の添え字iが与えられたとき、その親parent(i)、左の子left(i)、右の子right(i)は以下の式で算出される： ]
と、問題文に書いてあるので、添え字０は使わず、獲得する領域も１大きくする。


MAXヒープを最初から作るのではなく、すでにあるヒープ（順序立てられてはいない）
をMAXヒープに直すプログラム。
（最初から作るのであれば、もっと違うやり方がある。）

親と子を比較して、　親が小さかったら、子と交換
再帰で、子になった小さいやつをさらに下げるか見る感じ。

これを　for(i=heap_size/2; i>=1; i--)
でやることによって、maxHeapifyのlargest には、常にその部分木の最大の値が入る。
（maxHeapify内で、二つの子のうち大きいほうを上にあげるのが、（当たり前だが）肝）

*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;


void maxHeapify(int *&heap, int i, int heap_size){
	int l,r, largest;

	l=i*2;
	r=i*2+1;

	if(l <= heap_size && heap[l] > heap[i]) largest = l;
	else largest = i;

	if(r <= heap_size && heap[r] > heap[largest]) largest = r;

	if(largest!=i){
		swap(heap[i], heap[largest]);
		maxHeapify(heap, largest, heap_size);
	}

}

void buildMaxHeap(int *&heap, int heap_size){
	int i;

	for(i=heap_size/2; i>=1; i--) maxHeapify(heap, i, heap_size);
}


int main() {
	int i,j;
	int heap_size;

	//input
	// 標準入力をファイルに変更////////////////////////////////////////////////////////
    //FILE* fp_in = freopen("\\\\k1300\\k1300\\s1350010\\.windows\\Desktop\\input_data.txt", "r", stdin);
	/////////////////////////////////////////////////////////////////////////////////////

	cin >> heap_size;
	int *heap = new int[heap_size+1]; //[1...heap_size]まで使うので

	for(i=1;i<=heap_size;i++){ cin >> heap[i]; }

	buildMaxHeap(heap, heap_size);

	for(i=1;i<=heap_size;i++){ printf(" %d", heap[i]); }
	printf("\n");
	
	// ファイルを閉じる//////////////////////////////////////////////////////////////////
    //fclose(fp_in);
	/////////////////////////////////////////////////////////////////////////////////////
	
	return 0;
}