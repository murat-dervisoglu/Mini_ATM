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

	cout << "yapmak istedi�iniz i�lemi se�in:"<<endl;
	cout << "1- para �ekme  2- para yat�rma  3- bakiye sorgulama  4- ��k�� yap" << endl;
	cin >> islem;
	if (islem == 1)
	{
		cout << "bakiyeniz: "<< bakiye << endl;
		cout << "�ekmek istedi�iniz tutar� girin: ";
		cin >> cekilecektutar;
		if (cekilecektutar > bakiye)
		{
			cout << "bakiyeniz yetersiz. Ba�ka bir i�lem yapmak istiyor musunuz? (1- evet  2- Hay�r)";
			cin >> baskaislem;
			if (baskaislem == 1)
			{
				goto basadon;
			}
		}
		else if (cekilecektutar >islem_limiti)
		{
			cout << "i�lem limiti 4000 TL'dir. Ba�ka bir i�lem yapmak istiyor musunuz? (1- evet  2- Hay�r)";
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
			cout << "Ba�ka bir i�lem yapmak istiyor musunuz? (1- evet  2- Hay�r)";
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
		cout << "yat�rmak istedi�iniz tutar� girin: ";
		cin >> yatirilacaktutar;
		
		if (yatirilacaktutar > islem_limiti)
		{
			cout << "i�lem limiti 4000 TL'dir. Ba�ka bir i�lem yapmak istiyor musunuz? (1- evet  2- Hay�r)";
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
			cout << "Ba�ka bir i�lem yapmak istiyor musunuz? (1- evet  2- Hay�r)";
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
		cout << "Ba�ka bir i�lem yapmak istiyor musunuz? (1- evet  2- Hay�r)";
		cin >> baskaislem;
		if (baskaislem == 1)
		{
			goto basadon;
		}
	}
	
	return 0;
}