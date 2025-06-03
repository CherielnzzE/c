#include <iostream>
using namespace std;

void foo() {}
void bar() {}
void abc() {
    cout << "hi,abc" << endl;
}

int main() {
    cout << "Hello, World!" << endl;
    abc();
    return 0;
}