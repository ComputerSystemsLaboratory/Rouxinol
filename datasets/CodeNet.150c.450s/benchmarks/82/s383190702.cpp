#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct {
	int Up;
	int Sorth;
	int East;
	int West;
	int North;
	int Down;
}DICE;/*
	  DICE North(DICE *t);
	  DICE Sorth(DICE *t);
	  DICE East(DICE *t);
	  DICE West(DICE *t);
	  DICE Rot(DICE *t);
	  */
void assignment(DICE *t);
int main()
{
	unsigned int i, k;
	int up, front;
	DICE Dice1, shoki;
	assignment(&Dice1);
	shoki = Dice1;
	scanf("%d", &k);
	for (i = 0; i < k; i++){
		scanf("%d %d", &up, &front);
		if (up == Dice1.Up){
			if (front == Dice1.Sorth) printf("%d\n", Dice1.East);
			if (front == Dice1.North){ printf("%d\n", Dice1.West); }
			if (front == Dice1.East){ printf("%d\n", Dice1.North); }
			if (front == Dice1.West){ printf("%d\n", Dice1.Sorth); }
		}
		if (up == Dice1.Down){
			if (front == Dice1.Sorth){ printf("%d\n", Dice1.West); }
			if (front == Dice1.North){ printf("%d\n", Dice1.East); }
			if (front == Dice1.East){ printf("%d\n", Dice1.Sorth); }
			if (front == Dice1.West){ printf("%d\n", Dice1.North); }
		}

		if (up == Dice1.Sorth){
			if (front == Dice1.West){ printf("%d\n", Dice1.Down); }
			if (front == Dice1.East){ printf("%d\n", Dice1.Up); }
			if (front == Dice1.Up){ printf("%d\n", Dice1.West); }
			if (front == Dice1.Down){ printf("%d\n", Dice1.East); }
		}
		if (up == Dice1.North){
			if (front == Dice1.West){ printf("%d\n", Dice1.Up); }
			if (front == Dice1.East){ printf("%d\n", Dice1.Down); }
			if (front == Dice1.Up){ printf("%d\n", Dice1.East); }
			if (front == Dice1.Down){ printf("%d\n", Dice1.West); }
		}
		if (up == Dice1.East){
			if (front == Dice1.Sorth){ printf("%d\n", Dice1.Down); }
			if (front == Dice1.North){ printf("%d\n", Dice1.Up); }
			if (front == Dice1.Up){ printf("%d\n", Dice1.Sorth); }
			if (front == Dice1.Down){ printf("%d\n", Dice1.North); }
		}
		if (up == Dice1.West){
			if (front == Dice1.Sorth){ printf("%d\n", Dice1.Up); }
			if (front == Dice1.North){ printf("%d\n", Dice1.Down); }
			if (front == Dice1.Up){ printf("%d\n", Dice1.North); }
			if (front == Dice1.Down){ printf("%d\n", Dice1.Sorth); }
		}
	}

	return 0;
}

void assignment(DICE *t){
	int i, as, a[6];
	DICE temp;
	for (i = 0; i < 6; i++){
		scanf("%d", &as);
		a[i] = as;
	}
	t->Up = a[0], t->Sorth = a[1], t->East = a[2], t->West = a[3], t->North = a[4], t->Down = a[5];
}
/*
DICE North(DICE *t){
DICE temp = { t->Sorth, t->Down, t->East, t->West, t->Up, t->North };
return temp;
}
DICE Sorth(DICE *t){
DICE temp = { t->North, t->Up, t->East, t->West, t->Down, t->Sorth };
return temp;
}
DICE East(DICE *t){
DICE temp = { t->West, t->Sorth, t->Up, t->Down, t->North, t->East };
return temp;
}
DICE West(DICE *t){
DICE temp = { t->East, t->Sorth, t->Down, t->Up, t->North, t->West };
return temp;
}
DICE Rot(DICE *t){
DICE temp = { t->Up, t->East, t->North, t->Sorth, t->West, t->Down };
return temp;
}
*/