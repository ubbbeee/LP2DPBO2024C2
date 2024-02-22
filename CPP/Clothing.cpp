/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 DPBO Inheritance dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#include "Product.cpp"  //Product.cpp sebagai kelas induk (parent class)

#include <iostream>     //library IO untuk menggunakan fungsi input/output standar
#include <string>       //library string untuk menggunakan tipe data string

using namespace std;

class Clothing : public Product  // Tentukan kelas Clothing sebagai subkelas (derived class) dari kelas Product
{
private:  // Definisikan properti-properti privat
    string size;      // Properti untuk menyimpan ukuran pakaian
    string material;  // Properti untuk menyimpan bahan pakaian
    string gender;    // Properti untuk menyimpan pakaian laki laki dan perempuan

public:
    // Method-Method publik
    // Konstruktor
    Clothing() : Product()  // Konstruktor default untuk Clothing, meng-extend ke kelas Product
    {
        this->size = "";
        this->material = "";
        this->gender = "";
    }

    Clothing(int idProduct, string name, string brand, int price, string size, string material, string gender)
        : Product(idProduct, name, brand, price)  // Konstruktor dengan parameter, memanggil konstruktor kelas Product menggunakan initializer list
    {
        this->size = size;
        this->material = material;
        this->gender = gender;
    }

    // Method getter dan setter untuk size
    string getSize()
    {
        return this->size;
    }

    void setSize(string size)
    {
        this->size = size;
    }

    // Method getter dan setter untuk material
    string getMaterial()
    {
        return this->material;
    }

    void setMaterial(string material)
    {
        this->material = material;
    }

    // Method getter dan setter untuk gender
    string getGender()
    {
        return this->gender;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }

    // Destruktor
    ~Clothing()
    {
        // Destruktor kosong dalam kasus ini
    }
};
