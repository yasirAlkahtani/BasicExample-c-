#include <iostream>

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main() {
   int area;

   area = LENGTH * WIDTH;
   std::cout << area;
   std::cout << NEWLINE;
   return 0;
}
