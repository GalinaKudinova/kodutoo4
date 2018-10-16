#include <QCoreApplication>
#include<iostream>
#include<conio.h>

using namespace std;
const int a=5;
const int b=3;


int main()
{
    int A[a]= {3,5,8,12,16};
    int B[b]= {6,11,12};
    int *C= new int [a+b];

    int i=0;
    int j=0;


    for(int k = 0; k < a+b; k++)
       {
        if ((A[i]<B[j]||j>=b )&& i<a)
        {
            C[k]=A[i];i++;
        }
         else if(A[i]==B[j])
        {
            C[k]=B[j];j++;
        }
         else
        { C[k]=B[j];j++;
        }
         }
         for (int k=0; k<a+b; k++)
             cout <<C[k]<<" ";

        // cout<<C[i]<<endl;
       }




