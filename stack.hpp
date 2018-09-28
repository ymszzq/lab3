//
// Created by Administrator on 2018-09-28.
//
#include <iostream>
#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

#endif //LAB3_STACK_HPP


class Stack {
private:
    static constexpr int MAX{10};
    int intArray[MAX];
    int index;
    int number;
public:
    Stack();
    bool push(int i);
    void pop();
    int top()const;
    bool empty()const;
    bool full()const;
    std::string print()const;

};