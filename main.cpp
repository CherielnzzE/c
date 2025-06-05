#include <iostream>
using namespace std;

void foo() {}
void bar() {
    cout<<"It's bar!"<<endl;
}
void abc() {}

int main() {
    cout << "Hello, World!" << endl;
    bar();
    return 0;
}