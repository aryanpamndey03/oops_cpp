// pointers and arrays

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *p = arr; // pointer pointing to first element of array

//     cout << "Array elements using pointer: ";
//     for (int i = 0; i < 5; i++)
//         cout << *(p + i) << " "; // accessing array elements using pointer arithmetic
//     return 0;
// }


// dynamic memory allocation for array using pointers
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     int *arr = new int[n]; // dynamic array creation
//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     cout << "You entered: ";
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";

//     delete[] arr; // free dynamic array memory
//     return 0;
// }

// this pointer example

#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    void setX(int x) {
        this->x = x; // using 'this' pointer to refer to current object
    }
    void show() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Demo d;
    d.setX(100);
    d.show();
    return 0;
}







