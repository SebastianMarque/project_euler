// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
#include <cmath>
using namespace std;



int main(){      
  double epsilon = 10e-11;
  for (int a = 1 ; a <= 4999 ; a++){
    for (int b = a + 1 ; b <= 5000 ; b ++){
      int c1 = 10000 - (a+b);
      double c2 = sqrt( a*a + b*b);
      if ( abs(c1-c2) < epsilon ){
        cout<<" abc ="<< a*b*c1 <<" a= "<< a <<" b= "<< b <<" c1= "<< c1 <<
        " c2 = " << c2 << endl;
        break;
      }
    }
  }  
  return 0;
}

