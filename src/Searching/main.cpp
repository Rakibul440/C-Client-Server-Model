#include <iostream>
#include "search.h"

using namespace std;


int main(){

    int arr[5] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);

    Search ls;
    ls.LinearSearch(arr,n);

    return 0;
}