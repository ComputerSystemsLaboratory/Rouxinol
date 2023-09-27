#include<iostream>
#include<vector>
using namespace std;
//------------------------????????????????????£?¨?
struct CARDS{
	char mark;
	int number;
	int value;
};
void BubbleSort(vector<CARDS> C, int N);
void SelectionSort(vector<CARDS> C, int N);
bool checkStable();
void outputResult(bool result);
void outputVector(vector<CARDS> C);

//-------------------------???????????¢??°
int main(){
	//??\???
	int N ;
	cin >> N;
	vector<CARDS> card;
	card.resize(N);
	for(int i=0; i< N; i++){
		cin >> card[i].mark;//S,H,C,D???0~3
		cin >> card[i].number;
	}
//   	outputVector(card);
	//??????????????????
	BubbleSort(card, N);
	//???????????????
	SelectionSort(card, N);
	return 0;
}
//------------------------
bool checkStable(vector<CARDS> CARD, vector<CARDS> Result, int N){
    for(int i=0; i< N ; i++){
        for(int j=i+1; j< N ; j++){
            for(int k=0; k< N ; k++){//????????????????????¨?????????
                for(int m=k+1; m< N ; m++){//????????????????????¨?????????
                    if( (CARD[i].number == CARD[j].number) &&
                        (CARD[i].mark   == Result[m].mark) &&
                        (CARD[i].number == Result[m].number) &&
                        (CARD[j].mark   == Result[k].mark) &&
                        (CARD[j].number == Result[k].number)){
                            return false;
                    }
                }
            }
        }
	}
	return true;
}
//------------------------
void BubbleSort(vector<CARDS> C, int N){
	
	vector<CARDS> P = C;
	for(int i =0; i<N; i++){
		for(int j=(N-1);  j>=(i+1) ; --j){
			if( C[j].number < C[j-1].number){
				CARDS temp  = C[j];
				C[j]        = C[j-1];
				C[j-1]      = temp;
			}
		}
	}
	outputVector(C);
	//??????
    bool result = false;
    result = checkStable(P, C, N);
	outputResult(result);

	return ;
}
//------------------------
void SelectionSort(vector<CARDS> C, int N){
	vector<CARDS> P = C;
	for(int i=0; i<N; i++ ){
		int minj = i;
		for(int j=i; j<=(N-1) ;j++){
			if( C[j].number < C[minj].number){
				minj = j;
			}
		}
		CARDS temp  = C[i];
		C[i]        = C[minj];
		C[minj]     = temp;
	}
	outputVector(C);
	//??????
    bool result = false;
    result = checkStable(P, C, N);
	outputResult(result);

	return ;
}
//------------------------
void outputResult(bool result){
	if(result){
		cout << "Stable" << endl;
	}else{
		cout << "Not stable" << endl;
	}

}
//----------------------
void outputVector(vector<CARDS> C){
	for(int i =0; i< C.size(); i++){
		cout << C[i].mark;
		cout << C[i].number;
		if(C.size()-i-1){
			cout << " " ;
		}
	}
	cout << endl ;
}