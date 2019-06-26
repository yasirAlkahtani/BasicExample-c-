#include<iostream>
#include<string>


class bioClass {

public:
    void setBio(int );
    void getBio();
private:
    int Alt;

}obj;
void bioClass::setBio(int A){
    Alt = A;
    /*Name = N;
    Height = H;
    Job = J;*/
}

void bioClass::getBio(){
   // std::cout<<"Meine Name: "<<Name<<std::endl;
    std::cout<<"Ich bin "<<Alt<<"Jahre Alt"<<std::endl;
    //std::cout<<"Mein Größe: "<<Height<<std::endl;
    //std::cout<<"Ich bin "<<Job<<"von Beruf"<<std::endl;
}

int main(){

    obj.setBio(10);
    obj.getBio();
    return 0;
}
