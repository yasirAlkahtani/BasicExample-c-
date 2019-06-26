#include<iostream>>
#include<string>
#include<sstream>

using namespace std;
struct movieListe{
    string title;
    int Jahr;
}mine, yours;

int main(void){

    string mystr;

    cout<<"mein Title : "<<endl;
    cin>>mine.title;
    cout<<"Jahr : "<<endl;
    cin>>mine.Jahr;

    cout<<"Typ Title : "<<endl;
    cin>>yours.title;
    cout<<"Typ Jahr : "<<endl;
    //getline(cin, mystr);
    cin>>yours.Jahr;

    cout<<" meine Lieblingsfilme ist : "<<mine.title<<" ("<<mine.Jahr<<" )"<<endl;
    cout<<" deine Lieblingsfilme ist : "<<yours.title<<" ("<<yours.Jahr<<" )"<<endl;

}
