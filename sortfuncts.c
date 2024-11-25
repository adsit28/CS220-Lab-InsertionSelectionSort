/** sortfuncts.c
 * ===========================================================
 * Name: 
 * Section: 
 * Project: Selection / Insertion Sorts
 * ===========================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "sortfuncts.h"

void fillArray(int array[]) {
    // fill array with random ints from 0 to 29
    for (int i = 0; i < N; i++) {
        array[i] = (int)random() % 30;
    }
}

void printArray(int nums[]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

void insertionSort(int numbers[], int numbersSize) {

}

void selectionSort(int numbers[], int numbersSize) {

}