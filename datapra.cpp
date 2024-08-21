#include<iostream>
using namespace std;

const int MAX = 20;

int main(){
    int A[MAX], i, n, k, loc = 0, item;
    cout << "Enter the size of the array (max " << MAX << "): ";
    cin >> n;
    if(n > MAX){
        cout << "Array size exceeds maximum capacity. Exiting." << endl;
        return 1;
    }
    cout << "Enter the elements of the array: ";
    for(i = 0; i < n; i++){
        cin >> A[i];
    }
    cout << "Enter the element after which you want to insert: ";
    cin >> k;
    cout << "Enter the element to be inserted: ";
    cin >> item;
    // Searching location
    for(i = 0; i < n; i++){
        if(A[i] == k){
            loc = i + 1;
            break;
        }
    }
    if(loc == 0){
        cout << "Element not found in the array. Exiting." << endl;
        return 1;
    }
    // Shifting of elements
    for(i = n; i >= loc; i--){
        A[i + 1] = A[i];
    }
    // Insertion location
    A[loc] = item;
    n++; // Update the size of the array
    // Display
    for(i = 0; i < n; i++){
        cout << A[i] << endl;
    }
    return 0;
}