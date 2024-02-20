/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP class & encapsulation dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/

import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Membuat objek Scanner untuk menerima input dari pengguna
        Scanner scanner = new Scanner(System.in);
        
        // Membuat list untuk menyimpan objek-objek Shirt
        List<Shirt> shirtList = new LinkedList<>();
        
        // Deklarasi variabel batas dan iterasi
        int batas;
        int iterasi = 0;
        
        // Menampilkan pesan untuk meminta jumlah data yang akan ditambahkan
        System.out.println("Silahkan Masukkan Berapa Data Yang Akan Ditambahkan");
        
        // Membaca input pengguna untuk jumlah data yang akan ditambahkan
        batas = scanner.nextInt();
        
        // Menampilkan pesan untuk meminta input data
        System.out.println("Silahkan Masukkan Data Yang Akan Anda Tambahkan");
        
        // Melakukan loop sebanyak jumlah data yang akan ditambahkan
        while (iterasi < batas) {
            // Membuat objek sementara (temp) dari kelas Shirt
            Shirt temp = new Shirt();
            
            // Membaca input pengguna untuk setiap atribut Shirt
            int idProduct = scanner.nextInt();
            String name = scanner.next();
            String brand = scanner.next();
            int price = scanner.nextInt();
            String size = scanner.next();
            String material = scanner.next();
            String gender = scanner.next();
            String color = scanner.next();
            String sleeve_type = scanner.next();
            
            // Memeriksa apakah idProduct sudah ada di dalam list
            if (shirtList.stream().anyMatch(shirt -> shirt.getIdProduct() == idProduct)) {
                System.out.println("Input id tidak valid atau id sudah ada pada list. Data tidak ditambahkan.");
            } else {
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

                // Menambahkan objek sementara ke dalam list
                shirtList.add(temp);
            }
            
            // Increment variabel iterasi
            iterasi++;
        }

        // Menampilkan tabel data hasil input
        System.out.println("+------------------------------------------------------------------------------------------------------+");
        System.out.println("|                                              LIST BAJU                                               |");
        System.out.println("+------+--------------------+-----------+-------------+--------+-------------+----+---------+----------+");
        System.out.println("|  ID  |        NAMA        |   BRAND   |    HARGA    | UKURAN |    BAHAN    | JK |  WARNA  |  LENGAN  |");
        System.out.println("+------+--------------------+-----------+-------------+--------+-------------+----+---------+----------+");
        
        // Menampilkan data Shirt yang ada di dalam list
        for (Shirt shirt : shirtList) {
            System.out.printf("|%-6d|%-20s|%-11s|%-13d|%-8s|%-13s|%-4s|%-9s|%-10s|\n", shirt.getIdProduct(), shirt.getName(), shirt.getBrand(), shirt.getPrice(), shirt.getSize(), shirt.getMaterial(), shirt.getGender(), shirt.getColor(), shirt.getSleeve_type());
        }
        
        System.out.println("+------+--------------------+-----------+-------------+--------+-------------+----+---------+----------+");

        // Menutup scanner untuk menghindari memory leak
        scanner.close();
    }
}
