/**
 * arrays.cpp
 *
 * EECS 183
 * Lab 6: Array exercises
 *
 * Casey Lee
 * leecasey
 *
 * We will be working and solving arrays.
 */

#include "arrays.h"
#include <iostream>

using namespace std;

void print_array(const int array[], int size) {
    cout << "{" << array[0];
    for (int i = 1; i < size; i++) {
        cout << ", " << array[i];
    }
    cout << "}" << endl;
    return;
}

void negate_all(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] *= -1;
    }
}

bool is_sorted(const int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        if(arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}
    
void copy_positive_elements(const int source[], int target[], int size) {
    int j = 0;
    for(int i = 0; i < size; i++) {
        target[i] = 0;
        if(source[i] > 0) {
            target[j] = source[i];
            j++;
        }
    }
}
    
void sort_array(int arr[], int size) {
    int temp = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

