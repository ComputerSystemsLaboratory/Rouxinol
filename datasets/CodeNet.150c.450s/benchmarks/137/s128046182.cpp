#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include <string>
#include <math.h>
#define MAX 16777216//pow(4,12)
using namespace std;
//常に心してかかれ
//簡単なことを簡単にできるように練習する
//びっくりするくらいつまらないことで詰まってることも多い
//focus on
//度正直に

bool dct[MAX+1];

int fourToTen(string key){
	string::iterator itr;
	int number=0;
	itr = key.begin();
	for(int i=0;;i++){

		if(itr == key.end())//end関数は、最後の要素の１つ後ろを参照するイテレータを返します!
			return number;

		if(*itr == 'A'){
			number+=1*(int)pow((double)4,(double)i);
		}else if(*itr == 'C'){
			number+=2*(int)pow((double)4,(double)i);
		}else if(*itr == 'G'){
			number+=3*(int)pow((double)4,(double)i);
		}else if(*itr == 'T'){
			number+=4*(int)pow((double)4,(double)i);
		}else
			cout <<"error" <<endl;

		itr++;
	}
}

bool find(string key){
	if(dct[fourToTen(key)] == true)
		return true;
	else
		return false;
}

void insert(string key){
	dct[fourToTen(key)] = true;
}



int main(){
	/*A→0,C→1，G→2，T→3と対応させてみると
	条件は「4進数で0?333...3までに対するハッシュ」となる*/

	/*ポイント:AとAAを区別できてるか？*/

	int numinput;
	string command,key;

	for(int i=0;i<MAX;i++){
		dct[i] = false;
	}
	
	//cout <<fourToTen("AACC");//動作確認用80

	cin >>numinput;
	for(int i=0;i<numinput;i++){
		cin >>command;
		cin >>key;
		if(command == "find"){
			if(find(key))
				cout <<"yes" <<endl;
			else
				cout <<"no" <<endl;
		}else if(command =="insert"){
			insert(key);
		}
	}
	return 0;
}

/*混乱して間違っている例
#define MAX pow(4,13)
int fourToTen(string key){
	string::iterator itr;
	int number=0;
	itr = key.begin();
	for(int i=0;;i++){

		if(itr == key.end())//end関数は、最後の要素の１つ後ろを参照するイテレータを返します!
			return number;

		if(*itr == 'A'){
			number+=1*(int)pow((double)4,(double)i);
		}else if(*itr == 'C'){
			number+=2*(int)pow((double)4,(double)i);
		}else if(*itr == 'G'){
			number+=2*(int)pow((double)4,(double)i);
		}else if(*itr == 'T'){
			number+=3*(int)pow((double)4,(double)i);
		}else
			cout <<"error" <<endl;

		itr++;
	}
}
*/