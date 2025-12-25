#include <iostream>
using namespace std;

int main() {
    // contoh Sequence Search
    string arr[] = {"Heeseung", "Jay", "Sunghoon", "Jake", "Sunoo", "Jungwoon", "NI-KI"};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool find = false;

    string target = "Heeseung";

    for (int i=0; i<size; i++){
        if (arr[i]==target){
            cout << "Nama " << arr[i] << " a.k.a mas suami sy ditemukan pada indeks ke-"<< i<< endl ;
            find=true;
        // } else {
        // cout << "ga ketemu heeseungnyaa" << endl;
        // }
    }
    if (!find){
        cout << "Data tidak ditemukan";
    }

    //contoh Bubble Sort
    int arr[]={50, 30, 40, 10, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;

    for (int i=0; i<n - 1; i++){
        for (int j=0; j<n - i - 1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout << "Array setelahh diurutkan: ";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    
    return 0;
}
}