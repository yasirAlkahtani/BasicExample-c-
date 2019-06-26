#include <iostream>

using namespace std;

#ifndef KonstruktorenHeader_H
#define KonstruktorenHeader_H

class Line {
   public:
      void setLength( double );
      double getLength( void );
      Line();
      Line(double len);  // This is the constructor
   private:
      double length;
};

#endif
