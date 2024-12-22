#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "merge.h" 

TEST_CASE("mergeSort: Single Element Array", "[mergeSort]") {
    int arr[] = { 5 };
    mergeSort(arr, 1,100);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("ShakeSort: Already Sorted Array", "[ShakeSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    mergeSort(arr, 5,100);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ShakeSort: Reversed Array", "[ShakeSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    mergeSort(arr, 5,100);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}



TEST_CASE("ShakeSort: Array with Negative Numbers", "[ShakeSort]") {
    int arr[] = {3};
    mergeSort(arr, 5,100);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}


