#include <iostream>
using namespace std;

int main () {
  int exam[3],midterm_exam=0,terminal_exam=0,reexam=0,score,i=0;
  while (i != 3) {
    score = 0;
	i = 0;
    cin >> midterm_exam >> terminal_exam >> reexam;
    if (midterm_exam != -1) {
      score = score + midterm_exam;
	} else ++i;


    if (terminal_exam != -1) {
      score = score + terminal_exam;
	} else {
	if (i == 1 && reexam == -1) break;
    ++i;
	}


    if (i == 0) {
	  if (score >= 80)
	    cout << "A" << endl;

	  if (score >= 65 && score < 80)
	    cout << "B" << endl;
	    if (score >= 50 && score < 65)
	      cout << "C" << endl;

        if (score >= 30 && score < 50 && reexam < 50) {
	        cout << "D" << endl;
		} else if (score >= 30 && score < 50 && reexam >= 50) {
	        cout << "C" << endl;
	    }
	}

    if (score < 30 || i > 0) {
	  cout << "F" << endl;
    }

  }
  return 0;
}