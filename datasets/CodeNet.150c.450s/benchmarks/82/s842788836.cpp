#include <stdio.h>
#include <string.h>

class Dice{
	int mn[6];	
	
	public:
		void set(int num, int val){
			mn[num] = val;
		}
	
		void rot(char dir){
			int buf, old[6];
			memcpy(old, mn, sizeof(mn));
			switch(dir){
				case 'E':
				mn[0] = old[3];
				mn[2] = old[0];
				mn[5] = old[2];
				mn[3] = old[5];
				break;
				case 'W':
				mn[3] = old[0];
				mn[0] = old[2];
				mn[2] = old[5];
				mn[5] = old[3];
				break;
				case 'S':
				mn[0] = old[4];
				mn[1] = old[0];
				mn[5] = old[1];
				mn[4] = old[5];
				break;
				case 'N':
				mn[4] = old[0];
				mn[0] = old[1];
				mn[1] = old[5];
				mn[5] = old[4];
				break;
				case 'R':
				mn[1] = old[2];
				mn[2] = old[4];
				mn[4] = old[3];
				mn[3] = old[1];
				break;
				case 'L':
				mn[2] = old[1];
				mn[4] = old[2];
				mn[3] = old[4];
				mn[1] = old[3];
				break;
			}
		}
		
		int get(int num){
			return mn[num];
		}
		
		int serch(int val){
			int i;
			for(i = 0; 6 > i; i++){
				if(mn[i] == val) return i;
			}
			return -1;
		}
		
		void Aset(int up, int front){
			int i, su = serch(up);
			if(su == 3 || su == 2){
				while(get(0) != up){
					rot('E');
				}
			}
			else {
				while(get(0) != up){
					rot('S');
				}
			}
			while(get(1) != front){
				rot('R');
			}
		}
};


int main() {
	int b, i, n;
	Dice dice;
	
	for(i = 0; 6 > i; i++){
		scanf("%d", &b);
		dice.set(i,b);
	}
	scanf("%d", &n);
	for(i = 0; n > i; i++){
		int cm[2];
		scanf("%d%d", &cm[0], &cm[1]);
		
		dice.Aset(cm[0], cm[1]);
		printf("%d\n", dice.get(2));
	}
	return 0;
}