// Commit 1: inisialisasi project
// Commit 2: buat forward declaration class siswa dan class orang
// Commit 3: tambah variabel private nama pada class orang
// Commit 4: tambah method setNama dan friend class siswa pada class orang

#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};