#include<iostream>
#include "StackClass.cpp"
using namespace std;

int main() {
    Stack S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50); // here stack will be overflowed as the size of the stack is 4 by default

    cout << "isEmpty : " << S.isEmpty() << endl;
    cout << "topElement : " << S.top()<< endl;
    cout<<"Popped element : " << S.pop() << endl;
    cout << "topElement : " << S.top()<< endl;
    cout << "Size : " << S.getSize()<< endl;

    return 0;
}