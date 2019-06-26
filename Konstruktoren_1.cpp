#include"KonstruktorenHeader.h"
#include"Konstruktoren_ref.cpp"
// Main function for the program


int main() {
   Line line_i, line(10.0);

    // get initially set length.
   cout << "Length of line : " << line.getLength() <<endl;

   // set line length
   line.setLength(6.0);
   cout <<"Length of line : " <<line.getLength() <<endl;

   return 0;
}
