#include <cstdio>

constexpr int INSUU = 64;
constexpr int SOSUU = 10000;

int Eratosthenes(int* primes){
  primes[0] = 2;
  primes[1] = 3;
  primes[2] = 5;
  primes[3] = 7;
  int prime_p = 4;
  for(int p = 11; p <= 10000; p+=2){
    bool is_prime = true;
    for(int i = 0; i < prime_p; i++){
      if((p % primes[i]) == 0){
	is_prime = false;
	break;
      }
    }
    if(is_prime){
      primes[prime_p++] = p;
    }
  }
  return prime_p;
}
int main(){
  int primes[SOSUU];
  int prime_count = Eratosthenes(primes);
  int insuus[INSUU];
  int insuu_count = 0;
  int n;
  scanf("%d", &n);
  int c = n;
  for(;;){
    bool c_is_prime = true;
    for(int i = 0; i < prime_count; i++){
      if((c % primes[i]) == 0){
  	insuus[insuu_count++] = primes[i];
  	c /= primes[i];
  	c_is_prime = false;
  	break;
      }
    }
    if(c == 1) { break; }
    if(c_is_prime){
      insuus[insuu_count++] = c;
      break;
    }
  }
  printf("%d:", n);
  for(int i = 0; i < insuu_count; i++){
    printf(" %d", insuus[i]);
  }
  printf("\n");
}