#include <iostream>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	int ans = 0;
	for(int i=0;i<s.length();i++){
	    if( ( s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z') ) {
	        ans++;
	    }
	}
	cout<<ans;
	return 0;
}
