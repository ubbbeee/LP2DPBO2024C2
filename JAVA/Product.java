/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP class & encapsulation dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/

// Mendefinisikan kelas Product sebagai class utama atau parent
public class Product {
    // Mendeklarasikan variabel privat untuk idProduct, name, brand, dan price
    private int idProduct;
    private String name;
    private String brand;
    private int price;

    // Konstruktor default tanpa parameter
    public Product() {
        // Inisialisasi nilai default untuk variabel
        this.idProduct = 0;
        this.name = "";
        this.brand = "";
        this.price = 0;
    }

    // Konstruktor dengan parameter untuk inisialisasi nilai awal
    public Product(int idProduct, String name, String brand, int price) {
        // Menginisialisasi variabel dengan nilai dari parameter konstruktor
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    // Metode untuk mendapatkan nilai idProduct
    public int getIdProduct() {
        return this.idProduct;
    }

    // Metode untuk mengatur nilai idProduct
    public void setIdProduct(int idProduct) {
        this.idProduct = idProduct;
    }

    // Metode untuk mendapatkan nilai name
    public String getName() {
        return name;
    }

    // Metode untuk mengatur nilai name
    public void setName(String name) {
        this.name = name;
    }

    // Metode untuk mendapatkan nilai brand
    public String getBrand() {
        return brand;
    }

    // Metode untuk mengatur nilai brand
    public void setBrand(String brand) {
        this.brand = brand;
    }

    // Metode untuk mendapatkan nilai price
    public int getPrice() {
        return price;
    }

    // Metode untuk mengatur nilai price
    public void setPrice(int price) {
        this.price = price;
    }
}
