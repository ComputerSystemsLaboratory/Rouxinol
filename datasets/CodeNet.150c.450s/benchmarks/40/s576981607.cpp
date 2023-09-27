#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//#define __DEBUG__

class Dice {

	private:
		int iNS[4];
		int iEW[4];

	public:
		Dice( int v1, int v2, int v3, int v4, int v5, int v6 ) {
			iNS[0] = v1;
			iNS[1] = v2;
			iNS[2] = v6;
			iNS[3] = v5;

			iEW[0] = v1;
			iEW[1] = v3;
			iEW[2] = v6;
			iEW[3] = v4;

#ifdef __DEBUG__
			printf("NS[%d %d %d %d]\n", iNS[0], iNS[1], iNS[2], iNS[3]);
			printf("EW[%d %d %d %d]\n", iEW[0], iEW[1], iEW[2], iEW[3]);
#endif
		}

		void rotateN() {
			int iTmp = iNS[0];
			iNS[0] = iNS[1];
			iNS[1] = iNS[2];
			iNS[2] = iNS[3];
			iNS[3] = iTmp;

			iEW[0] = iNS[0];
			iEW[2] = iNS[2];

#ifdef __DEBUG__
			printf("NS[%d %d %d %d]\n", iNS[0], iNS[1], iNS[2], iNS[3]);
			printf("EW[%d %d %d %d]\n", iEW[0], iEW[1], iEW[2], iEW[3]);
#endif
		}

		void rotateS() {
			int iTmp = iNS[0];
			iNS[0] = iNS[3];
			iNS[3] = iNS[2];
			iNS[2] = iNS[1];
			iNS[1] = iTmp;

			iEW[0] = iNS[0];
			iEW[2] = iNS[2];

#ifdef __DEBUG__
			printf("NS[%d %d %d %d]\n", iNS[0], iNS[1], iNS[2], iNS[3]);
			printf("EW[%d %d %d %d]\n", iEW[0], iEW[1], iEW[2], iEW[3]);
#endif
		}

		void rotateE() {
			int iTmp = iEW[0];
			iEW[0] = iEW[3];
			iEW[3] = iEW[2];
			iEW[2] = iEW[1];
			iEW[1] = iTmp;

			iNS[0] = iEW[0];
			iNS[2] = iEW[2];

#ifdef __DEBUG__
			printf("NS[%d %d %d %d]\n", iNS[0], iNS[1], iNS[2], iNS[3]);
			printf("EW[%d %d %d %d]\n", iEW[0], iEW[1], iEW[2], iEW[3]);
#endif

		}

		void rotateW() {
			int iTmp = iEW[0];
			iEW[0] = iEW[1];
			iEW[1] = iEW[2];
			iEW[2] = iEW[3];
			iEW[3] = iTmp;

			iNS[0] = iEW[0];
			iNS[2] = iEW[2];

#ifdef __DEBUG__
			printf("NS[%d %d %d %d]\n", iNS[0], iNS[1], iNS[2], iNS[3]);
			printf("EW[%d %d %d %d]\n", iEW[0], iEW[1], iEW[2], iEW[3]);
#endif
		}

		int getTop() {
			return iNS[0];
		}

};

int main(void) {


	int v1, v2, v3, v4, v5, v6;
	char cmd[128];

	v1 = v2 = v3 = v4 = v5 = v6 = 0;

	scanf("%d %d %d %d %d %d", &v1, &v2, &v3, &v4, &v5, &v6 );
	scanf("%s", &cmd );

	Dice *d = new Dice(v1, v2, v3, v4, v5, v6);

	int iLen = strlen(cmd);
	for (int i = 0; i < iLen; i++) {
		char c = cmd[i] & 0xdf;
		switch (c) {
			case 'N':
				d->rotateN();
				break;
			case 'S':
				d->rotateS();
				break;
			case 'E':
				d->rotateE();
				break;
			case 'W':
				d->rotateW();
				break;
			default:
				break;
		}
	}

	printf("%d\n", d->getTop());


}