#include<iostream>
#include<ncurses\curses.h>
#include<unistd.h>
#include<windows.h>
#include<stdlib.h> //library untuk warna2

using namespace std;

int main(){
    initscr();
    start_color();

    init_pair(3, COLOR_GREEN, COLOR_WHITE);
    init_pair(4, COLOR_WHITE, COLOR_GREEN);

    attron(COLOR_PAIR(3));
    mvprintw(2,2, "Hai");
    refresh();
    sleep(2); //artinya ada jeda 2 detik sebelum "Kamuu!" muncul
    
    attron(COLOR_PAIR(4));
    mvprintw(3,2, "Kamuu!");
    refresh();
    sleep(2);
    
    attron(COLOR_PAIR(3));
    mvprintw(4,2, "Hatiku dagdigdug");
    refresh();
    sleep(2);
    
    attron(COLOR_PAIR(4));
    mvprintw(5,2, "Saat aku melihatmu!");
    refresh();
    // contoh kalau pakai library <unistd.h>


    init_pair(1, COLOR_MAGENTA, COLOR_CYAN);
    init_pair(2, COLOR_CYAN, COLOR_MAGENTA);

    // system("color 1"); 
    // -> kamu yang salah paham itu ^^apply warnanya pake attron(), sama inisialisasi warnanya pake init_pair()
    attron(COLOR_PAIR(1));
    mvprintw (7,2, "H");
    refresh();
    Sleep(200);
    
    attron(COLOR_PAIR(2));
    mvprintw(8,2, "E");
    refresh();
    Sleep(400);

    attron(COLOR_PAIR(1));
    mvprintw(9,2, "E");
    refresh();
    Sleep(800);

    attron(COLOR_PAIR(2));
    mvprintw(10,2, "S");
    refresh();
    Sleep(1000);

    attron(COLOR_PAIR(1));
    mvprintw(11,2, "E");
    refresh();
    Sleep(1200);

    attron(COLOR_PAIR(2));
    mvprintw(12,2, "U");
    refresh();
    Sleep(1400);

    attron(COLOR_PAIR(1));
    mvprintw(13,2, "N");
    refresh();
    Sleep(1600);

    attron(COLOR_PAIR(2));
    mvprintw(14,2, "G");
    refresh();
    Sleep(1800);
    // contoh kalau pakai library <windows.h>
    
    // getch(); -> klo makenya di sini, u/ ngerun loop yg bawah harus tekan keyboard ngasal dulu.
    // endwin(); -> cukup dipake di baris paling bawah before return 0. g ad gunanya di sini.
    
    attroff(COLOR_PAIR(2)); //klo ga pake fungsi ini nanti loop 'loading'nya jd bewarna kek 'HEESEUNG'.
    for (int r=0; r<3; r++){
        mvprintw(19,30, "Loading");
        mvprintw(20,30, "--------------------");
        mvprintw(21,30, "|                  |");
        mvprintw(22,30, "--------------------");

        for (int h=1; h<19; h++){
            mvprintw(21,30+h, ">");
            refresh();
            Sleep(200);
        }

    }
    getch(); // -> klo dinonaktifin bisa langsung keluar otomatis dari tampilan run.
    endwin();




    return 0;
}