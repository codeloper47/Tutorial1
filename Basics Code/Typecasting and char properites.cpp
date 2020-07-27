#include <iostream>
using namespace std;
int main() {
    //properties of char
    char x='a';
    cout<<x<<endl;
    // while arithmetic operation char uses its ascii value.
    cout<<x+1<<endl;

    // from char number to integer number;
    char y='8';
    cout<<typeid(y-'0').name()<<endl;
    cout<<(y-'0' + 10)<<endl;

    // typecasting
    cout<<char(68)<<endl; //(char)68
    cout<<int('b')<<endl; // (int)'b'

    // typecasting to float
    int a=10,b=3;
    cout<<a/b<<endl;
    cout<<(float)a/b<<endl;

    //double to float
    double p =10.42;
    int ans = int(p)+1;
    cout<<ans<<endl;

    // sum product division of int with int is an int.
    // sum product division of int and float is float.
    int m = 9;
    float f = 2.33345;
    cout<<m*f<<endl;

    // printing upto a particular decimal ( u can use printf )
    printf("%0.3f\n",m*f);

    // division
    int n1=8,n2=6;
    cout<<n2/n1<<endl;  //will give u zero
    cout<<n2/float(n1)<<endl; // will give output
    cout<<7/9.0<<endl;  //for direct numeric divison (where num<denom)
}
