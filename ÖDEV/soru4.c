#include <iostream>
#include <string>

using namespace std;

struct Ogrenci {
    string ad;
    string soyad;
    int no;
    string adres;
};

int main() {
    Ogrenci ogrenciler[5];

    // 1. öğrenci
    ogrenciler[0].ad = "Kemal";
    ogrenciler[0].soyad = "Sunal";
    ogrenciler[0].no = 111;
    ogrenciler[0].adres = "İstanbul";

    // 2. öğrenci
    ogrenciler[1].ad = "Ayşe";
    ogrenciler[1].soyad = "Kaya";
    ogrenciler[1].no = 222;
    ogrenciler[1].adres = "Ankara";

    // 3. öğrenci
    ogrenciler[2].ad = "Mehmet";
    ogrenciler[2].soyad = "Demir";
    ogrenciler[2].no = 333;
    ogrenciler[2].adres = "İzmir";

    // 4. öğrenci
    ogrenciler[3].ad = "İrem";
    ogrenciler[3].soyad = "Yılmaz";
    ogrenciler[3].no = 444;
    ogrenciler[3].adres = "Bursa";

    // 5. öğrenci
    ogrenciler[4].ad = "Ahmet";
    ogrenciler[4].soyad = "Yıldız";
    ogrenciler[4].no = 5555;
    ogrenciler[4].adres = "Antalya";

    // Öğrenci bilgilerini ekrana yazdırma
    for(int i = 0; i < 5; i++) {
        cout << "Öğrenci " << i+1 << ":\n";
        cout << "Ad: " << ogrenciler[i].ad << endl;
        cout << "Soyad: " << ogrenciler[i].soyad << endl;
        cout << "No: " << ogrenciler[i].no << endl;
        cout << "Adres: " << ogrenciler[i].adres << endl;
        cout << endl;
    }

    return 0;
}

/*
Yorum : Bu kod, 5 öğrencinin kişisel bilgilerini ve adres bilgilerini depolamak için Ogrenci adlı bir struct tanımlar. Ardından, bu struct'ı kullanarak öğrenci bilgilerini depolamak için 5 elemanlı bir dizi oluşturur.

Sonrasında, her bir öğrenci için ayrı ayrı bilgileri atar ve son olarak for döngüsüyle her öğrencinin bilgilerini ekrana yazdırır. */
