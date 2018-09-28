#include <string>
#include <iostream>
#include "stack.hpp"

using namespace std;


Stack::Stack() {
    index = -1;
}
// this function add value to stack
// @ param i is the int you want to add
//@ return true if push success, false otherwise
//
//
bool Stack::push(int i) {
    if (index == (MAX - 1))
        return false;

    if (index == -1) {
        index = 0;
        intArray[index] = i;
    } else {
        intArray[++index] = i;
    }
    return true;
}
//
//this function take out the top int in stack
//
//
void Stack::pop() {
    if (index != -1)
        index -= 1;
}
// this function return top value without change stack.
//@ return a top value
int Stack::top() const{
    return intArray[index];
}
//this function check if stack is empty
//@ return true if empty, false othervise
bool Stack::empty() const{
    return index == -1 ? true : false;
}
//this function check if the stack is full;
//@ return true if empty , false otherwise
bool Stack::full() const{
    return index == 9 ? true : false;
}
// this function return the element in stack as array, and print content out/
//@return a str of stack
string Stack::print() const{
    string str = "";
    for (int i = 0; i <= index; i++) {
        str += to_string(intArray[i]);
        str += ",";
        cout << "the " << i << " one is:" << intArray[i];
//          cout<<str;
//          cout<<intArray[i]<<endl;
    }
    return str;


}





