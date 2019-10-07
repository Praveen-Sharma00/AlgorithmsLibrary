#include "sorting.hpp"

void InsertionSort(VectorInt &v){
    for(int i=1;i<v.size();i++){
        int val=v[i];
        int pos=i;
        while(pos>0 && v[pos-1]>val){
            v[pos]=v[pos-1];
            pos--;
        }
        v[pos]=val;
    }
}

int PartitionArray_A(VectorInt &v,int start,int end){
    int pivot=v[end];
    int pIndex=start;
    for(int i=start;i<end;i++){
        if(v[i]<=pivot){
            swap(v[i],v[pIndex]);
            pIndex++;
        }
    }
    swap(v[pIndex],v[end]);
    return pIndex;
}
void QuickSort_A(VectorInt &v,int start,int end){
   int pIndex;
   if(start<end){
       pIndex=PartitionArray_A(v,start,end);
       QuickSort_A(v,start,pIndex-1);
       QuickSort_A(v,pIndex+1,end);
   }
}


int PartitionArray_B(VectorInt &v,int start,int end){
    int pivot=v[start];
    int i=start,j=end;
    while(i<j){
        while(v[i]<=pivot){
            i++;
        }
        while(v[j]>pivot){
            j--;
        }
        if(i<j){
            swap(v[i],v[j]);
        }
    }
    swap(v[j],v[start]);
    return j;
}
void QuickSort_B(VectorInt &v,int start,int end){
   int pIndex;
   if(start<end){
       pIndex=PartitionArray_B(v,start,end);
       QuickSort_B(v,start,pIndex);
       QuickSort_B(v,pIndex+1,end);
   }
}


void Merge(VectorInt &v,int start,int mid,int end){
    VectorInt temp(end-start+1);
    int i=start,j=mid+1,k=0;
    while(i<=mid && j<=end){
        if(v[i]<=v[j]){
            temp[k]=v[i];
            i++;
            k++;
        }
        else{
            temp[k]=v[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        temp[k]=v[i];
        i++;k++;
    }
    while(j<=end){
        temp[k]=v[j];
        j++;k++;
    }
    for(int i=start;i<=end;i++){
        v[i]=temp[i-start];
    }
}
void MergeSort(VectorInt&v,int start,int end){
    if(start<end){
        int mid=(start+end)/2;
        MergeSort(v,start,mid);
        MergeSort(v,mid+1,end);
        Merge(v,start,mid,end);
    }
}


// void SelectionSort(VectorInt &v){
//     int min;
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         min=i;
//         for(int j=i+1;j<n;j++){
//             if(v[j]<v[min]){
//                 min=j;
//             }
//         }
//         swap(v[min],v[i]);
//     }
// }
void SelectionSort(VectorInt &v){
    int max;
    int n=v.size();
    for(int i=0;i<n-1;i++){
        max=i;
        for(int j=i+1;j<n;j++){
            if(v[j]>v[max]){
                max=j;
            }
        }
        swap(v[max],v[i]);
    }
}