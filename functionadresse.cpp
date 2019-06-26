#include <iostream>

// Function declaration
void func(int&);

static int count = 20; /* Global variable */

main() {
    static int i = 5; // local static variable
   while(count--) {
      func(i);
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
   }

   return 0;
}

// Function definition
void func( int &i ) {

   i++;
}
