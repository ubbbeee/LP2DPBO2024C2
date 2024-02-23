# Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP
# Inheritance dalam mata
# kuliah Strukdat untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesikasikan.Aamiin

# Mendefinisikan kelas Product sebagai class utama atau parent
class Product:
    # Mendeklarasikan variabel privat untuk idProduct, name, brand, dan price
    def __init__(self, idProduct=0, name="", brand="", price=0):
        # Inisialisasi nilai default untuk variabel
        self.idProduct = idProduct
        self.name = name
        self.brand = brand
        self.price = price

    # Metode untuk mendapatkan nilai idProduct
    def get_id_product(self):
        return self.idProduct

    # Metode untuk mengatur nilai idProduct
    def set_id_product(self, idProduct):
        self.idProduct = idProduct

    # Metode untuk mendapatkan nilai name
    def get_name(self):
        return self.name

    # Metode untuk mengatur nilai name
    def set_name(self, name):
        self.name = name

    # Metode untuk mendapatkan nilai brand
    def get_brand(self):
        return self.brand

    # Metode untuk mengatur nilai brand
    def set_brand(self, brand):
        self.brand = brand

    # Metode untuk mendapatkan nilai price
    def get_price(self):
        return self.price

    # Metode untuk mengatur nilai price
    def set_price(self, price):
        self.price = price
