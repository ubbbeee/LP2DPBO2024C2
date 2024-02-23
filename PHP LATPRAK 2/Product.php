<?php
// Mendefinisikan kelas Product sebagai class utama atau parent
/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP Inheritance dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
class Product {
    // Mendeklarasikan variabel privat untuk idProduct, name, brand, dan price
    private $idProduct = 0;
    private $name = "";
    private $brand = "";
    private $price = 0;

    // Konstruktor default tanpa parameter
    public function __construct($idProduct = 0, $name = "", $brand = "", $price = 0) {
        // Menginisialisasi variabel dengan nilai dari parameter konstruktor
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    // Metode untuk mendapatkan nilai idProduct
    public function getIdProduct() {
        return $this->idProduct;
    }

    // Metode untuk mengatur nilai idProduct
    public function setIdProduct($idProduct) {
        $this->idProduct = $idProduct;
    }

    // Metode untuk mendapatkan nilai name
    public function getName() {
        return $this->name;
    }

    // Metode untuk mengatur nilai name
    public function setName($name) {
        $this->name = $name;
    }

    // Metode untuk mendapatkan nilai brand
    public function getBrand() {
        return $this->brand;
    }

    // Metode untuk mengatur nilai brand
    public function setBrand($brand) {
        $this->brand = $brand;
    }

    // Metode untuk mendapatkan nilai price
    public function getPrice() {
        return $this->price;
    }

    // Metode untuk mengatur nilai price
    public function setPrice($price) {
        $this->price = $price;
    }
    // Destruktor untuk membersihkan sumber daya
    public function __destruct()
    {
        
    }


}
?>
