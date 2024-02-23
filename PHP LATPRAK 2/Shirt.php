<?php
/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP Inheritance dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/
require_once 'Clothing.php';

// Mendefinisikan kelas Shirt sebagai subclass dari class Clothing dan superclass Product
class Shirt extends Clothing {
    // Mendeklarasikan variabel privat untuk color dan sleeve_type
    private $color = "";
    private $sleeve_type = "";

    // Konstruktor dengan parameter untuk inisialisasi nilai awal
    public function __construct($idProduct, $name, $brand, $price, $size, $material, $gender, $color = "", $sleeve_type = "") {
        // Memanggil konstruktor superclass (Clothing) dengan menggunakan parent::__construct()
        parent::__construct($idProduct, $name, $brand, $price, $size, $material, $gender);

        // Menginisialisasi variabel dengan nilai dari parameter konstruktor
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

    // Metode untuk mendapatkan nilai color
    public function getColor() {
        return $this->color;
    }

    // Metode untuk mengatur nilai color
    public function setColor($color) {
        $this->color = $color;
    }

    // Metode untuk mendapatkan nilai sleeve_type
    public function getSleeve_type() {
        return $this->sleeve_type;
    }

    // Metode untuk mengatur nilai sleeve_type
    public function setSleeve_type($sleeve_type) {
        $this->sleeve_type = $sleeve_type;
    }

    public function __destruct()
    {
        
    }
}
?>
