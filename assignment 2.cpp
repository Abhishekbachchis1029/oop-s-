#include<iostream>
#include<stdlib.h>
#include<stdio.h>// these are the header files that are included inthe path and have function declaration in them
using namespace std;/// this is the collection of identifier whose name has be delared in the standard and their defination has been defined in the included files
struct date_of_birth{
    int day;
    int month;
    int year;
};
struct Address{
    int house_no;
    string area;
    string city;
};
Address* addss;
class Database{
    private://these are the data members of the class 
        string name;
        int roll_no;
        string Class;
        char division ;
        date_of_birth *DOB;
        string Blood_group;
        long long contact;
        Address *address;
        int driving_no;
        static int count;
    public:
        Database(){
            count=0;

            //default constructor
        }
        Database(Database &d){//copy constructor in which we have pased the refrence of the object whose data we have to copy
              name=d.name;
              roll_no=d.roll_no;
              Class=d.Class;
              division=d.division;
              DOB=d.DOB;
              Blood_group=d.Blood_group;//copy constructor in which we have pased the refrence of the object whose data we have to copy
              contact=d.contact;
              address=d.address;//copy constructor in which we have pased the refrence of the object whose data we have to copy
              driving_no=d.driving_no;//copy constructor in which we have pased the refrence of the object whose data we have to copy
              count=d.count+1;
        }
        void getdata(){
            cin>>this->name;
            cin>>this->roll_no;
            cin>>this->Class;
            cin>>this->division; 
            cin>>this->Blood_group;
            cin>>this->DOB->day;
            cin>>this->DOB->month;
            cin>>this->DOB->year;
            cin>>this->contact;
            cin>>this->address->house_no;
            cin>>this->address->area;
            cin>>this->address->city;
            cin>>this->driving_no;
        }
        void displaydata(){
            cout<<"Name:"<<this->name<<endl;
            cout<<"roll_no:"<<this->roll_no<<endl;
            cout<<"class:"<<this->Class<<endl;
            cout<<"Division:"<<this->division<<endl;
            cout<<"date_of_birth:"<<this->DOB->day<<"/"<<this->DOB->month<<"/"<<this->DOB->year<<endl;
            cout<<"contact:"<<this->contact<<endl;
            cout<<"address:"<<this->address->house_no<<"-"<<this->address->area<<"/"<<this->address->city<<endl;
            cout<<"Name:"<<this->name<<endl;
            cout<<"Name:"<<this->name<<endl;
            cout<<"Name:"<<this->name<<endl;
            cout<<"Name:"<<this->name<<endl;
        }
};

