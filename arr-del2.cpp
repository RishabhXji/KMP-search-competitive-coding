// delete an element from an array by its value  in dynamic array using vector in c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {    
    vector<int> arr = {10, 20, 30, 40, 50};
    int element;
    cout << "Enter the element to delete: ";
    cin >> element;


    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        arr.erase(arr.begin() + index);
        cout << "Array after deletion: ";
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        } 
        cout << endl;
    } else {
        cout << "Element not found in the array!" << endl;
    }
    return 0;
}