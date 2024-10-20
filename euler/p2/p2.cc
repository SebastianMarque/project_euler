#include <cstdio>
#include <iostream>
#include <vector>


using namespace std;

int main() {
    int a      = 2      ;
    int b      = 3      ;
    int c      = 0      ;
    int sum    = 2      ;
    
  while ( c < 4000000 ) {
    c = a + b;
    if ( c%2 == 0  ) sum = sum + c ;
    a = b ;
    b = c ; 
  }
  cout << sum << endl;
    return 0;
}

