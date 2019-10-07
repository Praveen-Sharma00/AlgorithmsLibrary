#include "container.hpp"

void Print(VectorInt &v){
    for(auto it=v.begin();it!=v.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}