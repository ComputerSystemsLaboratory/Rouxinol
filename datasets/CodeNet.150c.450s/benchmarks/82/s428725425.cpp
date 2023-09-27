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
			printf("RotateN ");
			printf("NS[%d %d %d %d] ", iNS[0], iNS[1], iNS[2], iNS[3]);
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
			printf("RotateS ");
			printf("NS[%d %d %d %d] ", iNS[0], iNS[1], iNS[2], iNS[3]);
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
			printf("RotateE ");
			printf("NS[%d %d %d %d] ", iNS[0], iNS[1], iNS[2], iNS[3]);
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
			printf("RotateW ");
			printf("NS[%d %d %d %d] ", iNS[0], iNS[1], iNS[2], iNS[3]);
			printf("EW[%d %d %d %d]\n", iEW[0], iEW[1], iEW[2], iEW[3]);
#endif
		}

		void setDice(int v1, int v2, int v3, int v4, int v5, int v6) {
			iNS[0] = v1;
			iNS[1] = v2;
			iNS[2] = v6;
			iNS[3] = v5;

			iEW[0] = v1;
			iEW[1] = v3;
			iEW[2] = v6;
			iEW[3] = v4;
		}

		int getTop() {
			return iNS[0];
		}

		int getFront() {
			return iNS[1];
		}

		int getRight() {
			return iEW[1];
		}

};

int main(void) {


	int v1, v2, v3, v4, v5, v6;
	int cnt;
	int top, front;

	v1 = v2 = v3 = v4 = v5 = v6 = 0;

	// dice definition
	scanf("%d %d %d %d %d %d", &v1, &v2, &v3, &v4, &v5, &v6 );
	Dice *d = new Dice(v1, v2, v3, v4, v5, v6);

	// num of data
	scanf("%d", &cnt );

	// process data
	for (int i = 0; i < cnt; i++) {
		// set initial dice value
		d->setDice( v1, v2, v3, v4, v5, v6);
		// read top and front value.
		scanf("%d %d", &top, &front);
		// rotate E or W direction
		bool bFound = false;
		for ( int l = 0; l < 4; l++ ) {
			for (int j = 0; j < 4; j++) {
				if ( d->getFront() == front ) {
					bFound = true;
					break;
				}
				d->rotateN();
			}
			if ( bFound == true ) {
				bFound = false;
				for (int k = 0; k < 4; k++) {
					if (d->getTop() == top) {
						bFound = true;
						break;
					}
					d->rotateE();
				}
				if (bFound == true) {
					printf("%d\n", d->getRight());
				}
			}
			if (bFound == true) {
				break;
			}
			d->rotateE();
		}
	}

}