#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main() {


	setlocale(LC_ALL, "Turkish");

	srand(time(0));
	int rastgeleSayi = rand() % 9000 + 1000;
	int tahmin,tahminSayisi = 0;

	cout << "--------------------------SAYI TAHM�N OYUNUNA HO�GELD�N�Z-------------------------" << endl;

	do {
		cout << "1000-9999 aras�nda bir say� belirlendi.Say�y� tahmin edin: ";
		cin >> tahmin;
		tahminSayisi++;

		if (tahmin < rastgeleSayi) {
			cout << "Tahmin etti�iniz say� belirlenen say�dan k���kt�r!!" << endl << endl;
		}

		else if (tahmin > rastgeleSayi) {
			cout << "Tahmin etti�iniz say� belirlenen say�dan b�y�kt�r!!" << endl << endl;
		}

		else if (tahmin == rastgeleSayi) {
			cout << "Tebrikler dogru tahminde bulundunuz! " <<tahminSayisi<<". tahmininizde say�y� buldunuz" << endl << endl;
			tahminSayisi = 0;
			rastgeleSayi = rand() % 9000 + 1000;
		}

	} while (true);

	






























	return 0;
}