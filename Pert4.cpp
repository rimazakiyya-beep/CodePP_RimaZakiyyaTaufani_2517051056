#include <iostream>
using namespace std;

int main(){

    //contoh for
    for (int i=0; i<10; i++){
        cout << "Maba! Selamat liburan semester 1 o(≧∀≦)o" << endl;
    }
    cout << endl;

    //contoh while
    int i = 1;
    while(i<=10) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    //contoh do while
    int kalimat = 1;
    do{
        cout << "C++ Saranghae<3" << endl;
        kalimat++;
    } while (kalimat <= 5);

    cout << endl;
    
    //contoh nasted loop
    int baris=4, kolom=5;

    for (int i=1; i <= baris; i++){
        for (int j=1; j<=kolom; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;

    // contoh penggunaan break
    for (int i=1; i <= 10; i++){
        if (i==5){
            break; //berhenti jika i sama dengan 5
        }
        cout << i << " ";
    }

    cout << "\n Looping Selesai";
    cout << endl;

    // contoh penggunaan continue
    for (int i=1; i<=10; i++){
        if (i%2==0) {
            continue; //lewati iteral jika i genap
        }
        cout << i << " ";
    } 
    cout << endl;

    // contoh lengkapnya
    cout << "For Loop Output: " << endl;
    for (int i=0; i<5; i++){
        cout << "Nilai i= " << i << " ";
    }
    cout << endl;

    cout << "While Loop Output: " << endl;
    int a = 0;
    while (a<5){
        cout << "Nilai i = " << a << " ";
        a++;
    }
    cout << endl;

    cout << "Do-While Loop Output: " << endl;
    int b=0; 
    do {
        cout << "Nilai b= " << b << " ";
        b++;
    } while (b<5);
    cout << endl;

    cout << "Penggunaan Continue di For Loop: " << endl;
    for (int i=0; i<10; i++) {
        if (i==5){
            continue;
        }
        cout << "Nilai i= " << i << " ";
    }
    cout << endl;

    cout << "Penggunaan Break di For Loop: " << endl;
    for (int i=0; i<10; i++) {
        if (i==5) {
            break;
        }
        cout << "Nilai i= " << i << " ";
    }
    cout << endl;

    cout << "Pemrograman Selesai." << endl;
    
    

    return 0;
}