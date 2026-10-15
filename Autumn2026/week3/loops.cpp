#include <iostream>

void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[5] = {5,4,1,2,3};
    bubbleSort(arr, 5);
    for (int n : arr) {
        std::cout << n << std::endl;
    }

    // average out
    int n = 1;
    int acc = 0, count = 0;
    while (n != 0) {
        std::cout << "enter a number. To exit enter 0" << std::endl;
        std::cin >> n;
        acc += n;
        count++;
        double average = (double) acc / count;
        std::cout << "average so far " << average << std::endl;
    }
    

}