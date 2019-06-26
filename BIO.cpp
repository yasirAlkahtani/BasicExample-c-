#include<iostream>
#include <string>

using namespace std;

class BIO{
    public:
        void setBio(int, string, string, string);
        void getBio();
    private:
        int Alt;
        string bio[3];
}objekt;

void BIO::setBio(int A, string N, string G, string J){
    Alt = A;
    bio[0] = N;
    bio[1] = G;
    bio[2]= J;
}
void BIO::getBio(){
    cout<<"Alter : "<<Alt<<endl;
    cout<<"Name : "<<bio[0]<<endl;
    cout<<"Größe : "<<bio[1]<<endl;
    cout<<"Beruf : "<<bio[2]<<endl;
}
int main(){
    objekt.setBio(24, "Yasir", "162", "Programierer");
    objekt.getBio();
    return 0;
}
