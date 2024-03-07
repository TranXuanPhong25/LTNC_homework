#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Object {
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main() {
    Object input;
    cin>>input.age>>input.first_name>>input.last_name>>input.standard;
    cout<<input.age<<" "<<input.first_name<<" "<<input.last_name<<" "<<input.standard;
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
