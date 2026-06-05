#include<bits/stdc++.h>
using namespace std;

class LibraryUser {
    public:
    virtual void registerAccount()=0;
    virtual void requestBook()=0;
    virtual ~LibraryUser() {}
};

class kidUser : public LibraryUser {
    public:
    int age;
    string bookType;
    void registerAccount() override{
        if(age<12)
            cout<<"You have successfully register under kids Account"<<endl;
        else
            cout<<"Sorry, Age must be lesser than 12 to register as a kid"<<endl;
    }
    void requestBook() override {
        if(bookType == "kids")
            cout<<"Book Issued successfully, please return the book within 10 days"<<endl;
        else
            cout<<"Oops,you are allowed to take only lids books"<<endl;
    }
};

class adultUser : public LibraryUser {
    public:
    int age;
    string bookType;
    void registerAccount() override{
        if(age>12)
            cout<<"You have successfully register under adult Account"<<endl;
        else
            cout<<"Sorry, Age must be greter than 12 to register as a adult"<<endl;
    }
    void requestBook() override {
        if(bookType == "Fiction")
            cout<<"Book Issued successfully, please return the book within 7 days"<<endl;
        else
            cout<<"Oops,you are allowed to take only adult fiction books"<<endl;
    }
};

int main(){

    cout<<"Test case1: KidUser"<<endl;
    kidUser kid;
    kid.age=10;
    kid.registerAccount();

    kid.age=18;
    kid.registerAccount();

    kid.bookType="kids";
    kid.requestBook();

    kid.bookType="Fiction";
    kid.requestBook();

    cout<<"Test case2: adultUser"<<endl;

    adultUser adult;
    adult.age=5;
    adult.registerAccount();

    adult.age=23;
    adult.registerAccount();

    adult.bookType="kids";
    adult.requestBook();

    adult.bookType="Fiction";
    adult.requestBook();

}