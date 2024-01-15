/*
default initialisation of an array of all built-in data types
- if we leave { } curly braces blank only then the values of elements will be 0.
= if we give anyother number in { } then the 0th index value will be changed rest all will be 0.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    //declaring an array wihtout giving it and element's values
    int arr[1000] = {};

    //printing the element's values 
    cout<<"Values of array with blank curly brances { } are:";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr2[1000] = {8};
    cout<<"Values of array with ANY NUMBER in curly brances { } are:";
    for(int i =0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    int arr3[1000] ={0};
    cout<<"Values of array with 0 in curly brances { } are:";
    for(int i =0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}
