#include <iostream>
#include<vector>

using namespace std;

class Line {

   public:
       Line();
      int getLength( void );
      Line( int len );             // simple constructor
      Line( const Line &obj);  // copy constructor
      ~Line();                     // destructor

   private:
      int *ptr;
};

// Member functions definitions including constructor
Line::Line(int len) {
   cout << "Normal constructor allocating ptr" << endl;

   // allocate memory for the pointer;
   ptr = new int;
   *ptr = len;
}

Line::Line(const Line &obj) {
   cout << "Copy constructor allocating ptr." << endl;
   ptr = new int;
   *ptr = *obj.ptr+2; // copy the value
}

Line::~Line(void) {
   cout << "Freeing memory!" << endl;
   delete ptr;
}

int Line::getLength( void ) {
   return *ptr;
}

void display(Line obj) {
   cout << "Length of line : " << obj.getLength() <<endl;
}

// Main function for the program
int main() {

    //vector <Line> myObject;
    Line line(10);

    /*myObject.push_back(line);

    Line line2(6);
    myObject.push_back(line2);

    for (unsigned int i = 0; i<myObject.size(); i++){
        cout<<" Length : "<<myObject[i].getLength()<<endl;
    }*/
   //Line line2 = line;
   //Line line3 = line;
    display(line);
   //display(line2);



   return 0;
}
