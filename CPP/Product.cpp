/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 DPBO Inheritance dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
#include <iostream>//include library input output
#include <string>//include library string

using namespace std;

class Product//membuat class product yang merupakan superclass
{
private:
//buat property2 pada class product dengan visibility private
    int idProduct;
    string name;
    string brand;
    int price;

public:
    //buat method dengan visibility public
    Product()//constructor default
    {
        this->idProduct = 0;
        this->name = "";
        this->brand = "";
        this->price = 0;
    }

    Product(int idProduct, string name, string brand, int price)// Konstruktor parameter untuk objek DPR. Menginisialisasi objek dengan nilai yang diberikan.
    {
        this->idProduct = idProduct;
        this->name = name;
        this->brand = brand;
        this->price = price;
    }

    int getIdProduct() const //getter value id di set const
    {
        return this->idProduct;
    }

    void setIdProduct(int idProduct)//setter id
    {
        this->idProduct = idProduct;
    }

    string getName()//getter value nama
    {
        return this->name;
    }

    void setName(string name)//setter nama
    {
        this->name = name;
    }

    string getBrand()//getter value brand
    {
        return this->brand;
    }

    void setBrand(string brand)//setter brand/merk
    {
        this->brand = brand;
    }

    int getPrice()//getter value harga
    {
        return this->price;
    }

    void setPrice(int price)//setter harga
    {
        this->price = price;
    }

    ~Product()//destructor
    {
    }
};