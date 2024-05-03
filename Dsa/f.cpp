#include<iostream>
using namespace std;
int main(){
    int search;
    cout<<"Enter the element to be searched ";
    cin>>search;
    int a[4]={2,4,6,8};
    for(int i=0;i<4;i++){
            if(a[i]==search){
                cout<<"Element found ";
            }
    }
}
