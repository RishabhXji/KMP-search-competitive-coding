// delete and element from an array by its position in dynamic array using vector in c++
#include <iostream>
#include <vector>
using namespace std;

int main() {    
    vector<int> arr = {10, 20, 30, 40, 50};
    int pos;
    cout << "Enter the position to delete: ";
    cin >> pos;

    if (pos < 0 || pos >= arr.size()) {
        cout << "Invalid position! Please enter a position between 0 and " << arr.size() - 1 << "." << endl;
    } else {
        arr.erase(arr.begin() + pos);
        cout << "Array after deletion: ";
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}