// wap to insert an element in an array in dynamic array using vector in c++

#include <iostream>
#include <vector>
using namespace std;

int main() {    
    vector<int> arr = {10, 20, 30, 40, 50};
    int element, position;
    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position to insert: ";
    cin >> position;

    if (position < 0 || position > arr.size()) {
        cout << "Invalid position! Please enter a position between 0 and " << arr.size() << "." << endl;
        // Do not insert or print the array if position is invalid
    } else {
        arr.insert(arr.begin() + position, element);
        cout << "Array after insertion: ";
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}