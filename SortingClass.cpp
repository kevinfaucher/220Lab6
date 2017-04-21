#include "SortingClass.hpp"
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>
#include <ctime>
using namespace std;

SortingClass::SortingClass(int si, int sm, int la) {
    //(5 pts) random numbers should be between the smallest and largest numbers,
    //in-order should start at smallest
    //reverse order should start at largest
    //all should be of size size
}

SortingClass::SortingClass(int si) {
    //(2 pts) largest should be 5000, smallest should be 10
}

SortingClass::SortingClass() {
    // (2 pts)Start with a smaller size to make sure your sorting algorithms are working
    // and build up to 50000
}

int *SortingClass::copyArr(string s) {
    //(7 pts) based on s (which can be “rev”, “ord”, or “rand”, creates a new array,
    // copies over the old array, and returns the address of the new array
}

void SortingClass::selectionSort(int arr[]) {
    // (4 pts) Does what you’d think to the array passed into the method.
    int tmp;

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << endl;

    for (int i = 0; i < 5 - 1; i++)

        for (int j = i + 1; j < 5; j++)

            if (arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << endl;
   
}

void SortingClass::insertionSort(int arr[], int length) {
   int i,j,tmp;
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

void SortingClass::quickSort(int first, int last, int *arr[]) {
   int min = (first+last)/2;
    //cout<<"QS:"<<first<<","<<last<<"\n";

    int i = first;
    int j = last;
    int pivot = arr[min];

    while(first<j || i<last)
    {
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;

        if(i<=j){
            swap(i,j,arr);
            i++;
            j--;
        }
        else{
            if(first<j)
                quickSort(arr, first, j);
            if(i<last)
                quickSort(arr,i,last);
            return;
        }
    }
}

int SortingClass::partition(int first, int last, int arr[]) {
    //(7 pts)again, because you're only partitioning part of the array
}

void SortingClass::merge(int arr[], int f, int m, int l) {
    // (7 pts)f is first index, m is middle index (end of first sorted array portion)
    // and l is the last index of the second array portion
}

void SortingClass::mergeSort(int arr[], int low, int hi) {
    // (4 pts)keeps dividing the portion of the array between the low index and the hi
    // index by dividing by 2
}

void SortingClass::bubbleSort(int arr[],int n){
for (int i = 0; i < n; ++i)
    for (int j = 0; j < n - i - 1; ++j)
      if (arr[j] > arr[j + 1])
     {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
  }
void SortingClass::compareSorts() {
    clock_t startTime = clock();
    double timePassed;
    //SELECTION SORT
    int *arr = copyArr("rand");
    startTime = clock();
    selectionSort(arr);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Selection: rand " << timePassed << endl;
    arr = copyArr("rev");
    startTime = clock();
    selectionSort(arr);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Selection: rev " << timePassed << endl;
    arr = copyArr("ord");
    startTime = clock();
    selectionSort(arr);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Selection: ord " << timePassed << endl;
    //INSERTION
    arr = copyArr("rand");
    startTime = clock();
    insertionSort(arr);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Insertion: rand " << timePassed << endl;
    arr = copyArr("rev");
    startTime = clock();
    insertionSort(arr);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Insertion: rev " << timePassed << endl;
    arr = copyArr("ord");
    startTime = clock();
    insertionSort(arr);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Insertion: ord " << timePassed << endl;
    //QUICKSORT
    arr = copyArr("rand");
    startTime = clock();
    quickSort(0, size, arr);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Quick: rand " << timePassed << endl;
    arr = copyArr("rev");
    startTime = clock();
    quickSort(0, size, arr);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Quick: rev " << timePassed << endl;
    arr = copyArr("ord");
    startTime = clock();
    quickSort(0, size, arr);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Quick: ord " << timePassed << endl;
    //MERGE
    arr = copyArr("rand");
    startTime = clock();
    mergeSort(arr, 0, size - 1);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Merge: rand " << timePassed << endl;
    arr = copyArr("rev");
    startTime = clock();
    mergeSort(arr, 0, size - 1);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Merge: rev " << timePassed << endl;
    arr = copyArr("ord");
    startTime = clock();
    mergeSort(arr, 0, size - 1);
    timePassed = clock() - startTime;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete [] arr;
    cout << "Merge: ord " << timePassed << endl;
}