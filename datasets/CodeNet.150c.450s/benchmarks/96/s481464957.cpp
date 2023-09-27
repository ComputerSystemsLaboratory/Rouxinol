#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, cnt = 0, num = 0;
  string str, phone;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> phone;
    for(int j = 0; j < (int)phone.size(); j++){
      if(phone[j] == '1'){
	cnt++;
	if(phone[j+1] == '0'){
	  switch (cnt % 5){
	  case 0: 
	    cout << " ";
	    break;
	  case 4: 
	    cout << '?';
	    break;
	  case 3: 
	    cout << '!';
	    break;
	  case 2: 
	    cout << ',';
	    break;
	  case 1: 
	    cout << '.';
	    break;
	  }
	  cnt = 0;
	}
      }else if(phone[j] == '2'){
	cnt++;
	if(phone[j+1] == '0'){
	  switch (cnt % 3){
	  case 0: 
	    cout << 'c';
	    break;
	  case 2: 
	    cout << 'b';
	    break;
	  case 1: 
	    cout << 'a';
	    break;
	  }
	  cnt = 0;
	}
      }else if(phone[j] == '3'){
	cnt++;
	if(phone[j+1] == '0'){
	  switch (cnt % 3){
	  case 0: 
	    cout << 'f';
	    break;
	  case 2: 
	    cout << 'e';
	    break;
	  case 1: 
	    cout << 'd';
	    break;
	  }
	  cnt = 0;
	}
      }else if(phone[j] == '4'){
	cnt++;
	if(phone[j+1] == '0'){
	  switch (cnt % 3){
	  case 0: 
	    cout << 'i';
	    break;
	  case 2: 
	    cout << 'h';
	    break;
	  case 1: 
	    cout << 'g';
	    break;
	  }
	  cnt = 0;
	}
      }else if(phone[j] == '5'){
	cnt++;
	if(phone[j+1] == '0'){
	  switch (cnt % 3){
	  case 0: 
	    cout << 'l';
	    break;
	  case 2: 
	    cout << 'k';
	    break;
	  case 1: 
	    cout << 'j';
	    break;
	  }
	  cnt = 0;
	}
      }else if(phone[j] == '6'){
	cnt++;
	if(phone[j+1] == '0'){
	  switch (cnt % 3){
	  case 0: 
	    cout << 'o';
	    break;
	  case 2: 
	    cout << 'n';
	    break;
	  case 1: 
	    cout << 'm';
	    break;
	  }
	  cnt = 0;
	}
      }else if(phone[j] == '7'){
	cnt++;
	if(phone[j+1] == '0'){
	  switch (cnt % 4){
	  case 0: 
	    cout << 's';
	    break;
	  case 3: 
	    cout << 'r';
	    break;
	  case 2: 
	    cout << 'q';
	    break;
	  case 1: 
	    cout << 'p';
	    break;
	  }
	  cnt = 0;
	}
      }else if(phone[j] == '8'){
	cnt++;
	if(phone[j+1] == '0'){
	  switch (cnt % 3){
	  case 0: 
	    cout << 'v';
	    break;
	  case 2: 
	    cout << 'u';
	    break;
	  case 1: 
	    cout << 't';
	    break;
	  }
	  cnt = 0;
	}
      }else if(phone[j] == '9'){
	cnt++;
	if(phone[j+1] == '0'){
	  switch (cnt % 4){
	  case 0: 
	    cout << 'z';
	    break;
	  case 3: 
	    cout << 'y';
	    break;
	  case 2: 
	    cout << 'x';
	    break;
	  case 1: 
	    cout << 'w';
	    break;
	  }
	  cnt = 0;
	}
      }
    }
    cout << endl;
  }









return 0;
}