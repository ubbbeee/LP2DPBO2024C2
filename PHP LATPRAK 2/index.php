<!-- /* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP Inheritance dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/ -->
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>LP2DPBO</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
  </head>
  <body>
        <?php
        // Menginclude file Shirt
        include 'Shirt.php';

        // Membuat array untuk menyimpan dataBaju
        $dataBaju = array();
        // Fungsi untuk menambahkan dataBaju
        function tambah($dataBaju, $idProduct, $name, $brand, $price, $size, $material, $gender, $color , $sleeve_type){
            $baju = new Shirt($idProduct, $name, $brand, $price, $size, $material, $gender, $color , $sleeve_type);//gunakan instansiasi untuk membuat objek baju
            array_push($dataBaju, $baju);//masukkan baju ke dataBaju
            return $dataBaju;
        }
        // Menambahkan dataBaju menggunakan fungsi tambah
        $dataBaju = tambah($dataBaju, 1, "Oversized_T-shirt", "Uniqlo", 150000, "L", "Katun", "Pria", "Hitam", "Pendek");
        $dataBaju = tambah($dataBaju, 2, "T-Shirt", "Hooligans", 80000, "XL", "Polyester", "Wanita", "Putih", "Pendek");
        $dataBaju = tambah($dataBaju, 3, "Kemeja", "Erigo", 200000, "M", "Canvas", "Pria", "Biru", "Panjang");
        ?>

        <div class="container mt-5">
            <!-- buat header tabel -->
    <h2>Data Baju</h2>
    <table class="table">
        <thead>
            <tr>
                <!-- buat atribut atribut tabel -->
                <th>ID</th>
                <th>Nama</th>
                <th>Merk</th>
                <th>Harga</th>
                <th>Ukuran</th>
                <th>Bahan</th>
                <th>Jenis Kelamin</th>
                <th>Warna</th>
                <th>Lengan</th>
            </tr>
        </thead>
        <tbody>
            <?php
            foreach ($dataBaju as $baju) {
                echo "<tr>";//isi tabel dengan data data tdai yang telah dimasukkan
                echo "<td>{$baju->getIdProduct()}</td>";
                echo "<td>{$baju->getName()}</td>";
                echo "<td>{$baju->getBrand()}</td>";
                echo "<td>{$baju->getPrice()}</td>";
                echo "<td>{$baju->getSize()}</td>";
                echo "<td>{$baju->getMaterial()}</td>";
                echo "<td>{$baju->getGender()}</td>";
                echo "<td>{$baju->getColor()}</td>";
                echo "<td>{$baju->getSleeve_type()}</td>";
                echo "</tr>";
            }
            ?>
        </tbody>
    </table>
</div>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
  </body>
</html>
