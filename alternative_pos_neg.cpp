#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int arr[n] = {1, 2, -4, -5};
    vector<int> neg;
    vector<int> pos;
    
    // Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            neg.push_back(arr[i]);
        } else {
            pos.push_back(arr[i]);
        }
    }

    // Check if we have enough positive and negative numbers
    if (neg.size() + pos.size() != n) {
        cout << "Mismatch in number of positive and negative elements.\n";
        return 1;
    }

    // Interleave positive and negative numbers into `arr`
    int j = 0;
    int posIndex = 0;
    int negIndex = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && posIndex < pos.size()) {
            arr[j] = pos[posIndex++];
        } else if (i % 2 != 0 && negIndex < neg.size()) {
            arr[j] = neg[negIndex++];
        } else {
            // In case there are not enough numbers to fill the array
            cout << "Not enough positive or negative numbers to interleave.\n";
            return 1;
        }
        j++;
    }

    // Print the resulting array
    for (auto it : arr) {
        cout << it << " ";
    }

    return 0;
}
