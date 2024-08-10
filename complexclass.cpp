#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Mycomplex{
    private :
        double real ;
        double imag;
    public :
        Mycomplex(){
                        // default constructor which takes default value=0,0 for both real and imaginary part of the complex number it already exit even if we do not initialise it and gets executed on deceleration of each object
        }
        Mycomplex(double x,double y){// this is the parameterised constructor which gives the value passed as argument in the constructor to the data member of the class 
            real = x;
            imag = y;
        }
        void get_data(){//function used for input through the keyboard as private data member can be accesed through memeber function only not directly from main 
            cout<<"enter the real part"<<endl;
            cin>>real;
            cout<<"enter the imaginary part"<<endl;
            cin>>imag;
        }
        void display(){
            cout<<"real="<<real<<"imaginary="<<imag<<endl ;
            cout<<"complex number="<<real<<"+i"<<imag<<endl;
        }
        void additon_of_complex_number(Mycomplex x,Mycomplex y){
            real=x.real+y.real;
            imag=x.imag+y.imag;
        }
        Mycomplex addition_of_complex_number(Mycomplex y){
            Mycomplex t;
            t.real=real+y.real;
            t.imag=imag+y.imag;
            return t;
        }
        void Multiplication_complex_number(Mycomplex x,Mycomplex y){
            real=x.real*y.real-x.imag*y.imag;
            imag=x.real*y.imag+y.real*x.imag;
        }
        Mycomplex Multiplication_complex_number(Mycomplex y){
            Mycomplex M;
            M.real=real*y.real-imag*y.imag;
            M.imag=imag*y.real+real*y.imag;
            return M;
        }
        Mycomplex operator +(Mycomplex y){ //// this is an overloading of + operator which when called is in the form c1.operator+(c2)
            Mycomplex t;
            t.real=real+y.real;
            t.imag=imag+y.imag;
            return t;
        }
        Mycomplex operator *(Mycomplex y){/// similarly this is the overloading of the multiplication operator 
            Mycomplex M;
            M.real=real*y.real-imag*y.imag;
            M.imag=imag*y.real+real*y.imag;
            return M;
        }
};
        int main(){
            Mycomplex c1(0.0,0.0),c2(2.3,4.5),c3(6.7,9.8),c4,c5,c6,c7,c8,c9,c0,c11;
            c0.display();
            c1.display();
            c4.additon_of_complex_number(c1,c2);//simple calling of add function
            c5.Multiplication_complex_number(c2,c3);//simple calling of multiplication fuction
            c6=c4.addition_of_complex_number(c5);//overloaded add function 
            c9=c2.Multiplication_complex_number(c5);//overloaded multiplication function
            c7=c6*c5;//overloaded * operator == c6.operator *(c5)
            c8=c3+c4;//overloaded + operator == c8.operator *(c4)
            c4.display();
            c5.display();
            c6.display();
            c7.display();
            c8.display();
            c9.display();
            c11.get_data();
            c11.display();
            return 0;
        }

           