#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;



class Barang {
private:
    string namaBrg;
    int hargaBrg;
    int ongkirBrg;
public:
    //constructor barang
    Barang(){
        namaBrg = "";
        hargaBrg = 0;
        ongkirBrg = 0;   
    }

    void setBarang(){
        cout <<"\t\t+------------------------------------------+"<<endl;
        cout <<"\t\t|               DATA BARANG                |"<<endl;
        cout <<"\t\t+------------------------------------------+"<<endl;
        cout << "\t\t Masukan Nama Barang     : ";
        cin  >> namaBrg;
    }

    void setHarga(){
        cout << "\t\t Masukan Harga Barang    : ";
        cin  >> hargaBrg;
        cout << "\t\t Masukan Ongkos Kirim    : ";
        cin  >> ongkirBrg;
        cout <<"\t\t+------------------------------------------+"<<endl;
        cout << endl;
    }

    string getNamaBarang() {
        
        return namaBrg;
    }
    // 
    int getHargaBarang() {
        return hargaBrg;
    }
    
    int getHargaOngkir() {
        return ongkirBrg;
    }
};

class Pajak
{
private:
    int pajakLokal;
    int cukai;
    int pajakInter;

public: 

    // Method Hitung Pajak Lokal
    int setPajakLokal(Barang barang)
    {
        pajakLokal = 0.11 * barang.getHargaBarang();
        return pajakLokal;
    }

    // Method Hitung Bea Cukai
    int setCukai(Barang barang)
    {
        cukai = 0.06 * (barang.getHargaBarang() + barang.getHargaOngkir());
        return cukai;
    }

    // Method Hitung Pajak Inter
    int setPajakInter(Barang barang)
    {
        pajakInter = 0.10 * barang.getHargaBarang();
        return pajakInter;
    }

    // Menampilkan Detail harga dan Pajak Lokal untuk Barang User
    void getPajakLokal(Barang barang)
    {
        cout << "\t\tNama Barang        : " << barang.getNamaBarang() << endl;
        cout << "\t\t================Pajak Lokal================" << endl;
        cout << "\t\tHarga Barang       : Rp. " << barang.getHargaBarang() << endl;
        cout << "\t\tOngos Kirim        : Rp. " << barang.getHargaOngkir() << endl;
        setPajakLokal(barang);
        cout << "\t\tPajak Lokal (11%)  : Rp. " << pajakLokal << endl;
        cout << "\t\tTotal              : Rp. " << barang.getHargaBarang() + barang.getHargaOngkir() + pajakLokal << endl;
        cout << "\t\t===========================================" << endl;
        cout << endl;
    }

    // Menampilkan Detail harga, cukai dan Pajak inter untuk barang User
    void getPajakInter(Barang barang)
    {
        cout << "\t\tNama Barang        : " << barang.getNamaBarang() << endl;
        cout << "\t\t============Pajak Internasional============" << endl;
        cout << "\t\tHarga Barang       : Rp. " << barang.getHargaBarang() << endl;
        cout << "\t\tOngos Kirim        : Rp. " << barang.getHargaOngkir() << endl;
        setCukai(barang);
        cout << "\t\tCukai (6%)         : Rp. " << cukai << endl;
        setPajakInter(barang);
        cout << "\t\tPajak Inter (10%)  : Rp. " << pajakInter << endl;
        cout << "\t\tTotal              : Rp. " << barang.getHargaBarang() + barang.getHargaOngkir() + pajakInter + cukai << endl;
        cout << "\t\t===========================================" << endl;
        cout << endl;
    }
};

class Pembeli{
    public:
        string namaPembeli;
        string notelp;
        string alamat;
    
    void setPembeli(){
        cout <<"\t\t+------------------------------------------+"<<endl;
        cout <<"\t\t|               DATA PEMBELI               |"<<endl;
        cout <<"\t\t+------------------------------------------+"<<endl;
        cout <<"\t\t Masukan nama pembeli    : "; cin >> namaPembeli;
        cout <<"\t\t Masukan no telp         : "; cin >> notelp;
        cout <<"\t\t Masukan alamat          : "; cin >> alamat;
        cout <<"\t\t+-------------------------------------------"<<endl;
    }

    void getPembeli(){
        cout << "\t\t===========================================" << endl;
        cout << "\t\tNama pembeli       : " << namaPembeli <<endl;
        cout << "\t\tNo. Telp           : " << notelp <<endl;
        cout << "\t\tAlamat             : " << alamat <<endl;
        cout << "\t\t===========================================" << endl;
    }
};

