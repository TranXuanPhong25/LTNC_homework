#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl<<a+b<<endl;
    swap(a[0],b[0]);
    printf("%s %s",a.c_str(),b.c_str());
    
    return 0;
}
