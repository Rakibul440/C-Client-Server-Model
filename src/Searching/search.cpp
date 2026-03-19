#include <iostream>
#include "search.h"
using namespace std;

void Search ::LinearSearch(int arr[],int length){

    cout << "\n==== Result of Linear search ====" <<endl;

    for (int i = 0; i < length; i++){
        cout << arr[i] << "\t";
    }
    cout << "\n";

}