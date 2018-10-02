#include <QCoreApplication>
#include<iostream>
#include<conio.h>
using namespace std;

const int arrA_size= 5;
const int arrB_size= 3;
int const arrA [arrA_size]= {3,5,8,12,16};
int const arrB [arrB_size]= {6,11,12};
int static*arrC [arrA_size+arrB_size];


int joinSortedArray (int arrA [], int arrA_size, int arrB [], int arrB_size, int arrC []){



    int i=0;
    int j=0;
    for (int k=0; k<arrA_size+arrB_size; k++){
        if (arrA[i]<arrB[j]&&i!=arrA_size)
            arrC[k]=arrA[i++];
        else if (j!=arrB_size)
            arrC[k]= arrB[j++];


    }



}
int main(){
 joinSortedArray (arrA, arrA_size, arrB, arrB_size, arrC)
 for (int k=0; k<arrA_size+arrB_size; k++){
     cout<< arrA[arrA_size];
     cout << arrB[arrB_size];
     cout<<arrC[k];}
}
