#include <iostream>
using namespace std;

int main(){
    // string nama;
    // string NPM;
    // int umur;

    // cin >> nama;
    // cin >> NPM;
    // cin >> umur;

    // cout << "Nama saya " << nama << endl;
    // cout << "Dengan NPM " << NPM << endl;
    // cout << "Umur saya " << umur << endl;


    // operasi aritmatika sederhana
    int a=5, b=20, c= a=a+b;

    cout << "Nilai a: " << a << endl;
    cout << "Nilai b: " << b << endl;
    cout << "Nilai c: " << c << endl;
    
    a = a+b;
    cout << "Nilai a setelah (a= a + b): " << a << endl << endl;

    // if statement
    // kalkulator sederhana
    int angka1, angka2;
    char operasi;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Masukkan jenis operasi: ";
    cin >> operasi;

    if (operasi == '+') {
        cout << "Hasil= " << angka1 + angka2;
    } else if (operasi == '-') {
        cout << "Hasil= " << angka1 - angka2;
    } else if (operasi == '*') {
        cout << "Hasil= " << angka1 * angka2;
    } else if (operasi == '/') {
        if (angka2 != 0) {
        cout << "Hasil= " << angka1 / angka2;
        } else {
        cout << "Pembagi tidak boleh bernilai 0";
        }
    } else if (operasi == '%') {
        cout << "Hasil= " << angka1 % angka2;
    } else {
        cout << "Operasi tidak valid";
    }

    return 0;

}