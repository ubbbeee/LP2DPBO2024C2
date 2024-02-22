/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 DPBO Inheritance dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#include <iostream>
#include <iomanip>  // Untuk menggunakan setw
#include <vector>   // Tambahkan include untuk menggunakan vector

using namespace std;

class Table
{
private:
    int baris; //buat properti baris
    int kolom; //buat properti kolom

public:
    // Default constructor
    Table()
    {
    }

    // Parameterized constructor untuk menginisialisasi jumlah baris dan kolom
    Table(int baris, int kolom)
    {
        this->baris = baris;
        this->kolom = kolom;
    }

    // Getter untuk mendapatkan jumlah baris
    int getBaris()
    {
        return baris;
    }

    // Setter untuk mengatur jumlah baris
    void setBaris(int baris)
    {
        this->baris = baris;
    }

    // Getter untuk mendapatkan jumlah kolom
    int getKolom()
    {
        return kolom;
    }

    // Setter untuk mengatur jumlah kolom
    void setKolom(int kolom)
    {
        this->kolom = kolom;
    }

    // Membuat header tabel dengan judul kolom
    void buatHeader(vector<string> header, int kolom)
    {
        int k;
        int *max = new int[kolom];

        // Menentukan lebar maksimum untuk setiap kolom berdasarkan panjang judul kolom
        for (int i = 0; i < kolom; i++)
        {
            max[i] = header[i].length();
        }

        // Membuat garis pemisah untuk setiap kolom
        for (int i = 0; i < kolom; i++)
        {
            for (k = 0; k < max[i] * 9; k++)
            {
                cout << "-";
            }
            cout << "-";
        }
        cout << "--------" << endl;

        // Menampilkan judul kolom pada header tabel
        for (int i = 0; i < kolom; i++)
        {
            cout << "|" << setw(max[i] * 9) << left << header[i];
        }
        cout << "        |" << endl;
    }

    // Membuat baris-baris data pada tabel
    void buatBaris(int baris, int kolom, vector<vector<string>> data)
    {
        int i = 0, j = 0;
        int *max = new int[kolom];

        // Menentukan lebar maksimum untuk setiap kolom berdasarkan data pada baris
        for (i = 0; i < kolom; i++)
        {
            max[i] = 0;
            for (j = 0; j < baris; j++)
            {
                if (data[j][i].length() > max[i])
                {
                    max[i] = data[j][i].length();
                }
            }
        }

        // Membuat garis pemisah untuk setiap baris data
        for (i = 0; i < baris; i++)
        {
            for (j = 0; j < kolom; j++)
            {
                for (int k = 0; k < max[j]; k++)
                {
                    cout << "-";
                }
                cout << "--";
            }
            cout << "---------" << endl;

            // Menampilkan data pada baris
            for (j = 0; j < kolom; j++)
            {
                cout << "|" << data[i][j] << setw(max[j] - data[i][j].length() + 2) << left << " ";
            }
            cout << "|" << endl;
        }

        // Membuat garis pemisah setelah semua baris data
        for (j = 0; j < kolom; j++)
        {
            for (int k = 0; k < max[j]; k++)
            {
                cout << "-";
            }
            cout << "--";
        }
        cout << "---------" << endl;
    }

    // Destructor
    ~Table()
    {
    }
};
