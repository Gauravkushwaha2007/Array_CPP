#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15,20,5,30};
    int n = 7; 
    int target = 11;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == target) {
                cout << "numbers found : " << arr[i] << ", " << arr[j];
                return 0;
            }

        }
    }
    return 0;
}
