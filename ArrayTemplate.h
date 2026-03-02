#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//Заповнення масиву випадковими числами від А до В
template <typename Type>
void randArray(Type arr[], int size, int A=0, int B=10) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand()%(B-A+1) + A;
    }
}

//Виведення масиву на екран
template <typename Type>
void printArray(Type arr[], int size, int Wcout = 4) {
    for (int i = 0; i < size; i++) {
        cout.width(Wcout);
        cout << arr[i];
    }
    cout << endl;
}