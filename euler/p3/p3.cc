// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void SieveOfEratosthenes(int n, long int number){
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
  
  
  n = sqrt(number);
  vector<bool> prime(n , true);
  for (int p = 2 ; p*p < n ; p++){
    
    if (prime[p] == true){
       
      for (int j = p*p ; j < n ; j = j + p){
      
        prime[j] = false ;
      
      } 
    }
  }
  
// find largest prime factor
  for (int i = prime.size(); i>0 ; i--){
    if ( number % i == 0  && prime[i] == true){
      cout << i << endl;
      break ;
    }
  }


  
// print primes ?
  bool  print = false;
  if (print) {
    for (int p = 0; p < n; p++){
          if (prime[p])
              cout << p << " ";
    }
  }
//
  
  
}

// Driver Code
int main()
{
    int n      = 100;
    long int number = 600851475143;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n , number);
    cout << endl;
    return 0;
}


