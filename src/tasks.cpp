#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if(!lhs || !rhs ){
    }else{
        int tmp;
        tmp=*lhs;
        *lhs=*rhs;
        *rhs=tmp;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if ( num_cols<1 || num_rows<1 ) {
        return nullptr;
    }
        int **array = new int *[num_rows];
        for (int i = 0; i < num_rows; i++) {
            array[i] = new int[num_cols];
            for (int j = 0; j < num_cols; j++) {
                array[i][j] = init_value;
            }
        }
    return array;
        }


// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (!arr_2d_source || !arr_2d_target || num_rows <= 0 || num_cols <= 0) {
        return false;
    }
        for (int i = 0; i < num_rows; i++) {
            for (int j = 0; j < num_cols; j++) {
                arr_2d_target[i][j] = arr_2d_source[i][j];
            }
        }
    return arr_2d_target;
    }

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    for(int i =0; i<arr.size()/2;i++){
        int tmp=arr[i];
        arr[i]=arr[arr.size()-i-1];
        arr[arr.size()-i-1]=tmp;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if (arr_begin && arr_end) {
        if (arr_end <= arr_begin) {
            return;
        }
        int tmp;
        tmp=*arr_begin;
        *arr_begin=*arr_end;
        *arr_end=tmp;
        reverse_1d_array(arr_begin+1, arr_end-1);
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if(!arr || size<=0) {
        return nullptr;
    }
    int *max = &arr[0];
    for(int i =0 ;i<size;i++){
        if(arr[i]> *max){
            max = &arr[i];
        }
    }
    return max;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> *
            odd_numbers = new vector<int>;
    for (int i=0; i < arr.size(); i++){
        if (arr[i]%2==1 || arr[i]%2==-1){
            odd_numbers->push_back(arr[i]);
        }
    }
    return *odd_numbers;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
 vector<int> *find_elements = new vector<int>;
 for (int i=0; i < arr_a.size(); i++){
     for (int j=0; j < arr_b.size(); j++){
         if (arr_a[i] == arr_b[j]){
             find_elements->push_back(arr_a[i]);
         }
     }
 }
    return  *find_elements;
}