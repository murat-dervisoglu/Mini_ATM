#include <iostream>
#include <fstream>
#include <string>
#include <locale>  
#include <clocale> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int bakiye = 20000, islem_limiti = 4000, islem, cekilecektutar,yatirilacaktutar, baskaislem;

	basadon:

	cout << "yapmak istediðiniz iþlemi seçin:"<<endl;
	cout << "1- para çekme  2- para yatýrma  3- bakiye sorgulama  4- çýkýþ yap" << endl;
	cin >> islem;
	if (islem == 1)
	{
		cout << "bakiyeniz: "<< bakiye << endl;
		cout << "çekmek istediðiniz tutarý girin: ";
		cin >> cekilecektutar;
		if (cekilecektutar > bakiye)
		{
			cout << "bakiyeniz yetersiz. Baþka bir iþlem yapmak istiyor musunuz? (1- evet  2- Hayýr)";
			cin >> baskaislem;
			if (baskaislem == 1)
			{
				goto basadon;
			}
		}
		else if (cekilecektutar >islem_limiti)
		{
			cout << "iþlem limiti 4000 TL'dir. Baþka bir iþlem yapmak istiyor musunuz? (1- evet  2- Hayýr)";
			cin >> baskaislem;
			if (baskaislem == 1)
			{
				goto basadon;
			}
		}
		else
		{
			bakiye = bakiye - cekilecektutar;
			cout << "yeni bakiyeniz: " << bakiye << endl;
			cout << "Baþka bir iþlem yapmak istiyor musunuz? (1- evet  2- Hayýr)";
			cin >> baskaislem;
			if (baskaislem == 1)
			{
				goto basadon;
			}
		}
	}

	else if (islem == 2)
	{
		cout << "bakiyeniz: " << bakiye << endl;
		cout << "yatýrmak istediðiniz tutarý girin: ";
		cin >> yatirilacaktutar;
		
		if (yatirilacaktutar > islem_limiti)
		{
			cout << "iþlem limiti 4000 TL'dir. Baþka bir iþlem yapmak istiyor musunuz? (1- evet  2- Hayýr)";
			cin >> baskaislem;
			if (baskaislem == 1)
			{
				goto basadon;
			}
		}

		else
		{
			bakiye = bakiye + yatirilacaktutar;
			cout << "yeni bakiyeniz: " << bakiye << endl;
			cout << "Baþka bir iþlem yapmak istiyor musunuz? (1- evet  2- Hayýr)";
			cin >> baskaislem;
			if (baskaislem == 1)
			{
				goto basadon;
			}
		}
	}
	else if (islem == 3)
	{
		cout << "bakiyeniz: " << bakiye << endl;
		cout << "Baþka bir iþlem yapmak istiyor musunuz? (1- evet  2- Hayýr)";
		cin >> baskaislem;
		if (baskaislem == 1)
		{
			goto basadon;
		}
	}
	
	return 0;
}