
#include "container.hpp"
#include "sorting/sorting.hpp"
#include "numbers/lib_num.hpp"

int main(){

    // VectorInt v{-98,-1,8,0,4,48};
    // SelectionSort(v);
    VectorInt v=ListFactors(36);
    Print(v);
    // Print(v);
    return 0;
}