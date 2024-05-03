#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter the value of a:-";
    cin>>a;
    cout<<"Entet the value of b:-";
    cin>>b;
     c=a+b;
    cout<<"Sum is:-"<<c;
    return 0;
}