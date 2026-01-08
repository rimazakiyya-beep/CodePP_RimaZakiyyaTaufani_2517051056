#include <iostream>
#include <cmath>
using namespace std;

void perkenalan(){
    cout << "Anyeong, nama aku RIMA ZAKIYYA TAUFANI"<<endl;
    cout << "Aku suka Heeseung from ENHYPEN" << endl;
}
void ultah(string myBias, int umur){
    cout << "Selamat Ulang Tahun " << myBias << " yang ke-" << umur << "!" << endl;
    cout << "Semoga kelak menjadi suami aku!" << endl;
}
void nilai(string nama, double nTugas, double nUTS, double nUAS){
    cout << "Nama Mahasiswa: " << nama << endl;
    cout << "Nilai Tugas: " << nTugas << endl;
    cout << "Nilai UTS: " << nUTS << endl;
    cout << "Nilai UAS: " << nUAS << endl;
    cout << "Nilai Akhir: " << (nTugas + nUTS + nUAS) / 3 << endl;
}

    //contoh yg mengembalikan nilai
double hasilLuasLingkaran(double r){
    const double PI=3.14;
    return PI*pow(r, 2);
}

int main(){

    perkenalan();
    ultah("Mas Hee", 24);

    string nama;
    double nTugas, nUTS, nUAS;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Nilai Tugas: ";
    cin >> nTugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> nUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nUAS;

    nilai(nama, nTugas, nUTS, nUAS);

    //contoh yg mengembalikan nilai
    double jari_jari;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari_jari;

    double hasil = hasilLuasLingkaran(jari_jari);
    
    cout << "Luas lingkaaran dengan jari-jari " << jari_jari << " adalah " << hasil;

    return 0;
}