#include <iostream>

static int SeqNum;//条件値数列要素数
static int* Seq;//条件値数列

bool solve(int donum, int qnum){
	if (qnum == 0)return true;
	if (donum >= SeqNum)return false;
	bool res = solve(donum + 1, qnum) || solve(donum + 1, qnum - Seq[donum]);
	return res;
}

int main(){
	std::cin >> SeqNum;

	Seq = new int[SeqNum];//条件値数列
	for (int i = 0; i < SeqNum; ++i){//数列代入
		std::cin >> Seq[i];
	}

	int QSeqNum;//質問数列要素数
	std::cin >> QSeqNum;

	int* QSeq = new int[QSeqNum];//質問数列
	for (int i = 0; i < QSeqNum; ++i){//数列代入
		std::cin >> QSeq[i];
	}

	for (int i = 0; i < QSeqNum; ++i){
		if (solve(0, QSeq[i])){
			std::cout << "yes" << std::endl;
		} else{
			std::cout << "no" << std::endl;
		}
	}

	delete[] Seq;
	delete[] QSeq;

	return 0;
}