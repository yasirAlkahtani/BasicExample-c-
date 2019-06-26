#include <iostream>
#include <cstring>

using namespace std;

struct Books {
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};
 int main(){
    struct Books book1;
    struct Books book2;
    //book spezifikation 1
    strcpy(book1.title, "Buch für C++ Programieresprache");
    strcpy(book1.subject, "C++ Programieren");
    strcpy(book1.author, "Yasir Alkahtani");
    book1.book_id =1234;

    //book spezifikation 2
    strcpy(book2.title, "Buch für C Programieresprache");
    strcpy(book2.subject, "C Programieren");
    strcpy(book2.author, "Yasir Alkahtani");
    book2.book_id =1234;

    //Informationen Des ersten Buches
    cout<<"Title von Buch 1: "<<book1.title<<endl;
    cout<<"Subject von Buch 1: "<<book1.subject<<endl;
    cout<<"Schriftler von Buch 1: "<<book1.author<<endl;

    //Informationen Des zweiten Buches
    cout<<"Title von Buch 2: "<<book2.title<<endl;
    cout<<"Subject von Buch 2: "<<book2.subject<<endl;
    cout<<"Schriftler von Buch 2: "<<book2.author<<endl;
    return 0;
 }
