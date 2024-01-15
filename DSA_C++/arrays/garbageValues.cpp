/*
what are the element's values when we declare an array in Stack Memory and do not initialise it ?
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    //declaring an array of size 100, this will allocate variable a 100 block stack memory each of 4 bytes for integer
    int a[100]; 
    //checking what is the default value for the elements before initialising the array
    //garbage values will be printed
    cout<<"default elements of array are: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}