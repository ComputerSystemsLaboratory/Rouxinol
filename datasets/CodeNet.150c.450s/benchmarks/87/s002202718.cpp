#include <stdio.h>

void partical_move(int data[][5], int i, int n) {
  int j, k;
  for (j = n-1; j >= 0; j--) {
	if (data[j][i] == 0) {
	  for (k = j; k >= 0; k--) {
		if (data[k][i] != 0) {
		  data[j][i] = data[k][i];
		  data[k][i] = 0;
		  break;
		}
	  }
	}
  }
}

int main(void) {
  int n;
  int flag = 0;
  int i, j, k;
  int score;
  // int score[1000] = {0};
  int L = 0;

  while (1) {

	int data[100][5] = {{0}};
	score = 0;

	scanf("%d", &n);
	if (n == 0) break;
	for (i = 0; i < n; i++) {
	  for (j = 0; j < 5; j++) {
		scanf("%d", &data[i][j]);
	  }

	}
	while (1) {
	  //debug
	  // 	puts("");
	  // for (i = 0; i < n; i++) {
	  // 	for (j = 0; j < 5; j++) {
	  // 	  printf("%d ", data[i][j]);
	  // 	}
	  // 	puts("");
	  // }
	  //



	  flag = 0;
	  for (i = 0; i < n; i++) {
		if (data[i][0] == data[i][1] && data[i][1] == data[i][2] && 
			data[i][2] == data[i][3] && data[i][3] == data[i][4] && data[i][2] != 0) {
		  // score[L] += data[i][0]*5;
		  score += data[i][0]*5;

		  data[i][0] = data[i][1] = data[i][2] = data[i][3] = data[i][4] = 0; //delete

		  flag = 1;
		}

		else if (( (data[i][0] == data[i][1] && data[i][1] == data[i][2] && data[i][2] == data[i][3]) && data[i][2] != 0) ||
				 ((data[i][1] == data[i][2] && data[i][2] == data[i][3] && data[i][3] == data[i][4]) && (data[i][2] != 0))) {
		  // score[L] += data[i][2]*4;
		  score += data[i][2]*4;

		  if (data[i][0] == data[i][1]) { //delete
			data[i][0] = data[i][1] = data[i][2] = data[i][3] = 0; //delete
		  } //delete
		  else { //delete
			data[i][1] = data[i][2] = data[i][3] = data[i][4] = 0; //delete
		  } //delete

		  flag = 1;
		}

		else {
		  for (j = 0; j < 3; j++) {
			if (data[i][j] == data[i][j+1] && data[i][j+1] == data[i][j+2] && data[i][j] != 0) {
			  // score[L] += data[i][j]*3;
			  score += data[i][j]*3;

			  for (k = j; k < j+3; k++) { //delete
				data[i][k] = 0; //delete
			  } //delete

			  flag = 1;
			  break;
			}
		  }
		}
	  }

	  ///////////////////debug///////////////////////////
	  // puts("");
	  // for (i = 0; i < n; i++) {
	  // 	for (j = 0; j < 5; j++) {
	  // 	  printf("%d ", data[i][j]);
	  // 	}
	  // 	puts("");
	  // }
	  ///////////////////////////////////////////////////

	  if (flag == 0) {
		//   puts("");
		// for (i = 0; i < n; i++) {
		//   for (j = 0; j < 5; j++) {
		// 	printf("%d ", data[i][j]);
		//   }
		//   puts("");
		// }
		//		printf("%d\n",score[L]);
		printf("%d\n",score);
		L++;
		break;
	  }
	  //move

	  for (i = 0; i < 5; i++) { //??????????????¢?´¢
		partical_move(data,i, n); 
	  }
	}//while



	// printf("%d\n",data[l]);
  }//while

  // for (i = 0; i < L; i++) {
  // 	printf("%d\n",score[i]);
  // }
}//mdatain