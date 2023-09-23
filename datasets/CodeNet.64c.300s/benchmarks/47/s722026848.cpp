#include <stdio.h>
//using namespace std;

#define N 100
#define MYSCAN scanf

int main(void){

	int i;
	int input, max = 0;
	int bucket[N + 1];

	// テゥツ?催・ツ按療」ツ?ョテ・ツ按敕ヲツ慊淌・ツ個?
	for (int i = 0; i < N + 1; i++){
		bucket[i] = 0;
	}

	// テ・ツ?・テ・ツ環崚」ツ?ォテ」ツ?療」ツ?淌」ツ?古」ツ?」テ」ツ?ヲテゥツ??ヲツャツ。テゥツ?催・ツ按療」ツつ津」ツつォテ」ツつヲテ」ツδウテ」ツδ暗」ツつ「テ」ツδε」ツδ?
	while (MYSCAN("%d", &input) != EOF){
		bucket[input]++;
	}

	// テ」ツつづ」ツ?」テ」ツ?ィテ」ツつづ・ツ、ツ堙」ツ?湘・ツ?コテ」ツ?淌・ツ崢榲ヲツ閉ーテ」ツつ津ヲツアツづ」ツつ?」ツつ?
	for (int i = 0; i < N + 1; i++){
		if (max < bucket[i]){
			max = bucket[i];
		}
	}

	// テ」ツ?敕」ツ?ョテ・ツ崢榲ヲツ閉ーテ」ツ??」ツ?妥・ツ?・テ・ツ環崚」ツ?陛」ツつ古」ツ?淌ヲツ閉ーテ・ツ?、テ」ツつ津・ツ?コテ・ツ環?
	for (int i = 0; i < N + 1; i++){
		if (max == bucket[i]){
			printf("%d\n", i);
		}
	}

	return 0;
}