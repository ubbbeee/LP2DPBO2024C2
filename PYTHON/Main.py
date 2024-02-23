# Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP
# Inheritance dalam mata
# kuliah Strukdat untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesikasikan.Aamiin

# Mengimpor modul untuk menerima input dari pengguna
from typing import List

# Mengimpor kelas Shirt
from Shirt import Shirt

def main():
    # Membuat list untuk menyimpan objek-objek Shirt
    shirt_list: List[Shirt] = []

    # Deklarasi variabel batas dan iterasi
    batas = 0
    iterasi = 0

    # Menampilkan pesan untuk meminta jumlah data yang akan ditambahkan
    print("Silahkan Masukkan Berapa Data Yang Akan Ditambahkan")

    # Membaca input pengguna untuk jumlah data yang akan ditambahkan
    batas = int(input())

    # Menampilkan pesan untuk meminta input data
    print("Silahkan Masukkan Data Yang Akan Anda Tambahkan")
    # print("\n")
    # Melakukan loop sebanyak jumlah data yang akan ditambahkan
    while iterasi < batas:
        # Membuat objek sementara (temp) dari kelas Shirt
        temp = Shirt()

        # Membaca input pengguna untuk setiap atribut Shirt
        id_product = int(input())
        name = input()
        brand = input()
        price = int(input())
        size = input()
        material = input()
        gender = input()
        color = input()
        sleeve_type = input()

        # Memeriksa apakah id_product sudah ada di dalam list
        if any(shirt.get_id_product() == id_product for shirt in shirt_list):
            print("Input id tidak valid atau id sudah ada pada list. Data tidak ditambahkan.")
        else:
            # Mengatur nilai atribut objek sementara
            temp.set_id_product(id_product)
            temp.set_name(name)
            temp.set_brand(brand)
            temp.set_price(price)
            temp.set_size(size)
            temp.set_material(material)
            temp.set_gender(gender)
            temp.set_color(color)
            temp.set_sleeve_type(sleeve_type)

            # Menambahkan objek sementara ke dalam list
            shirt_list.append(temp)

        # Increment variabel iterasi
        iterasi += 1
    print()
    print("List Baju")
    # Menampilkan data Shirt yang ada di dalam list
    for shirt in shirt_list:
        print(f"Data Ke - {shirt.get_id_product()}\nNama: {shirt.get_name()}\nMerk {shirt.get_brand()}\nHarga: Rp.{shirt.get_price()},-\nUkuran: {shirt.get_size()}\nBahan: {shirt.get_material()}\nJenis Kelamin: {shirt.get_gender()}\nWarna: {shirt.get_color()}\nLengan: {shirt.get_sleeve_type()}\n")

if __name__ == "__main__":
    main()
