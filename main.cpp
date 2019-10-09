
#include "container.hpp"
#include "sorting/sorting.hpp"
#include "numbers/lib_num.hpp"

int main(){

    VectorInt v{7,-1,-2,8,10,0};
    // String binary=DecimalToBinary(4);
    // cout<<binary;
    MergeSort(v,0,v.size());
    Print(v);
    return 0;
}