<?php
/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP Inheritance dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
require_once 'Product.php';
// Mendefinisikan kelas Clothing sebagai subclass dari class Product
class Clothing extends Product {
    // Mendeklarasikan variabel privat untuk size, material, dan gender
    private $size = "";
    private $material = "";
    private $gender = "";

    // Konstruktor dengan parameter untuk inisialisasi nilai awal
    public function __construct($idProduct, $name, $brand, $price, $size = "", $material = "", $gender = "") {
        // Memanggil konstruktor dari kelas induk (Product) dengan menggunakan parent::__construct()
        parent::__construct($idProduct, $name, $brand, $price);
        // Menginisialisasi variabel dengan nilai dari parameter konstruktor
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    // Metode untuk mendapatkan nilai size
    public function getSize() {
        return $this->size;
    }

    // Metode untuk mengatur nilai size
    public function setSize($size) {
        $this->size = $size;
    }

    // Metode untuk mendapatkan nilai material
    public function getMaterial() {
        return $this->material;
    }

    // Metode untuk mengatur nilai material
    public function setMaterial($material) {
        $this->material = $material;
    }

    // Metode untuk mendapatkan nilai gender
    public function getGender() {
        return $this->gender;
    }

    // Metode untuk mengatur nilai gender
    public function setGender($gender) {
        $this->gender = $gender;
    }

    public function __destruct(){

    }
}
?>
