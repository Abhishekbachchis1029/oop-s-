#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class Publication{
    protected :
        string Title;
        float price;
    public:
        Publication(){
            Title="random";
            price=0;
        }
        Publication(string A,float B){
            Title=A;
            price=B;
        }
        void getdata(){
            cout<<"enter the title:\n";
            cin>>this->Title;
            cout<<"enter the price\n";
            cin>>this->price;
        }
        void showdata(){
            cout<<"Title:";
            cout<<this->Title;
            cout<<"price:";
            cout<<this->price;
        }
};
class book:public Publication{
    protected:
        int page_count;
    public:
        book(){
            page_count=0;
        }
        book(int x){
            page_count=x;
        }
        void getdata(){
            Publication::getdata();
            cout<<"enter the number of page:";
            cin>>this->page_count;
        }
        void showdata(){
            Publication::showdata();
            cout<<"total page:";
            cout<<this->page_count;
        }
};
class tape:public Publication{
    protected:
        float minute;
    public:
        tape(){
            minute=0;
        }
        tape(float x){
            minute=x;
        }
        void getdata(){
            Publication::getdata();
            cout<<"enter the number of minutes:\n";
            cin>>this->minute;
        }
        void showdata(){
            Publication::showdata();
            cout<<"minutes:"<<endl;
            cout<<this->minute;
        }
};
int main(){
    book b1,b2(243),b3;
    b3.getdata();
    b3.showdata();
    b1.getdata();
    b1.showdata();
    b2.getdata();
    b2.showdata();
    tape t1,t2(23.56),t3;
    t1.getdata();
    t1.showdata();
    t2.getdata();
    t2.showdata();
    t3.getdata();
    t3.showdata();
}
