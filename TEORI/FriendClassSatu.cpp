// Commit 1: inisialisasi project
// Commit 2: buat forward declaration class siswa dan class orang
// Commit 3: tambah variabel private nama pada class orang
// Commit 4: tambah method setNama dan friend class siswa pada class orang
// Commit 5: buat class siswa dengan variabel private id
// Commit 6: tambah method setId dan displayAll pada class siswa

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

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(orang &a);
};