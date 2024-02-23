# Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP
# Inheritance dalam mata
# kuliah Strukdat untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesikasikan.Aamiin

from Product import Product
# Mendefinisikan kelas Clothing sebagai subclass dari class Product
class Clothing(Product):
    # Mendeklarasikan variabel privat untuk size, material, dan gender
    def __init__(self, size="", material="", gender=""):
        # Memanggil konstruktor dari superclass (Product)
        super().__init__()
        # Inisialisasi nilai default untuk variabel size, material, dan gender
        self.size = size
        self.material = material
        self.gender = gender

    # Metode untuk mendapatkan nilai size
    def get_size(self):
        return self.size

    # Metode untuk mengatur nilai size
    def set_size(self, size):
        self.size = size

    # Metode untuk mendapatkan nilai material
    def get_material(self):
        return self.material

    # Metode untuk mengatur nilai material
    def set_material(self, material):
        self.material = material

    # Metode untuk mendapatkan nilai gender
    def get_gender(self):
        return self.gender

    # Metode untuk mengatur nilai gender
    def set_gender(self, gender):
        self.gender = gender
