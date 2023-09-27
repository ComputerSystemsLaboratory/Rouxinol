//  AOJ Algorithms and Data Structures I - Heaps - Priority Queue
// s 2013 0913 1556
//

/*
[ヒープを表す配列A、ヒープのサイズ（要素数）をheap_sizeとすれば、A[1...heap_size]にヒープの要素が格納される。木の根はA[1]であり、節点の添え字iが与えられたとき、その親parent(i)、左の子left(i)、右の子right(i)は以下の式で算出される： ]
と、問題文に書いてあるので、添え字０は使わず、獲得する領域も１大きくする。
add 2013 0913 1714
　要素数が決まってないので、動的配列で作りたいが、vectorは要素追加したときに
アドレス変わっちゃうし、面倒なので、最初に静的に持っておく。
問題はそのサイズだが、命令数２bilion に合わせて、int型2billionの配列とったら
「Memory Limit : 65536 KB」なので完璧オーバー。
よって適当に10000KB取って実行後に足りなかったら、足す。　


add 2013 0913 1556
 ヒープは、最大（最少）を簡単に求められるデータ構造なので　
優先度付きキュー(priority queue)にはぴったり。
計算機上でのジョブスケジューリング
 特に、以下の関数が、いい味を出している。
＝＞　extractMax(S): 最大のキーを持つSの要素をSから削除してその値を返す


そういえば、なんで普通のソートで並べておかないんだろ？
それでも最大と最少は出るのに。
唯のソートなら、クイックソートとか使えばいいが、
木構造の探索の速さ（そこからくるinsertのはやさ）（これは普通にソートした配列でも同じ用にヒープにできるが）
（あと、ヒープは探索まともにできない。挿入場所を早く決められるってだけ？）
と、　値を取った後木を組みなおす簡単さが　一番うまいこといってるのが
ヒープなんでしょう。
最大とか、最少のみがほしいときにしか使えないが


add 2013 0913 1854
insert は　とりあえず配列の後ろに入れて　親より大きかったら交換を繰り返して適切な位置へ。
（確かに挿入の適切な位置への探索はいらない。　木構造内での交換のみ）
extractはrootを出して、そこに配列の一番後ろの要素入れて、要素数減らしてから、maxHeapifyでヒープ組み直し

*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;


//関数の引数に書くの面倒なので、ここで宣言
int heap_size;



void maxHeapify(int *heap, int i){
	int l,r, largest;

	l=i*2;
	r=i*2+1;

	if(l <= heap_size && heap[l] > heap[i]) largest = l;
	else largest = i;

	if(r <= heap_size && heap[r] > heap[largest]) largest = r;

	if(largest!=i){
		swap(heap[i], heap[largest]);
		maxHeapify(heap, largest);
	}

}

void buildMaxHeap(int *heap){
	int i;

	for(i=heap_size/2; i>=1; i--) maxHeapify(heap, i);
}


void heapIncreaseKey(int *heap, int i, int key){
    
	if (key < heap[i]) printf("error 新しいキーは現在のキーより小さい");
    heap[i] = key;
    while( i > 1 && heap[i/2] < heap[i]){
		swap(heap[i], heap[i/2]);
		i = i/2;
	}
}

void maxHeapInsert(int *heap, int key){
	heap_size++;
	heap[heap_size]= -1; //キーは非負なのでこれでOK
	heapIncreaseKey(heap, heap_size, key);
}


int heapExtractMax(int *heap){
	int max;

    if(heap_size < 1){ 
		printf("ヒープアンダーフロー");
		return 0;
	}
    max = heap[1];
    heap[1] = heap[heap_size];
    heap_size--;
    maxHeapify(heap, 1);

    return max;
}


int main() {
	int i,j;
	//int heap_size;
	int key;
	string order;

	//input
	// 標準入力をファイルに変更////////////////////////////////////////////////////////
    //FILE* fp_in = freopen("\\\\k1300\\k1300\\s1350010\\.windows\\Desktop\\input_data.txt", "r", stdin);
	/////////////////////////////////////////////////////////////////////////////////////

	heap_size=0;
	//int *heap = new int[heap_size+1]; //[1...heap_size]まで使うので
	int heap[2000000];

	while( cin >> order){

		if(order=="insert"){
			cin >> key;
			maxHeapInsert(heap, key);
		}
		else if(order=="extract"){
			printf("%d\n", heapExtractMax(heap));
		}
		else{ //if(order=="end"){
			break;
		}	
	}

	// ファイルを閉じる//////////////////////////////////////////////////////////////////
    //fclose(fp_in);
	/////////////////////////////////////////////////////////////////////////////////////
	
	return 0;
}