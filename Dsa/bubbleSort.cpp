#include<iostream>
using namespace std;
int main()
{
    int a[4]={8,2,6,1};
    for(int i=0;i<4-1;i++){
    for(int j=0;j<4-1;j++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
}