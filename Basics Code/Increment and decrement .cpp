#include <iostream>

using namespace std;

int main()
{
    int x=5;
    int y=x++;
    // post increment
    cout<<x<<endl;
    cout<<y<<endl;
    // pre increment
    int a = 7;
    int b = ++a;
    cout<<a<<endl;
    cout<<b<<endl;

    //mixture of pre increment and post increment
    int i=5,j;
    j = 2* i++ + 2* i++;
    cout<<j<<endl;
    cout<<i<<endl;

    return 0;
}
