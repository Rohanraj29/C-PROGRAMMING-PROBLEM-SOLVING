#include<iostream>
using namespace std;
int main()
{
    int length;
    int breadth;
    int area;
    int perimeter;
    cout<<"Enter the length of a rectangle:-";
    cin>>length;
    cout<<"Enter the breadth of a rectangle:-";
    cin>>breadth;
    area=length*breadth;
    perimeter=(length+breadth)*2;
    cout<<"Area of rectangle is:-"<<area<<endl;
    cout<<"Perimeter of rectangle is:-"<<perimeter<<endl;
    if(area>perimeter){
        cout<<"Area of rectangle is greater than its perimeter";
    }
    else{
        cout<<"Perimeter of rectangle is greater than its area";
    }
   return 0;
}