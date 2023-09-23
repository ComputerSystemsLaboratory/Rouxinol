#include <stdio.h>

#define X 0
#define Y 1
#define C 2
#define SIKI1 0
#define SIKI2 1
#define LEFT  0
#define RIGHT 1

int main(){
	double A[3][3][3];
	double n[6];

	while( scanf("%lf %lf %lf %lf %lf %lf",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5]) != EOF){
		//ÏÌú»
		for(int i=0 ; i<=RIGHT ; i++){
			for(int j=0 ; j<=SIKI2 ; j++){
				for(int k=0 ; k<=C ; k++){
					A[i][j][k] = 0;
				}
			}
		}

		//lÌãü
		A[LEFT][SIKI1][X]  = n[0];
		A[LEFT][SIKI1][Y]  = n[1];
		A[RIGHT][SIKI1][C] = n[2];
		A[LEFT][SIKI2][X]  = n[3];
		A[LEFT][SIKI2][Y]  = n[4];
		A[RIGHT][SIKI2][C] = n[5];

		//®PÌXð¶Ó©çEÓÖÚ·é
		A[ RIGHT ][ SIKI1 ][ X ]  += (-1.0)*(A[ LEFT ][ SIKI1 ][ X ]);
		A[ LEFT  ][ SIKI1 ][ X ]  = 0;

		//®PÌ¼ÓðYÌWÅé		
		A[ RIGHT ][ SIKI1 ][ X ]  /= A[ LEFT ][ SIKI1 ][ Y ];
		A[ RIGHT ][ SIKI1 ][ C ]  /= A[ LEFT ][ SIKI1 ][ Y ];
		A[ LEFT  ][ SIKI1 ][ Y ]  = 1;

		//®QÌYÉãüµÄ®Qð(ax = b)Ì`É·é
		int a = A[ LEFT ][ SIKI2 ][ Y ];
		A[ LEFT  ][ SIKI2 ][ X ]  += a * A[ RIGHT ][ SIKI1 ][ X ];
		A[ LEFT  ][ SIKI2 ][ Y ]   = 0;
		A[ RIGHT ][ SIKI2 ][ C ]  += a * A[ RIGHT ][ SIKI1 ][ C ] * (-1.0);
		//XYÌðªÜé
		double answerX = A[ RIGHT ][ SIKI2 ][ C ] / A[ LEFT ][ SIKI2 ][ X ];
		double answerY = (n[2] + n[0]*answerX*(-1.0))/n[1];
		
		//¬æSÊðlÌÜü·é
		if( (((int)(answerX*10000))%10) >= 5){
			answerX += 0.001;
		}
		if( (((int)(answerY*10000))%10) >= 5){
			answerY += 0.001;
		}
		if(answerX==-0.0){
			answerX = 0;
		}
		
		//ðÌoÍ
		printf("%.3f %.3f\n", answerX , answerY);
	}

	return 0;
}