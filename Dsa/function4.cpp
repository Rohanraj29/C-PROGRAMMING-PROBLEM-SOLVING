#include<iostream>
using namespace std;
void ptrn(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cout<<"*";
    }
    cout<<endl;
    }
}
int main()
{
    int c;
    cout<<"Enter the maximum pattern size:-";
    cin>>c;
    ptrn(c);
    return 0;
}