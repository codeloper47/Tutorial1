#include <iostream>
using namespace std;

int main() {
    int a=10,b=20;
    if(a>5 and b>5){
        cout<<"yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
    // operator precedence 
    int ans = 2*10+4/2-8*12/4+3;
    cout<<ans;
    
	return 0;
}
