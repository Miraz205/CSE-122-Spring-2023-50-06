#include<iostream>
using namespace std;
int main()
{
    int a;
    int b, c;
    cin>>a;
    if(a%4==0 || a%7==0 || a%47==0 ||a%74==0 ||a%447==0 ||a%474==0 ||a%744==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
