// given an array of integers, rearrange the array such that all negative numbers appear before all positive numbers the relative order dont matter
#include <iostream>
#include <vector>
using namespace std;
void rearrange(vector<int>& arr) {
    int n = arr.size();
    int j = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main() {
    vector<int> arr = {12, -7, -5, 3, -1, 8, -4};
    rearrange(arr);
    cout << "Rearranged array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
// time complexity: O(n)
// space complexity: O(1)
// explanation: we use two pointers, one to iterate through the array and another to keep track of the position of the last negative number. 
// -Whenever we find a negative number, we swap it with the element at the position of the last negative number and move the pointer for the last negative number forward. 
// -This way, all negative numbers are moved to the front of the array while maintaining a linear time complexity and constant space complexity.