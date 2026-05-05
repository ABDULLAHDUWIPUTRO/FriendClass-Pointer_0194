// Commit 1:  inisialisasi project
#include <iostream>
using namespace std;

class BelahKetupat;
class LayangLayang;

// Commit 2:  buat class LayangLayang dengan variabel private
class LayangLayang {
    private:
        float d1, d2, sisi1, sisi2;

    public:
        void input() { // Commit 3:  tambah method input pada LayangLayang
            cout << "-- Input Layang-Layang --" << endl;
            cout << "Diagonal 1   : "; cin >> d1;
            cout << "Diagonal 2   : "; cin >> d2;
            cout << "Sisi pendek  : "; cin >> sisi1;
            cout << "Sisi panjang : "; cin >> sisi2;
        }

        float luas() { // Commit 4:  tambah method luas dan keliling pada LayangLayang
            return (d1 * d2) / 2;
        }

        float keliling() {
            return 2 * (sisi1 + sisi2);
        }

        void output() { // Commit 5:  tambah method output pada LayangLayang
            cout << "-- Hasil Layang-Layang --" << endl;
            cout << "Luas     : " << luas() << endl;
            cout << "Keliling : " << keliling() << endl;
        }

        friend void kelilingGabungan(BelahKetupat &bk, LayangLayang &ll);
};

class BelahKetupat { // Commit 6:  buat class BelahKetupat dengan variabel private
    private:
        float d1, d2, sisi;

    public:
        void input() { // Commit 7:  tambah method input pada BelahKetupat
            cout << "-- Input Belah Ketupat --" << endl;
            cout << "Diagonal 1 : "; cin >> d1;
            cout << "Diagonal 2 : "; cin >> d2;
            cout << "Sisi       : "; cin >> sisi;
        }

        float luas() { // Commit 8:  tambah method luas dan keliling pada BelahKetupat
            return (d1 * d2) / 2;
        }

        float keliling() {
            return 4 * sisi;
        }

        void output() { // Commit 9:  tambah method output pada BelahKetupat
            cout << "-- Hasil Belah Ketupat --" << endl;
            cout << "Luas     : " << luas() << endl;
            cout << "Keliling : " << keliling() << endl;
        }

        friend void kelilingGabungan(BelahKetupat &bk, LayangLayang &ll); // Commit 10: tambah deklarasi friend method pada kedua class
};

void kelilingGabungan(BelahKetupat &bk, LayangLayang &ll) { // Commit 11: implementasi isi friend method kelilingGabungan
    float totalBK = 4 * bk.sisi;
    float totalLL = 2 * (ll.sisi1 + ll.sisi2);
    cout << "-- Keliling Gabungan (Friend Method) --" << endl;
    cout << "Keliling BelahKetupat : " << totalBK << endl;
    cout << "Keliling LayangLayang : " << totalLL << endl;
    cout << "Total                 : " << totalBK + totalLL << endl;
}

int main() { // Commit 12: buat fungsi main dan panggil object LayangLayang
    cout << "=============================" << endl;
    cout << "   PROGRAM BANGUN DATAR" << endl; 
    cout << "=============================" << endl << endl;

    LayangLayang ll;
    ll.input();
    cout << endl;
    ll.output();
    cout << endl;
