/* 
Write a program to find all subsets of an array whose sum equals a given target value.
• Input: Array of integers and a target sum.
• Output: All subsets (in any order) that sum up to the target. For example:
Input: [2, 3, 5], Target = 5 Output: [2, 3] and [5] */

#include <iostream>
#include <vector>
using namespace std;

// Function to find and print subsets whose sum equals target
void findSubsetsWithSum(const vector<int>& arr, int target, vector<int>& subset, int index) {
    // If the sum of the current subset equals the target, print the subset
    if (target == 0) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
        return;
    }

    // If we have processed all elements or target becomes negative, return
    if (index == arr.size() || target < 0) {
        return;
    }

    // Include the current element in the subset
    subset.push_back(arr[index]);
    findSubsetsWithSum(arr, target - arr[index], subset, index + 1);

    // Backtrack: exclude the current element from the subset
    subset.pop_back();

    // Move to the next element without including the current one
    findSubsetsWithSum(arr, target, subset, index + 1);
}

int main() {
    vector<int> arr;
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    cout << "Enter the target sum: ";
    cin >> target;

    cout << "Subsets whose sum equals " << target << ":" << endl;

    vector<int> subset;
    findSubsetsWithSum(arr, target, subset, 0);

    return 0;
}
