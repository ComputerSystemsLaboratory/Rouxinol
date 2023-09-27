#include <iostream>

#define MAX_PERSON (1000)

using namespace std;

void judge_grade(int m, int f, int r);

int main(void)
{
    int size;
 
    int* m = new int[MAX_PERSON + 1];
    int* f = new int[MAX_PERSON + 1];
    int* r = new int[MAX_PERSON + 1];
           
    for (int i = 0; i < MAX_PERSON + 1; i++) {        
         do {
             cin >> m[i] >> f[i] >> r[i];	     
         } while (((m[i] < 0 || m[i] > 50) || (f[i] < 0 || f[i] > 50) || (r[i] < 0 || r[i] > 100)) &&
		    !(m[i] == -1 || f[i] == -1 || r[i] == -1));		  

         if (m[i] == -1 && f[i] == -1 && r[i] == -1) {
             size = i;
	     break;
         }
    }
                   
    for (int i = 0; i < size; i++) {
         judge_grade(m[i], f[i], r[i]);         
    }
    
    delete[] m;
    delete[] f;
    delete[] r;
   
    return (0);
}

void judge_grade(int m, int f, int r)
{
     if (m == -1 || f == -1) {
         cout << "F" << endl;         
     } else if (m + f >= 80) {
         cout << "A" << endl;
     } else if (m + f >= 65 && m + f < 80) {
         cout << "B" << endl;
     } else if (m + f >= 50 && m + f < 65) {
         cout << "C" << endl;
     } else if (m + f >= 30 && m + f < 50) {
         if (r >= 50) {
	     cout << "C" << endl;
         } else {
	     cout << "D" << endl;
         }
     } else {
         cout << "F" << endl;
     }
}