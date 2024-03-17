#include<iostream>
using namespace std;
int main()
{
    int side1;
    int side2;
    int side3;
    cout<<"Enter side:-";
    cin>>side1;
    cout<<"Enter side:-";
    cin>>side2;
    cout<<"Enter side:-";
    cin>>side3;
    if(side1==side2&&side2==side3&side3==side1){
        cout<<"It is an eqilateral triangle";
    }
    else
    if(side1==side2 || side2==side3 || side3==side1){
        cout<<"It is an isoceles triangle";
    }
    else{
        cout<<"It is an scalene triangle";
    }
    return 0;
}