#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main() {


	setlocale(LC_ALL, "Turkish");

	srand(time(0));
	int rastgeleSayi = rand() % 9000 + 1000;
	int tahmin,tahminSayisi = 0;

	cout << "--------------------------SAYI TAHMÝN OYUNUNA HOÞGELDÝNÝZ-------------------------" << endl;

	do {
		cout << "1000-9999 arasýnda bir sayý belirlendi.Sayýyý tahmin edin: ";
		cin >> tahmin;
		tahminSayisi++;

		if (tahmin < rastgeleSayi) {
			cout << "Tahmin ettiðiniz sayý belirlenen sayýdan küçüktür!!" << endl << endl;
		}

		else if (tahmin > rastgeleSayi) {
			cout << "Tahmin ettiðiniz sayý belirlenen sayýdan büyüktür!!" << endl << endl;
		}

		else if (tahmin == rastgeleSayi) {
			cout << "Tebrikler dogru tahminde bulundunuz! " <<tahminSayisi<<". tahmininizde sayýyý buldunuz" << endl << endl;
			tahminSayisi = 0;
			rastgeleSayi = rand() % 9000 + 1000;
		}

	} while (true);

	






























	return 0;
}