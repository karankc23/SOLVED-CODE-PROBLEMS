#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    for(int j=n-i;j>=0;j--)
    cout<<"  ";
    for(int m=i;m>1;m--)
    cout<<m<<" ";
    for(int k=1;k<=i;k++)
    cout<<k<<" ";
    cout<<endl;
    }
}