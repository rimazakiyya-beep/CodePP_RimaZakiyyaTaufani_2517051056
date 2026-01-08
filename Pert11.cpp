#include<iostream>
#include<fstream>
using namespace std;

int main();

void registration(){
    ofstream myFile, accList;
    string userReg;

    system("cls");
    cout << "----------Registrasi----------" << endl;
    cout << "Enter Username : ";
    cin >> userReg;

    cout << endl;

    myFile. open(userReg + ".txt");
    myFile <<0;
    myFile.close();

    acclist.open ("ListAccount.txt", ios::app);
    acclist << userReg << endl;

    system("cls");
    cout << "Registration Seccessfull" << endl;
    main();

}

void login(){

    ifstream myFile;
    string userLog;
    string userData;

    bool exist = false;

    system("cls");
    cout << "--------LOGIN---------"<< endl;
    cout << "Enter Username: ";
    cin >> userLog;

    cout << endl;

    myFile.open("ListAccount.txt");
    while (myFile >> userData){
        if (userData==userLog){
            exist=true;
        }
    }

}

myFile.close();

if ()