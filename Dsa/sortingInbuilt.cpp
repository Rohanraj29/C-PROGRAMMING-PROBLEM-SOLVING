#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector <int> v(4);
for(int i=0;i<4;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
for(int i=0;i<4;i++){
    cout<<v[i]<<endl;
}
return 0;
}