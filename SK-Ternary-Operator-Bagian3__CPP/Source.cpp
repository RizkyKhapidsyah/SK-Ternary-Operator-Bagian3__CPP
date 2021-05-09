#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    const int JAM_MASUK = 7;
    int kedatangan;
    char nilai;

    cout << "Masukan Jam Kehadiran Siswa = "; cin >> kedatangan;
    nilai = kedatangan < JAM_MASUK ? 'A' : 'C';
    cout << "Nilai Siswa = " << nilai;

    _getch();
    return 0;
}