class Penjual{
    public:
        string namaPenjual;
        string notelp;
        string alamat;
    
    void setPenjual(){
        cout <<"\t\t+------------------------------------------+"<<endl;
        cout <<"\t\t|               DATA PENJUAL               |"<<endl;
        cout <<"\t\t+------------------------------------------+"<<endl;
        cout <<"\t\t Masukan nama Penjual    : "; cin >> namaPenjual;
        cout <<"\t\t Masukan no telp         : "; cin >> notelp;
        cout <<"\t\t Masukan alamat          : "; cin >> alamat;
        cout <<"\t\t+-------------------------------------------"<<endl;
    }

    void getPenjual(){
        cout << "\t\tNama Penjual       : " << namaPenjual <<endl;
        cout << "\t\tNo. Telp           : " << notelp <<endl;
        cout << "\t\tAlamat             : " << alamat <<endl;
        cout << "\t\t===========================================" << endl;
    }
};

void judul(){
    cout << "\x1B[36m     _____ ____ ____ _____ ___ _____ ___  __  _____ _____    __ ___   _____\033[0m\t\t"<<endl;
    cout << "\x1B[36m    / _  // _ //__ // ___/ _ // _  //_  |/ / / _  // _  //_ / // _ | / //_/\033[0m\t\t"<<endl;
    cout << "\x1B[36m   / ___/ , _// _/ / (_ / , _/ __ |/ /|_/ / / ___/ __  / __/ // __ |/ ,<\033[0m\t\t"<< endl;   
    cout << "\x1B[36m  /_/  /_/|_|/____//___/_//_/_/ |_/_/  /_/ /_/  /_/ |_//____// |_/_/__|_|\033[0m\t\t"<<endl;
    cout <<"\x1B[36m++=======================================================================++\033[0m\t\t"<<endl;
}

int main()
{
    
    Barang barang;
    Pajak pajak;
    Pembeli pembeli;
    Penjual penjual;

    int pil;
    system("cls");
    judul();
    cout << endl;
    pembeli.setPembeli();
    system("cls");
    judul();
    penjual.setPenjual();
    system("cls");
    judul();
    barang.setBarang();
    barang.setHarga();

menu:
    system("cls");
    judul();
    pembeli.getPembeli();
    penjual.getPenjual();
    cout << "\t\tNama Barang        : " << barang.getNamaBarang() << endl;
    cout << "\t\tHarga Barang       : Rp. " << barang.getHargaBarang() << endl;
    cout << "\t\tOngos Kirim        : Rp. " << barang.getHargaOngkir() << endl;
    cout << "\t\t===========================================" << endl;

    cout << "\t\tMenu: " << endl;
    cout << "\t\t1. Pajak Lokal" << endl;
    cout << "\t\t2. Pajak Inter" << endl;
    cout << "\t\t0. Exit" << endl;
    cout << "\t\tMasukkan Pilihan Anda: ";
    cin >> pil;
    cout << endl;

    if (pil == 1)
    {
        system("cls");
        judul();
        pembeli.getPembeli();
        penjual.getPenjual();
        pajak.getPajakLokal(barang);
        cout <<"\t\tPress any key to continue...";
        getch();
    }
    if (pil == 2)
    {
        system("cls");
        judul();
        pembeli.getPembeli();
        penjual.getPenjual();
        pajak.getPajakInter(barang);
        cout <<"\t\tPress any key to continue...";
        getch();
    }
    if (pil == 0)
    {
        cout <<"\t\tTerima kasih telah menggunakan program kami 🦄😉👍❤️"<<endl;
        cout <<"\t\t--------------------------------------------------"<<endl;
        cout <<"\t\t\t\tAnggota Kelompok"<<endl;
        cout <<"\t\t--------------------------------------------------"<<endl;
        cout <<"\t\t\t21081010001 Mochammad Fahmi Yasir"<<endl;
        cout <<"\t\t\t21081010009 Cintya Juanita Elizabeth K."<<endl;
        cout <<"\t\t\t21081010034 Jihan Octavia Salsabillah H."<<endl;
        cout <<"\t\t\t21081010054 Adham Roy Bhafiel"<<endl;
        cout <<"\t\t--------------------------------------------------"<<endl;
        goto exit;
    }
    else
    {
        system("cls");
        judul();
        cout << "\t\tPilihan yang anda masukkan salah" << endl;
        goto menu;
    }
exit:
    return 0;
}
