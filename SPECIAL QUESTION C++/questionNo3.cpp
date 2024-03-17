#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout<<"Enter x coordinate:-";
    cin>>x;
    cout<<"Enter y coordinate:-";
    cin>>y;
    if(x==0 && y==0){
        cout<<"It lies on an origin";
    }
    else
    if(x==0){
        cout<<"It lies on x axis";
    }
    else
    if(y==0){
        cout<<"It lies on y axis";
    }
    else{
        cout<<"The point does not lie on x axis y axis and origin";
    }
    return 0;
}