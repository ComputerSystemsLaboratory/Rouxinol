/*
今回は、vectorでなく、普通に配列使う。

[ヒープを表す配列A、ヒープのサイズ（要素数）をheap_sizeとすれば、A[1...heap_size]にヒープの要素が格納される。木の根はA[1]であり、節点の添え字iが与えられたとき、その親parent(i)、左の子left(i)、右の子right(i)は以下の式で算出される： ]
と、問題文に書いてあるので、添え字０は使わず、獲得する領域も１大きくする。
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;


int main() {
	int i,j;
	int heap_size;

	//input
	// 標準入力をファイルに変更////////////////////////////////////////////////////////
    //FILE* fp_in = freopen("\\\\k1300\\k1300\\s1350010\\.windows\\Desktop\\input_data.txt", "r", stdin);
	/////////////////////////////////////////////////////////////////////////////////////

	cin >> heap_size;
	int *heap = new int[heap_size+1]; //[1...heap_size]まで使うので

	for(i=1;i<=heap_size;i++){
		cin >> heap[i];
	}
	for(i=1;i<=heap_size;i++){
		printf("node %d: ", i);
		printf("key = %d, ", heap[i]);
		if(i!=1) printf("parent key = %d, ", heap[i/2]);
		if(2*i<=heap_size) printf("left key = %d, ", heap[2*i]);
		if(2*i+1<=heap_size)printf("right key = %d, ", heap[2*i+1]);
		printf("\n");
	}
	
	// ファイルを閉じる//////////////////////////////////////////////////////////////////
    //fclose(fp_in);
	/////////////////////////////////////////////////////////////////////////////////////
	
	return 0;
}