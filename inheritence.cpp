#include <iostream>

using namespace std;

//base class
class shape {
    public:
        void setWidth(float W){
             Width = W;
        }
        void setHeight(float H){
             Height = H;
        }
    protected:
        float Height, Width;
};
//derived class
class rectangle : public shape {
    public :
        float getArea (){
            return Height*Width;
        }
};

int main (void){
    rectangle rect;

    rect.setHeight(2.4);
    rect.setWidth(1.2);

    cout<<"Area : "<<rect.getArea()<<" satuan luas"<<endl;

}
