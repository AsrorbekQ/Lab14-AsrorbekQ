#include <iostream>

using namespace std;

int evenCount(const int* a, int size){
    int count = 0;
    while (size--) {
        if (!(*a++ % 2)) {
            count++;
        }
    }
    return count;
}

bool is_mirrored(const int* a, const int* b,int size){
    for (int i = 0; i < size; ++i) {
        if (*(a+size-1-i) != *(b+i)){
            return false;
        }
    }
    return true;
}

void sumArrays(const double* arr1, const double* arr2, double* sum, int size) {
    while (size--) {
        *sum++ = *arr1++ + *arr2++;
    }
}

void swap(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; ++i) {
        int temp = *(arr1+i);
        *(arr1+i) = *(arr2+i);
        *(arr2+i) = temp;
    }
}

bool is_in(const int* arr1, const int* arr2, int size1, int size2) {

    for (int i = 0; i < size1; ++i) {
        bool found = false;

        for (int j = 0; j < size2; ++j) {
            if (*arr1 == *(arr2 + j)) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
        arr1++;
    }

    return true;
}

int main() {

    cout << "Probelm 1\n";
    const int SIZE = 10;
    float arr[SIZE];
    float *ptr = arr;

    cout << "Enter Midterm grades for 10 students:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < SIZE; ++i) {
        *(ptr + i) = *(ptr + i) * 0.3;
    }

    for (int i = SIZE - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Probelm 2\n";
    int n2;
    cout << "Enter the number of elements in the array: ";
    cin >> n2;

    int arr2[n2];
    int *ptr2 = arr2;

    for (int i = 0; i < n2; ++i) {
        cin >> *(ptr2 + i);
    }

    cout << "The number of even numbers in the array:  " << evenCount(arr2, n2) << endl;

      cout << "Probelm 3\n";
      int n3;
      cout << "Enter the number of elements in the array: ";
      cin >> n3;

      int arr3_a[n3], arr3_b[n3];
      int *ptr3_a = arr3_a;
      int *ptr3_b = arr3_b;

      for (int i = 0; i < n3; ++i) {
          cin >> *(ptr3_a + i);
      }
      for (int i = 0; i < n3; ++i) {
        cin >> *(ptr3_b + i);
      }

      if(is_mirrored(ptr3_a, ptr3_b, n3) == true){
          cout << "1" << endl;
      }else{
          cout << "0" << endl;
      }

    cout << "Problem 4\n";
    int n4;
    cout << "Enter the number of elements in the array: ";
    cin >> n4;

    double arr4_a[n4], arr4_b[n4], sum[n4];
    double *ptr4_a = arr4_a;
    double *ptr4_b = arr4_b;
    double *sum_ptr = sum;

    for (int i = 0; i < n4; ++i) {
        cin >> *(ptr4_a + i);
    }
    for (int i = 0; i < n4; ++i) {
        cin >> *(ptr4_b + i);
    }

    sumArrays(ptr4_a, ptr4_b, sum_ptr, n4);

    for (int i = 0; i < n4; ++i) {
        cout << *(sum_ptr + i) << " ";
    }

    cout << endl;

      cout << "Problem 5\n";
      int n5;
      cout << "Enter the number of elements in the array: ";
      cin >> n5;

      int first_arr[n5], second_arr[n5];
      int *ptr_1 = first_arr;
      int *ptr_2 = second_arr;

      for (int i = 0; i < n5; ++i) {
        cin >> *(ptr_1 + i);
      }
      for (int i = 0; i < n5; ++i) {
        cin >> *(ptr_2 + i);
      }

      swap(ptr_1, ptr_2, n5);

      for (int i = 0; i < n5; ++i) {
        cout << *(ptr_1 + i) << " ";
      }
      cout << endl;
      for (int i = 0; i < n5; ++i) {
          cout << *(ptr_2 + i) << " ";;
      }
      cout << endl;

    cout << "Problem 6\n";
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;
    int array1[size1];
    int *pointer1 = array1;

    for (int j = 0; j < size1; ++j) {
        cin >> *(pointer1+j);
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;
    int array2[size2];
    int *pointer2 = array2;
    for (int k = 0; k < size1; ++k) {
        cin >> *(pointer2+k);
    }

    if (is_in(pointer1, pointer2, size1, size2) == true){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }


    return 0;
}
