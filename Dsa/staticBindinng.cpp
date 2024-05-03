//it is also known as function overloading/method overloading. in static binding both base class and derived class has same
//function name but different parameter and which function is executed it can be decided at compile time.
#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<"Add:-"<<a+b<<endl;
}
void add(double a,double c){
    cout<<"Add"<<a+c;
}
int main()
{
int a;
int b;
float c;
add(4.4,4.4);
}