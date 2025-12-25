#include <iostream>
using namespace std;

int main(){
    int tanggal[12] = {3,8,15,6,27,19,13,20,31,22,4,10};
    cout << "Tanggal " << tanggal[9];

    string hari[7]= {"Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu"};
    cout << " Hari " << hari[4] << endl;

    char namaP[]={'K', 'a', 'i'};
    cout << "Nama Panggilan (char): " << namaP << endl;

    string namaL = "Heeseung Penguasa Bumi";
    cout << "Nama Lengkap(string): " << namaL << endl << endl;

    int i=0;
    while (i<7){
        cout << "Hari ke-" << (i+1) << " : " << hari[i] << endl;
        i++;
    }
    cout << endl;

    //4. Menghitung panjang array (jumlah elemen)
    int panjang = sizeof(hari)/sizeof(hari[0]);
    cout << "Panjang Array Hari adalah: " << panjang << endl;
    cout << "Heeseung Menguasai Dunia dalam " << panjang << " hari" << endl << endl;
    
    //5. Menghitung total dan rata-rata penjualan
    int jumlahHari = 7;
    int penjualan[jumlahHari];
    int totalPenjualan=0;
    float rataRata;

    cout << "Masukkan Penjualan Berapa Chicken Katsu selama " << jumlahHari << " hari: " << endl;
    for (int j=0; j<jumlahHari; j++){
        cout << "Penjualan hari " << hari[j] << " : ";
        cin >> penjualan[j];
        totalPenjualan += penjualan[j];
    } 

    rataRata = (float)totalPenjualan/jumlahHari;
    cout << "Total Porsi Chicken Katsu yang Telah Terjual: " << totalPenjualan << " Porsi." << endl;
    cout << "Rata-Rata Penjualan Chicken Katsu Selama " << jumlahHari << " Hari Adalah: " << rataRata << " Porsi." << endl << endl;

    //6. Array 2 dimensi
    int matriks[100][100];
    int jumlahBaris, jumlahKolom;

    cout << "Masukkan jumlah bulan dan tanggal buka Kedai Chicken Katsu: " << endl;
    cout << "Input jumlah bulan (baris matriks): ";
    cin >> jumlahBaris;
    cout << "Input jumlah tanggal(kolom matriks): ";
    cin >> jumlahKolom;

    //input elemen matriks
    for (int x=0; x<jumlahBaris; x++) {
        for (int y=0; y<jumlahKolom; y++){
            cout << "Baris " << x+1 << ", Kolom " << y+1 << " = ";
            cin >> matriks[x][y];
        }
    }

    cout << "Kedai Chicken Katsu buku selama: " << jumlahBaris << " bulan di tanggal tertentu." << endl;

    //output matriks
    for (int x=0; x<jumlahBaris; x++) {
        for (int y=0; y < jumlahKolom; y++){
            cout << matriks[x][y] << " ";
        }
        cout << endl;
    }
    return 0;
}