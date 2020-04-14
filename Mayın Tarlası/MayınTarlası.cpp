#include "pch.h"
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
bool elemanSeciliMi(int *secilenSatir, int *secilenSutun, int satir, int sutun) // Seçilen yerin kontrolü için
{
	for (int i = 0; i < sizeof(secilenSatir); i++) {
		if (secilenSatir[i] == satir && secilenSutun[i] == sutun) {
			return true;
		}
	}

	return false;
}
void matrisiDoldur(int **mptr, int satir, int sutun) // girilen satir ve sutun kadar rastgele 0 ve 1 lerden oluşan matris oluşturur
{
	for (int i = 0; i < satir; i++) {
		for (int j = 0; j < sutun; j++) {
			mptr[i][j] = rand() % 2;
		}
	}
}
void diziyiYazdir(int **mptr, int *secilenSatir, int *secilenSutun, int satir, int sutun)
{
	for (int i = 0; i < satir; i++) {
		for (int j = 0; j < sutun; j++) {
			if (elemanSeciliMi(secilenSatir, secilenSutun, i, j)) // seçilen yere bakar mayın varsa fonksiyondan dönen trueyu 1 yoksa falseyi 0 basar
			{
				if (sizeof(secilenSatir) == 0) { // hiç seçim yapılmamış olsa da seçim yapılmış ama yazdırılan eleman bastırılmıyorsa 5 basar
					cout << "5 ";
				}
				cout << mptr[i][j] << " ";
			}
			else {
				cout << "5 "; // 0 ve 1 leri gizlemek için sayıların yerine 5 basar
			}
		}
		cout << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(0)); 
	int satir, sutun, satirSecim, sutunSecim;
	cout << "Mayın Tarlasının boyutunu giriniz (Örn : 5 10)";
	cin >> satir >> sutun;
	if (satir < 0 && sutun < 0) // matrisin koşulunu sorgular
	{
		cout << "Satır veya Sutun 0dan küçük olamaz.";
	}
	else {
		int **matris = (int **)malloc(sizeof(int)*satir); // bellekte satır kadar yer ayırıyoruz
		for (int i = 0; i < satir; i++) {
			matris[i] = (int*)malloc(sizeof(int)*sutun); // bellekte sutun kadar yer ayırıyoruz
		}

		matrisiDoldur(matris, satir, sutun); // matrisin içini doldurur
		int *secilenSatir = (int *)malloc(sizeof(int)*satir*sutun);
		int *secilenSutun = (int *)malloc(sizeof(int)*satir*sutun);
		diziyiYazdir(matris, secilenSatir, secilenSatir, satir, sutun);

		for (int i = 0; i < (satir*sutun); i++) {
			cout << "Açmak istediğiniz indisleri giriniz (Örn 2 1)";
			cin >> satirSecim >> sutunSecim;
			if (satirSecim < 0 && sutunSecim < 0) // girilen matrisin koşulunu sorgular
			{
				cout << "0 dan kucuk seçim yapamazsınız" << endl;
			}
			else {
				secilenSatir[i] = satirSecim;
				secilenSutun[i] = sutunSecim;

				if (matris[satirSecim][sutunSecim] == 1) // seçilen yerde 1 olması durumunda oyun biter
				{
					cout << "Mayına bastınız" << endl;
					diziyiYazdir(matris, secilenSatir, secilenSutun, satir, sutun);// matrisin son halini bastırmak için
					cout << endl;
					for (int i = 0; i < satir; i++) {
						for (int j = 0; j < sutun; j++) {
							cout << matris[i][j]<<" ";
						}
						cout << endl;
					}
					return 0;
				}
				else {
					diziyiYazdir(matris, secilenSatir, secilenSutun, satir, sutun);
				}
			}
		}
	}
	return 0;
}