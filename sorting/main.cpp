
#include "../container.hpp"
#include "sorting.hpp"


int main(){

    VectorInt v{-98,-1,8,0,4,48};
    SelectionSort(v);
    Print(v);
    return 0;
}