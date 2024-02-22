/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 DPBO Inheritance dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
//include library
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Shirt.cpp"
#include "Table.cpp"

using namespace std;

int main()
{
    // Membuat vector untuk menyimpan objek-objek Shirt
    vector<Shirt> shirtList;

    // Deklarasi variabel batas dan iterasi
    int batas;
    int iterasi = 0;

    // Menampilkan pesan untuk meminta jumlah data yang akan ditambahkan
    cout << "Silahkan Masukkan Berapa Data Yang Akan Ditambahkan" << endl;

    // Membaca input pengguna untuk jumlah data yang akan ditambahkan
    cin >> batas;

    // Menampilkan pesan untuk meminta input data
    cout << "Silahkan Masukkan Data Yang Akan Anda Tambahkan" << endl;

    // Melakukan loop sebanyak jumlah data yang akan ditambahkan
    while (iterasi < batas)
    {
        // Membuat objek sementara (temp) dari kelas Shirt
        Shirt temp;

        // Membaca input pengguna untuk setiap atribut Shirt
        int idProduct;
        string name, brand, size, material, gender, color, sleeve_type;
        int price;

        cin >> idProduct >> name >> brand >> price >> size >> material >> gender >> color >> sleeve_type;

        // Memeriksa apakah idProduct sudah ada di dalam vector
        if (any_of(shirtList.begin(), shirtList.end(), [idProduct](const Shirt &shirt)
                   { return shirt.getIdProduct() == idProduct; }))
        {
            cout << "Input id tidak valid atau id sudah ada pada list. Data tidak ditambahkan." << endl;
        }
        else
        {
            // Mengatur nilai atribut objek sementara
            temp.setIdProduct(idProduct);
            temp.setName(name);
            temp.setBrand(brand);
            temp.setPrice(price);
            temp.setSize(size);
            temp.setMaterial(material);
            temp.setGender(gender);
            temp.setColor(color);
            temp.setSleeve_type(sleeve_type);

            // Menambahkan objek sementara ke dalam vector
            shirtList.push_back(temp);
        }

        // Increment variabel iterasi
        iterasi++;
    }

    // Menampilkan data Shirt yang ada di dalam vector
    Table table;                                                                // Membuat objek dari kelas Table untuk menampilkan data dalam bentuk tabel
    vector<vector<string>> arrStrings(shirtList.size() + 1, vector<string>(9)); // Membuat vector 2D untuk menyimpan data dalam format tabel Jumlah kolom ditentukan sebagai 9 (sesuai dengan jumlah atribut pada objek Shirt).

    arrStrings[0] = {"ID", "Nama", "Brand", "Harga", "Ukuran", "Bahan", "JK", "Warna", "Lengan"}; // Menyimpan judul kolom pada baris pertama vector arrStrings

    // Mengisi vector arrStrings dengan data dari vector shirtList
    for (int i = 0; i < shirtList.size(); i++)
    {
        arrStrings[i + 1] = {
            to_string(shirtList[i].getIdProduct()), // Mengubah int menjadi string menggunakan to_string
            shirtList[i].getName(),
            shirtList[i].getBrand(),
            to_string(shirtList[i].getPrice()), // Mengubah int menjadi string menggunakan to_string
            shirtList[i].getSize(),
            shirtList[i].getMaterial(),
            shirtList[i].getGender(),
            shirtList[i].getColor(),
            shirtList[i].getSleeve_type()};
    }

    cout << endl;
    vector<string> header = {"Data baju"};                // Judul tabel
    table.buatHeader(header, 1);                          // Membuat header tabel dengan menggunakan method buatHeader dari kelas Table
    table.buatBaris(shirtList.size() + 1, 9, arrStrings); // Membuat baris-baris data dalam tabel menggunakan method buatBaris dari kelas Table
    cout << endl;

    return 0;
}
