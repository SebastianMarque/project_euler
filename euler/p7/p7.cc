// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int nthPrime(int nth){

  int n = nth*(log(nth) + log(log(nth-1)));
  int nthPrime   ;
  
  vector<bool> primes( n , true);
  for (int p = 2 ; p*p < n ; p++){
    if ( primes[p] == true){
      for (int j = p*p ; j < n ; j = j + p){
        primes[j] = false;
      }
    }
  }
  
  bool  print = true;
  int   count = 0; 
  if (print) {
    for (int p = 2; p < n; p++){ 
      if (primes[p]) {
        count++ ;
      }
      nthPrime = count;
      if (count == nth) {
        nthPrime = p;
        break;
      }  
    }
  }
  return nthPrime;
}


int main(){       
  int  nth      = 10001;
  cout << nthPrime( nth ) << endl;
  return 0;
}
