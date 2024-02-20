/* Saya Alfen Fajri Nurulhaq (2201431) mengerjakan Latihan Prakitum 2 OOP class & encapsulation dalam mata
   kuliah Strukdat untuk keberkahanNya maka saya tidak
   melakukan kecurangan seperti yang telah dispesikasikan.Aamiin*/

// Mendefinisikan kelas Clothing sebagai subclass dari class Product
class Clothing extends Product {
    // Mendeklarasikan variabel privat untuk size, material, dan gender
    private String size;
    private String material;
    private String gender;

    // Konstruktor default tanpa parameter
    public Clothing() {
        // Inisialisasi nilai default untuk variabel size, material, dan gender
        this.size = "";
        this.material = "";
        this.gender = "";
    }

    // Konstruktor dengan parameter untuk inisialisasi nilai awal
    public Clothing(String size, String material, String gender) {
        // Menginisialisasi variabel dengan nilai dari parameter konstruktor
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    // Metode untuk mendapatkan nilai size
    public String getSize() {
        return size;
    }

    // Metode untuk mengatur nilai size
    public void setSize(String size) {
        this.size = size;
    }

    // Metode untuk mendapatkan nilai material
    public String getMaterial() {
        return material;
    }

    // Metode untuk mengatur nilai material
    public void setMaterial(String material) {
        this.material = material;
    }

    // Metode untuk mendapatkan nilai gender
    public String getGender() {
        return gender;
    }

    // Metode untuk mengatur nilai gender
    public void setGender(String gender) {
        this.gender = gender;
    }
}
