#include <iostream>

using namespace std;

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    int target = 10;
    int n = 5;

    bool flag = false;  // Use 'false' instead of '0'
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            // Found
            flag = true;  // Use 'true' instead of '1'
            break;
        }
    }

    if (flag) {  // You can directly check the boolean value
        cout << "Target found" << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
