//
// Created by Administrator on 2018-09-28.
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include <iostream>
#include "stack.hpp"


TEST_CASE("A new stack is full", "[stack]") {
    Stack tester;
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    REQUIRE(tester.empty() == false);
    REQUIRE(tester.full() == true);
}
TEST_CASE("A push when stack is full", "[stack]") {
    Stack tester;
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    tester.push(1);
    REQUIRE(tester.push(1) == false);

}

TEST_CASE("A new stack is empty", "[stack]") {
    Stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}
TEST_CASE("push", "[stack]") {
    Stack tester;
    REQUIRE(tester.push(1)==true);
    REQUIRE(tester.push(2) == true);
    REQUIRE(tester.push(3) == true);


}
TEST_CASE("pop", "[stack]") {
    Stack tester;
    tester.push(1);
    tester.push(2);
    tester.pop();
    tester.pop();
    REQUIRE(tester.empty()==true);

}

TEST_CASE("top", "[stack]") {
    Stack tester;
    tester.push(1);
    tester.push(2);
    REQUIRE(tester.top()==2);

}

TEST_CASE("print", "[stack]") {
    Stack tester;
    tester.push(1);
    tester.push(2);
    REQUIRE(tester.print().compare("1,2,")==0);

}