
#include "container.hpp"
#include "sorting/sorting.hpp"
#include "numbers/lib_num.hpp"
#include "strings/string_manip.hpp"

int main(){

    // VectorInt v{7,-1,-2,8,10,0};
    // String binary=DecimalToBinary(4);
    // cout<<binary;
    // MergeSort(v,0,v.size());
    string sentence="Hello this is test string";
    VectorString res=split(sentence,' ');
    for(auto it=res.begin();it!=res.end();it++)
        cout<<*it<<",";
    cout<<endl;
    // Print(v);
    return 0;
}