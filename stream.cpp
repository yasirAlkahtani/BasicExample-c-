#include<iostream>>
#include<string>
#include<sstream>

using namespace std;

int main(void){

    string mystr;
    int Jahr;

    cout<<"masukkan angka : ";
    getline(cin, mystr);
    stringstream(mystr)>>Jahr;
    cout<<Jahr<<endl;

    cout<<"masukkan angka : ";
    getline(cin, mystr);
    stringstream(mystr)>>Jahr;
    cout<<Jahr<<endl;


}
