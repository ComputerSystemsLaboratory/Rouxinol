#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;



class CPriorityQueue{
	
public:
	CPriorityQueue();
	bool Insert(int key);
	bool Extract(void);
	int countOrder;							//何個目の命令かカウントする
	static const int ORDER_MAX = 2000000;	//命令数のMAX
	const int KEY_MAX = 2000000000;			//要素の最大値
	const int KEY_MIN = 0;					//要素の最小値
	
private:
	int queue[ORDER_MAX];			//Queue
	int indexQueue;					//Queueに格納されているデータ数
};


CPriorityQueue::CPriorityQueue() : countOrder(0), indexQueue(0){
	
	memset(queue, 0, sizeof(&queue[0]));
}


/*
-------------------------------------
関数名：Insert
	in     : 入力"insert"の後につづく要素
	return : bool型
-------------------------------------
*/
bool CPriorityQueue::Insert(int key){
	
	//要素の制約をCheckする
	if((KEY_MIN > key) || (key > KEY_MAX)){
		return false;
	}
	
	//keyを末尾に追加
	queue[indexQueue] = key;
	
	//keyが親ノードより大きければ入れ替える
	int indexParentQueue = (indexQueue - 1) / 2;
	int i = indexQueue;
	while(i != 0){
		if(queue[i] > queue[indexParentQueue]){
			swap(queue[i], queue[indexParentQueue]);
			i = indexParentQueue;
			if(i == 2){
				indexParentQueue = 0;
			}
			else{
				indexParentQueue = (i - 1) / 2;
			}
		}
		else{
			break;
		}
	}
	indexQueue++;
	
	return true;
}


/*
-------------------------------------
extract()
	in     : なし
	return : bool型
-------------------------------------
*/
bool CPriorityQueue::Extract(void){
	
	//Queueにデータが格納されていなければERROR
	if(indexQueue == 0){
		return false;
	}
	
	
	//Queueの先頭を表示
	cout << queue[0] << endl;
	
	
	//Queueの末尾と先頭を入れ替える
	indexQueue--;
	queue[0] = queue[indexQueue];
	
	
	//Queueの先頭と子ノードを比較し、子ノードのほうが値が小さければ入れ替える
	int indexParentQueue = 0;
	while(1){
		if(indexQueue <= ((2 * indexParentQueue) + 1)){
			//子ノードがない
			break;
		}
		else if((indexQueue <= (2 * (indexParentQueue + 1))) ||
				(queue[(2 * indexParentQueue) + 1] > queue[2 * (indexParentQueue + 1)])){
			//子ノードが1つ または 左の子ノードの方が大きい
			if(queue[(2 * indexParentQueue) + 1] > queue[indexParentQueue]){
				swap(queue[(2 * indexParentQueue) + 1], queue[indexParentQueue]);
				indexParentQueue = (2 * indexParentQueue) + 1;
			}
			else{
				//子ノードより親ノードの方が大きい
				break;
			}
		}
		else{
			//右の子ノードの方が大きい
			if(queue[2 * (indexParentQueue + 1)] > queue[indexParentQueue]){
				swap(queue[2 * (indexParentQueue + 1)], queue[indexParentQueue]);
				indexParentQueue = 2 * (indexParentQueue + 1);
			}
			else{
				//子ノードより親ノードの方が大きい
				break;
			}
		}
		
		
	}
	
	return true;
}


int main(){
	
	CPriorityQueue priorityQueue;
	string str;
	char num[11];
	int key = 0;						//insertで挿入する要素
	
	while(priorityQueue.countOrder <= priorityQueue.ORDER_MAX){
		cin >> str;
		priorityQueue.countOrder++;
		
		if(str == "end"){
			break;
		}
		else if(str.compare(0, 6, "insert") == 0){
			//insertに続く要素を取得
			cin >> num;
			key = atoi(num);
			
			if(priorityQueue.Insert(key) == false){
				return -1;
			}
		}
		else if(str.compare(0, 7, "extract") == 0){
			if(priorityQueue.Extract() == false){
				return -1;
			}
		}
		else{
			//ここに入ることはない
		}
	}
	
	return 0;
}



