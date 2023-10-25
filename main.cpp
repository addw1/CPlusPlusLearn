#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "./sortTem.h"


int main( ) {

    int a[6] = {6,5,4,3,2,1};
    SortTem::sort(a, 6);
    for(int i = 0; i < 6; i++)
        std::cout << a[i] << std::endl;

    return EXIT_SUCCESS;
}
