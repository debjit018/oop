#include <iostream>
using namespace std;

class Swap {
public:
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

class Sort : public Swap {
    int *arr, n;
public:
    Sort(int size) {
        n = size;
        arr = new int[n];
    }
    void input() {
        cout << "Enter " << n << " integers: ";
        for(int i = 0; i < n; i++) cin >> arr[i];
    }
    void bubbleSort() {
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);  // Using inherited swap()
                }
            }
        }
    }
    void display() {
        cout << "Sorted Array: ";
        for(int i = 0; i < n; i++) cout << arr[i] << " ";
    }
    ~Sort() { delete[] arr; }
};

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    Sort s(n);
    s.input();
    s.bubbleSort();
    s.display();
    return 0;
}