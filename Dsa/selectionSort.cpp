#include<iostream>
using namespace std;
int main()
{
    int a[4]={4,2,0,6};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        cout<<" "<<a[i];
    }
}