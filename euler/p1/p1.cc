#include <cstdio>
#include <iostream>
#include <vector>

// below 10 multiples of 3 and 5 sum 



using namespace std;

int main() {
    int sum    = 0    ;
    int number = 1000 ;
    int i      = 0   ;
  while ( i < number ) {
    cout << i << endl;
    if ( i%3 == 0 or i%5 ==0) sum = sum + i ;
    i++;
  }
  cout << sum << endl;
    return 0;
}

