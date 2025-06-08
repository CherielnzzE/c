#include <iostream>
using namespace std;

void foo() {
    cout<<"It's foo!!!"<<endl;
}
void bar() {
    cout<<"It's bar!"<<endl;
}
void abc() {
    cout << "hi,abc" << endl;
}

int main() {
    cout << "Hello, World!" << endl;
    foo();
    bar();
    abc();
    return 0;
}