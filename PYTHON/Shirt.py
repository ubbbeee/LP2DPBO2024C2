# Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP
# Inheritance dalam mata
# kuliah Strukdat untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesikasikan.Aamiin

from Clothing import Clothing

# Mendefinisikan kelas Shirt sebagai subclass dari class Clothing dan Superclass Product
class Shirt(Clothing):
    # Mendeklarasikan variabel privat untuk color dan sleeve_type
    def __init__(self, idProduct=0, name="", brand="", price=0, size="", material="", gender="", color="", sleeve_type=""):
        # Memanggil konstruktor superclass (Clothing)
        super().__init__(size, material, gender)

        # Menginisialisasi variabel dengan nilai dari parameter konstruktor
        self.color = color
        self.sleeve_type = sleeve_type

        # Mengatur nilai variabel dari superclass (Product)
        self.set_id_product(idProduct)
        self.set_name(name)
        self.set_brand(brand)
        self.set_price(price)

    # Metode untuk mendapatkan nilai color
    def get_color(self):
        return self.color

    # Metode untuk mengatur nilai color
    def set_color(self, color):
        self.color = color

    # Metode untuk mendapatkan nilai sleeve_type
    def get_sleeve_type(self):
        return self.sleeve_type

    # Metode untuk mengatur nilai sleeve_type
    def set_sleeve_type(self, sleeve_type):
        self.sleeve_type = sleeve_type
