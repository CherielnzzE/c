#include <iostream>
using namespace std;

void foo() {
    cout<<"It's foo!!!"<<endl;
}
void bar() {
    cout<<"It's bar!"<<endl;
}
void abc() {}

int main() {
    cout << "Hello, World!" << endl;
    bar();
    foo();
    return 0;
}