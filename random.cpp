#include<cstdlib>
#include<iostream>
using namespace std;

int main(void)
{
   unsigned int seed = 3; // start value random generator
   cout << "seed value for initialisation of random number generator: ";
   cin >> seed; // input of start value random generator
   srand(seed); // call to initialise random number generator
   unsigned int i;
   cout << "example output of 100 random numbers in between 0 and " << RAND_MAX << endl;
   for(i = 0; i < 100; i++ )
      cout << rand() << ' '; // output next random number
   cout << endl << "example output of 100 random numbers in between 1 and 6" << endl;
   for(i = 0; i < 100; i++ )
      cout << 1 + (rand() % 6) << ' ';
   cout << endl;
   return 0;
}