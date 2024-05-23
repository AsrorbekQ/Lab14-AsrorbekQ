#include <iostream>
#include <string>
#include <cmath>
#include <vector>

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

void power(double* n, const int* p){
    *n = pow(*n, *p);
}
void string_normalization(string &text, int len) {

    if (int(text[0]) >= int('a') and int(text[0]) <= int('z')) {
        text[0] = char(int(text[0]) - 32);
    }
    for (int i = 1; i < len; ++i) {
        if (int(text[i]) >= int('A') and int(text[i]) <= int('Z')) {
            text[i] += 32;
        }
    }
}

//int singleNumber(vector<int>& vec){
//    int size = vec.size();
//    int result = 0;
//    for (int num : vec) {
//        result ^= num;
//    }
//
//    return result;
//    if(size == 0){
//        return vec[0];
//    }else{
//
//    }
//}


vector <int> addOne(vector <int> &v){
    int len = v.size();
    if (v[len-1] != 9) {
        if ((v[len - 1] + 1) == 10) {
            v[len - 1] = 0;
            v[len - 2] += 1;
        } else {
            v[len - 1] += 1;
        }
    }else{
        v.push_back(0);
        v[len-1] = 1;
    }

    return v;

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

    cout << "Problem 7\n";
    double base;
    int exponent;

    cout << "Enter the base:  ";
    cin >> base;

    cout << "Enter the exponent:  ";
    cin >> exponent;

    power(&base, &exponent);
    cout << base << endl;

    cout << "Problem 8\n";
    vector<int> vect;
    int newi = 0;
    int num;
    cout << "How many numbers you want to enter?: ";
    cin >> num;

    for (int t = 0; t < num; ++t) {
        cout << "Enter vector elements:  ";
        cin >> newi;
        vect.push_back(newi);
    }

    vect = addOne(vect);

    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i];
    }
    cout << endl;

    cout << "Problem 9\n";

    string text;
    cout << "Enter the string to normalize:  ";
    cin >> text;
    int len = text.length();
    string_normalization(text, len);

    cout << text << endl;

    cout << "Problem 10\n";
//    vector<int> v;
//    int t, n111;
//    cout << "How many elements you want enter to the vector?: ";
//    cin >> n111;
//    cout << "Enter the elements of the vector:  ";
//
//    for (int i = 0; i < n111; ++i){
//        cin >> t;
//        v.push_back(t);
//    }
//    cout << singleNumber(v) << endl;
//
//    cout << "The end!";
    return 0;
}
