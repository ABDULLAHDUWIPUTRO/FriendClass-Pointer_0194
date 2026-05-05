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

       