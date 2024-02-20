/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP class & encapsulation dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/

// Mendefinisikan kelas Shirt sebagai subclass dari class Clothing dan Superclass Product
class Shirt extends Clothing {
    // Mendeklarasikan variabel privat untuk color dan sleeve_type
    private String color;
    private String sleeve_type;

    // Konstruktor default tanpa parameter
    public Shirt() {
        // Inisialisasi nilai default untuk variabel color dan sleeve_type
        this.color = "";
        this.sleeve_type = "";
    }

    // Konstruktor dengan parameter untuk inisialisasi nilai awal
    public Shirt(int idProduct, String name, String brand, int price, String size, String material, String gender, String color, String sleeve_type) {
        // Memanggil konstruktor superclass (Clothing) dengan menggunakan kata kunci "super"
        super(size, material, gender);

        // Menginisialisasi variabel dengan nilai dari parameter konstruktor
        this.color = color;
        this.sleeve_type = sleeve_type;

        // Mengatur nilai variabel dari superclass (Product)
        setIdProduct(idProduct);
        setName(name);
        setBrand(brand);
        setPrice(price);
    }

    // Metode untuk mendapatkan nilai color
    public String getColor() {
        return color;
    }

    // Metode untuk mengatur nilai color
    public void setColor(String color) {
        this.color = color;
    }

    // Metode untuk mendapatkan nilai sleeve_type
    public String getSleeve_type() {
        return sleeve_type;
    }

    // Metode untuk mengatur nilai sleeve_type
    public void setSleeve_type(String sleeve_type) {
        this.sleeve_type = sleeve_type;
    }
}
