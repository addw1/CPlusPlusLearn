#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "./sortTem.h"

class base{

};
class A: public base{
private:
    int a = 2;
    int b;
    int c;
public:
    A(): a(1), b(2), c(3){

    }
};
void test01(const int& a){

}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int main( ) {
    int a = 1;
    int b = 2;
    std::cout << "a" << a << std::endl;
    std::cout << "b" << b << std::endl;
    //int& a = a;
    swap(a, b);
    base* d = new base();
    std::cout << "a" << a << std::endl;
    std::cout << "b" << b << std::endl;

}
