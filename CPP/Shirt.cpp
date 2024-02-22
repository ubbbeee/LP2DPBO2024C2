/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 DPBO Inheritance dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#include "Clothing.cpp"  //Clothing.cpp sebagai kelas induk (parent class)
#include <iostream>      //library IO untuk menggunakan fungsi input/output standar
#include <string>        //library string untuk menggunakan tipe data string

using namespace std;

class Shirt : public Clothing  // Tentukan kelas Shirt sebagai subkelas (derived class) dari kelas Clothing
{
private:  // Definisikan properti-properti privat
    string color;         // Properti untuk menyimpan warna kemeja
    string sleeve_type;   // Properti untuk menyimpan jenis lengan kemeja

public:
    // Method publik
    // Konstruktor
    Shirt() : Clothing()  // Konstruktor default untuk Shirt, meng-extend ke kelas Clothing
    {
        this->color = "";
        this->sleeve_type = "";
    }

    Shirt(int idProduct, string name, string brand, int price, string size, string material, string gender, string color, string sleeve_type)
        : Clothing(idProduct, name, brand, price, size, material, gender)  // Konstruktor dengan parameter, memanggil konstruktor kelas Clothing menggunakan initializer list
    {
        this->color = color;
        this->sleeve_type = sleeve_type;
    }

    // Method getter dan setter untuk color
    string getColor()
    {
        return this->color;
    }

    void setColor(string color)
    {
        this->color = color;
    }

    // Method getter dan setter untuk sleeve_type
    string getSleeve_type()
    {
        return this->sleeve_type;
    }

    void setSleeve_type(string sleeve_type)
    {
        this->sleeve_type = sleeve_type;
    }

    // Destruktor
    ~Shirt()
    {
        // Destruktor kosong dalam kasus ini
    }
};
