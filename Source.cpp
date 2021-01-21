#include <iostream>;
#include <string>;
#include <fstream>;
#include <Windows.h>;

using namespace std;

class Postac
{
public:
	float maxHP = 0;
	float HP = 0;
	int Strength = 0;
	int Intelligence = 0;
	int Agility = 0;
	int Luck = 0;
	float DMG = (Intelligence*0.7)+(Strength*0.5)+(Agility*0.5);
	string imie = "";
	int x = 0;
	int y = 0;
	int slepa = 0;
	int il_mikstur = 0;
};
class Enemy
{
public:
	float HP = 30.0;
	float DMG = 10.0;
};

class Cz這wiek
{
	public:
		float HP = 100.0;
		int Strength = 15;
		int Intelligence = 15;
		int Agility = 15;
		int Luck = 15;
		
};
class Wojownik
{
public:
	float HP = 150.0;
	int Strength = 25;
	int Intelligence = 5;
	int Agility = 10;
	int Luck = 15;
	
};
class υtrzyk
{
public:
	float HP = 70.0;
	int Strength = 5;
	int Intelligence = 25;
	int Agility = 40;
	int Luck = 30;
	
};
class Mag
{
public:
	float HP = 60.0;
	int Strength = 5;
	int Intelligence = 60;
	int Agility = 15;
	int Luck = 20;
	
};
class Lokacja
{
public:
	string istnieje;
	int x;
	int y;
	string item;
	string przeciwnik;
	bool w;
	bool a;
	bool s;
	bool d;
};

Postac mojaPostac;
Wojownik wojownik;
Cz這wiek cz這wiek;
Mag mag;
υtrzyk 這trzyk;
Enemy minion;
Enemy boss;
Lokacja mapa[10][10] = { { {"+",0,0,"","",false,false,true,true},{"+",1,0,"runa_w","",false,true,true,false},{},{} ,{},{"+",5,0,"runa_wsz","",false,false,true,true},{"+",6,0,"runa_wsz","",false,true,true,false},{},{},{}},
						 { {"+",0,1,"mikstura","",true,false,false,true},{"+",1,1,"","poz_1",true,true,false,true},{"+",2,1,"","",false,true,false,true},{"+",3,1,"","",false,true,true,false},{},{"+",5,1,"runa_w","",true,false,false,true},{"+",6,1,"runa_i","",true,true,false,true},{"+",7,1,"","poz_3",false,true,false,true},{"+",8,1,"","",false,true,true,false},{} },
						 { {},{},{},{"+",3,2,"","",true,false,true,false},{},{},{},{},{"+",8,2,"runa_wsz","poz_3",true,false,true,true},{"+",9,2,"runa_z","",false,true,false,false} },
						 { {},{"+",1,3,"mikstura","",false,false,true,true},{"+",2,3,"mikstura","",false,true,true,true},{"+",3,3,"mikstura","poz_1",true,true,false,true},{"+",4,3,"","",false,true,false,true},{"+",5,3,"misktura","",false,true,true,true},{"+",6,3,"mikstura","",false,true,true,false},{},{"+",8,3,"","",true,false,true,false},{}  },
						 { {},{"+",1,4,"","",true,false,true,true},{"+",2,4,"mikstura","",true,true,true,false},{},{},{"+",5,4,"","",true,false,false,true},{"+",6,4,"mikstura","",true,true,true,false},{},{"+",8,4,"","",true,false,true,false},{}  },
						 { {"+",0,5,"runa_w","",false,false,false,true},{"+",1,5,"","poz_2",true,true,true,true},{"+",2,5,"mikstura","",true,true,true,true},{"+",3,5,"mikstura","",false,true,true,true},{"+",4,5,"","",false,true,true,false},{},{"+",6,5,"mikstura","",true,false,true,true},{"+",7,5,"mikstura","",false,true,false,true},{"+",8,5,"","poz_3",true,true,true,true},{"+",9,5,"runa_w","",false,true,false,false}   },
						 { {},{"+",1,6,"","",true,false,false,true},{"+",2,6,"","",true,true,false,true},{"+",3,6,"","",true,true,false,true},{"+",4,6,"","",true,true,true,false},{},{"+",6,6,"","",true,false,true,false},{},{"+",8,6,"mikstura","",true,false,true,false},{}  },
						 { {},{},{},{},{"+",4,7,"","",true,false,true,false},{},{"+",6,7,"","",true,false,false,true},{"+",7,7,"","",false,true,false,true},{"+",8,7,"mikstura","poz_3",true,true,true,false},{}	},
						 { {},{"+",1,8,"","",false,false,true,true},{"+",2,8,"","",false,true,false,true},{"+",3,8,"","poz_2",false,true,true,true},{"+",4,8,"","poz_2",true,true,true,false},{},{},{},{"+",8,8,"","",true,false,true,false},{}	},
						 { {},{"+",1,9,"runa_m","",true,false,false,false},{},{"+",3,9,"","",true,false,false,true},{"+",4,9,"runa_z","",true,true,false,true},{"+",5,9,"mikstura","",false,true,false,true},{"+",6,9,"runa_i","",false,true,false,false},{},{"+",8,9,"mikstura","",true,false,false,true},{"+",9,9,"","boss",false,true,false,false}	} };
void wybor()
{
	cout << "Wybierz klase postaci" << endl;
	cout << "1. Wojownik" << endl << "2. Czlowiek" << endl << "3. Mag" << endl << "4. Lotrzyk" << endl << "Defaultowo wybierze sie klasa Czlowiek" << endl;
	int wybor;
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		mojaPostac.maxHP = wojownik.HP;
		mojaPostac.HP = wojownik.HP;
		mojaPostac.Strength = wojownik.Strength;
		mojaPostac.Intelligence = wojownik.Intelligence;
		mojaPostac.Agility = wojownik.Agility;
		mojaPostac.Luck = wojownik.Luck;
		mojaPostac.DMG = (mojaPostac.Intelligence * 0.3) + (mojaPostac.Strength * 0.5) + (mojaPostac.Agility * 0.5);
		system("cls");
		cout << "Wybrales wojownika" << endl;
		break;

	case 2:
		mojaPostac.maxHP = cz這wiek.HP;
		mojaPostac.HP = cz這wiek.HP;
		mojaPostac.Strength = cz這wiek.Strength;
		mojaPostac.Intelligence = cz這wiek.Intelligence;
		mojaPostac.Agility = cz這wiek.Agility;
		mojaPostac.Luck = cz這wiek.Luck;
		mojaPostac.DMG = (mojaPostac.Intelligence * 0.7) + (mojaPostac.Strength * 0.5) + (mojaPostac.Agility * 0.5);
		system("cls");
		cout << "Wybrales czlowieka" << endl;
		break;
	case 3:
		mojaPostac.maxHP = mag.HP;
		mojaPostac.HP = mag.HP;
		mojaPostac.Strength = mag.Strength;
		mojaPostac.Intelligence = mag.Intelligence;
		mojaPostac.Agility = mag.Agility;
		mojaPostac.Luck = mag.Luck;
		mojaPostac.DMG = (mojaPostac.Intelligence * 0.7) + (mojaPostac.Strength * 0.5) + (mojaPostac.Agility * 0.5);
		system("cls");
		cout << "Wybrales maga" << endl;
		break;
	case 4:
		mojaPostac.maxHP = 這trzyk.HP;
		mojaPostac.HP = 這trzyk.HP;
		mojaPostac.Strength = 這trzyk.Strength;
		mojaPostac.Intelligence = 這trzyk.Intelligence;
		mojaPostac.Agility = 這trzyk.Agility;
		mojaPostac.Luck = 這trzyk.Luck;
		mojaPostac.DMG = (mojaPostac.Intelligence * 0.7) + (mojaPostac.Strength * 0.5) + (mojaPostac.Agility * 0.5);
		system("cls");
		cout << "Wybrales lotrzyka" << endl;
		break;


	default:
		mojaPostac.maxHP = cz這wiek.HP;
		mojaPostac.HP = cz這wiek.HP;
		mojaPostac.Strength = cz這wiek.Strength;
		mojaPostac.Intelligence = cz這wiek.Intelligence;
		mojaPostac.Agility = cz這wiek.Agility;
		mojaPostac.Luck = cz這wiek.Luck;
		mojaPostac.DMG = (mojaPostac.Intelligence * 0.7) + (mojaPostac.Strength * 0.5) + (mojaPostac.Agility * 0.5);
		system("cls");
		cout << "Wybrales czlowieka" << endl;
		break;
	}
	cout << mojaPostac.imie << endl;
	cout << "Twoje statystki: " << endl;
	cout << "HP: " << mojaPostac.HP<<"/"<<mojaPostac.maxHP << endl;
	cout << "Strength: " << mojaPostac.Strength << endl;
	cout << "Intelligence: " << mojaPostac.Intelligence << endl;
	cout << "Agility: " << mojaPostac.Agility << endl;
	cout << "Luck: " << mojaPostac.Luck << endl;
	cout << "DMG: " << mojaPostac.DMG << endl;
	Sleep(3000);
	system("cls");
}
void start()
{
	cout << "Wybierz poziom trudnosci" << endl;
	cout << "1.Normalny" << endl;
	cout << "2.Na slepo" << endl;
	int poziom;
	cin >> poziom;
	switch (poziom)
	{
	case 1:
	{
		mojaPostac.slepa = 0;
		break;
	}
	case 2:
	{
		mojaPostac.slepa = 1;
		break;
	}
	default:
		mojaPostac.slepa = 1;
		break;
	}
	system("cls");
	cout << "Nazwa postaci: ";
	string imie;
	cin >> imie;
	system("cls");
	mojaPostac.imie = imie;
}

void statystyki()
{
	system("cls");
	cout << mojaPostac.imie << endl;
	cout << "Twoje statystki: " << endl;
	cout << "HP: " << mojaPostac.HP<<"/"<<mojaPostac.maxHP << endl;
	cout << "Strength: " << mojaPostac.Strength << endl;
	cout << "Intelligence: " << mojaPostac.Intelligence << endl;
	cout << "Agility: " << mojaPostac.Agility << endl;
	cout << "Luck: " << mojaPostac.Luck << endl;
	cout << "DMG: " << mojaPostac.DMG << endl;
	cout << "Ilosc mikstur: " << mojaPostac.il_mikstur << endl;
	system("pause");
	system("cls");
}
void zapisz_stats()
{
	ofstream zapis;
	zapis.open("statystyki.txt");
	if (zapis.good())
	{
		
		zapis << mojaPostac.HP << endl;
		zapis << mojaPostac.Strength<<endl;
		zapis  << mojaPostac.Intelligence <<  endl;
		zapis  << mojaPostac.Agility <<  endl;
		zapis  << mojaPostac.Luck << endl;
		zapis  << mojaPostac.DMG <<  endl;
		zapis << mojaPostac.x << endl;
		zapis << mojaPostac.y << endl;
		zapis << mojaPostac.slepa << endl;
		zapis << mojaPostac.maxHP << endl;
		zapis << mojaPostac.il_mikstur << endl;
	}
	else
	{
		
	}
	zapis.close();
	zapis.open("lokacje.txt");
	if (zapis.good())
	{
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				zapis << mapa[i][j].item << endl;
				zapis << mapa[i][j].przeciwnik << endl;
			}
		}
	}
	else
	{

	}
	zapis.close();
}

void wczytaj_stats()
{
	ifstream odczyt;
	odczyt.open("statystyki.txt");


	if (odczyt.good())
	{
		//jak zmodyfikowac funkcje aby dzialala dla dowolnej tablicy
		
			string linia;
			int nr_linii = 1;
			while (getline(odczyt, linia))
			{
				switch (nr_linii)
				{
				case 1: mojaPostac.HP = atof(linia.c_str()); break;
				case 2: mojaPostac.Strength = atof(linia.c_str()); break;
				case 3: mojaPostac.Intelligence = atof(linia.c_str()); break;
				case 4: mojaPostac.Agility = atof(linia.c_str()); break;
				case 5: mojaPostac.Luck = atof(linia.c_str()); break;
				case 6: mojaPostac.DMG = atof(linia.c_str()); break;
				case 7: mojaPostac.x = atof(linia.c_str()); break;
				case 8: mojaPostac.y = atof(linia.c_str()); break;
				case 9: mojaPostac.slepa = atof(linia.c_str()); break;
				case 10: mojaPostac.maxHP = atof(linia.c_str()); break;
				case 11: mojaPostac.il_mikstur = atof(linia.c_str()); break;
				}
				nr_linii++;
			}
		
	}
	else
	{

	}

	odczyt.close();

	
	
}
void wczytaj_lokacje() {
	ifstream odczyt;
	odczyt.open("lokacje.txt");


	if (odczyt.good())
	{
		//jak zmodyfikowac funkcje aby dzialala dla dowolnej tablicy

		string linia;
		int nr_linii = 1;
		while (getline(odczyt, linia))
		{
			switch (nr_linii)
			{
			case 1: mapa[0][0].item = linia; break;
			case 2: mapa[0][0].przeciwnik = linia; break;
			case 3: mapa[0][1].item = linia; break;
			case 4: mapa[0][1].przeciwnik = linia; break;
			case 5: mapa[0][2].item = linia; break;
			case 6: mapa[0][2].przeciwnik = linia; break;
			case 7: mapa[0][3].item = linia; break;
			case 8: mapa[0][3].przeciwnik = linia; break;
			case 9: mapa[0][4].item = linia; break;
			case 10: mapa[0][4].przeciwnik = linia; break;
			case 11: mapa[0][5].item = linia; break;
			case 12: mapa[0][5].przeciwnik = linia; break;
			case 13: mapa[0][6].item = linia; break;
			case 14: mapa[0][6].przeciwnik = linia; break;
			case 15: mapa[0][7].item = linia; break;
			case 16: mapa[0][7].przeciwnik = linia; break;
			case 17: mapa[0][8].item = linia; break;
			case 18: mapa[0][8].przeciwnik = linia; break;
			case 19: mapa[0][9].item = linia; break;
			case 20: mapa[0][9].przeciwnik = linia; break;
			case 21: mapa[1][0].item = linia; break;
			case 22: mapa[1][0].przeciwnik = linia; break;
			case 23: mapa[1][1].item = linia; break;
			case 24: mapa[1][1].przeciwnik = linia; break;
			case 25: mapa[1][2].item = linia; break;
			case 26: mapa[1][2].przeciwnik = linia; break;
			case 27: mapa[1][3].item = linia; break;
			case 28: mapa[1][3].przeciwnik = linia; break;
			case 29: mapa[1][4].item = linia; break;
			case 30: mapa[1][4].przeciwnik = linia; break;
			case 31: mapa[1][5].item = linia; break;
			case 32: mapa[1][5].przeciwnik = linia; break;
			case 33: mapa[1][6].item = linia; break;
			case 34: mapa[1][6].przeciwnik = linia; break;
			case 35: mapa[1][7].item = linia; break;
			case 36: mapa[1][7].przeciwnik = linia; break;
			case 37: mapa[1][8].item = linia; break;
			case 38: mapa[1][8].przeciwnik = linia; break;
			case 39: mapa[1][9].item = linia; break;
			case 40: mapa[1][9].przeciwnik = linia; break;
			case 41: mapa[2][0].item = linia; break;
			case 42: mapa[2][0].przeciwnik = linia; break;
			case 43: mapa[2][1].item = linia; break;
			case 44: mapa[2][1].przeciwnik = linia; break;
			case 45: mapa[2][2].item = linia; break;
			case 46: mapa[2][2].przeciwnik = linia; break;
			case 47: mapa[2][3].item = linia; break;
			case 48: mapa[2][3].przeciwnik = linia; break;
			case 49: mapa[2][4].item = linia; break;
			case 50: mapa[2][4].przeciwnik = linia; break;
			case 51: mapa[2][5].item = linia; break;
			case 52: mapa[2][5].przeciwnik = linia; break;
			case 53: mapa[2][6].item = linia; break;
			case 54: mapa[2][6].przeciwnik = linia; break;
			case 55: mapa[2][7].item = linia; break;
			case 56: mapa[2][7].przeciwnik = linia; break;
			case 57: mapa[2][8].item = linia; break;
			case 58: mapa[2][8].przeciwnik = linia; break;
			case 59: mapa[2][9].item = linia; break;
			case 60: mapa[2][9].przeciwnik = linia; break;
			case 61: mapa[3][0].item = linia; break;
			case 62: mapa[3][0].przeciwnik = linia; break;
			case 63: mapa[3][1].item = linia; break;
			case 64: mapa[3][1].przeciwnik = linia; break;
			case 65: mapa[3][2].item = linia; break;
			case 66: mapa[3][2].przeciwnik = linia; break;
			case 67: mapa[3][3].item = linia; break;
			case 68: mapa[3][3].przeciwnik = linia; break;
			case 69: mapa[3][4].item = linia; break;
			case 70: mapa[3][4].przeciwnik = linia; break;
			case 71: mapa[3][5].item = linia; break;
			case 72: mapa[3][5].przeciwnik = linia; break;
			case 73: mapa[3][6].item = linia; break;
			case 74: mapa[3][6].przeciwnik = linia; break;
			case 75: mapa[3][7].item = linia; break;
			case 76: mapa[3][7].przeciwnik = linia; break;
			case 77: mapa[3][8].item = linia; break;
			case 78: mapa[3][8].przeciwnik = linia; break;
			case 79: mapa[3][9].item = linia; break;
			case 80: mapa[3][9].przeciwnik = linia; break;
			case 81: mapa[4][0].item = linia; break;
			case 82: mapa[4][0].przeciwnik = linia; break;
			case 83: mapa[4][1].item = linia; break;
			case 84: mapa[4][1].przeciwnik = linia; break;
			case 85: mapa[4][2].item = linia; break;
			case 86: mapa[4][2].przeciwnik = linia; break;
			case 87: mapa[4][3].item = linia; break;
			case 88: mapa[4][3].przeciwnik = linia; break;
			case 89: mapa[4][4].item = linia; break;
			case 90: mapa[4][4].przeciwnik = linia; break;
			case 91: mapa[4][5].item = linia; break;
			case 92: mapa[4][5].przeciwnik = linia; break;
			case 93: mapa[4][6].item = linia; break;
			case 94: mapa[4][6].przeciwnik = linia; break;
			case 95: mapa[4][7].item = linia; break;
			case 96: mapa[4][7].przeciwnik = linia; break;
			case 97: mapa[4][8].item = linia; break;
			case 98: mapa[4][8].przeciwnik = linia; break;
			case 99: mapa[4][9].item = linia; break;
			case 100: mapa[4][9].przeciwnik = linia; break;
			case 101: mapa[5][0].item = linia; break;
			case 102: mapa[5][0].przeciwnik = linia; break;
			case 103: mapa[5][1].item = linia; break;
			case 104: mapa[5][1].przeciwnik = linia; break;
			case 105: mapa[5][2].item = linia; break;
			case 106: mapa[5][2].przeciwnik = linia; break;
			case 107: mapa[5][3].item = linia; break;
			case 108: mapa[5][3].przeciwnik = linia; break;
			case 109: mapa[5][4].item = linia; break;
			case 110: mapa[5][4].przeciwnik = linia; break;
			case 111: mapa[5][5].item = linia; break;
			case 112: mapa[5][5].przeciwnik = linia; break;
			case 113: mapa[5][6].item = linia; break;
			case 114: mapa[5][6].przeciwnik = linia; break;
			case 115: mapa[5][7].item = linia; break;
			case 116: mapa[5][7].przeciwnik = linia; break;
			case 117: mapa[5][8].item = linia; break;
			case 118: mapa[5][8].przeciwnik = linia; break;
			case 119: mapa[5][9].item = linia; break;
			case 120: mapa[5][9].przeciwnik = linia; break;
			case 121: mapa[6][0].item = linia; break;
			case 122: mapa[6][0].przeciwnik = linia; break;
			case 123: mapa[6][1].item = linia; break;
			case 124: mapa[6][1].przeciwnik = linia; break;
			case 125: mapa[6][2].item = linia; break;
			case 126: mapa[6][2].przeciwnik = linia; break;
			case 127: mapa[6][3].item = linia; break;
			case 128: mapa[6][3].przeciwnik = linia; break;
			case 129: mapa[6][4].item = linia; break;
			case 130: mapa[6][4].przeciwnik = linia; break;
			case 131: mapa[6][5].item = linia; break;
			case 132: mapa[6][5].przeciwnik = linia; break;
			case 133: mapa[6][6].item = linia; break;
			case 134: mapa[6][6].przeciwnik = linia; break;
			case 135: mapa[6][7].item = linia; break;
			case 136: mapa[6][7].przeciwnik = linia; break;
			case 137: mapa[6][8].item = linia; break;
			case 138: mapa[6][8].przeciwnik = linia; break;
			case 139: mapa[6][9].item = linia; break;
			case 140: mapa[6][9].przeciwnik = linia; break;
			case 141: mapa[7][0].item = linia; break;
			case 142: mapa[7][0].przeciwnik = linia; break;
			case 143: mapa[7][1].item = linia; break;
			case 144: mapa[7][1].przeciwnik = linia; break;
			case 145: mapa[7][2].item = linia; break;
			case 146: mapa[7][2].przeciwnik = linia; break;
			case 147: mapa[7][3].item = linia; break;
			case 148: mapa[7][3].przeciwnik = linia; break;
			case 149: mapa[7][4].item = linia; break;
			case 150: mapa[7][4].przeciwnik = linia; break;
			case 151: mapa[7][5].item = linia; break;
			case 152: mapa[7][5].przeciwnik = linia; break;
			case 153: mapa[7][6].item = linia; break;
			case 154: mapa[7][6].przeciwnik = linia; break;
			case 155: mapa[7][7].item = linia; break;
			case 156: mapa[7][7].przeciwnik = linia; break;
			case 157: mapa[7][8].item = linia; break;
			case 158: mapa[7][8].przeciwnik = linia; break;
			case 159: mapa[7][9].item = linia; break;
			case 160: mapa[7][9].przeciwnik = linia; break;
			case 161: mapa[8][0].item = linia; break;
			case 162: mapa[8][0].przeciwnik = linia; break;
			case 163: mapa[8][1].item = linia; break;
			case 164: mapa[8][1].przeciwnik = linia; break;
			case 165: mapa[8][2].item = linia; break;
			case 166: mapa[8][2].przeciwnik = linia; break;
			case 167: mapa[8][3].item = linia; break;
			case 168: mapa[8][3].przeciwnik = linia; break;
			case 169: mapa[8][4].item = linia; break;
			case 170: mapa[8][4].przeciwnik = linia; break;
			case 171: mapa[8][5].item = linia; break;
			case 172: mapa[8][5].przeciwnik = linia; break;
			case 173: mapa[8][6].item = linia; break;
			case 174: mapa[8][6].przeciwnik = linia; break;
			case 175: mapa[8][7].item = linia; break;
			case 176: mapa[8][7].przeciwnik = linia; break;
			case 177: mapa[8][8].item = linia; break;
			case 178: mapa[8][8].przeciwnik = linia; break;
			case 179: mapa[8][9].item = linia; break;
			case 180: mapa[8][9].przeciwnik = linia; break;
			case 181: mapa[9][0].item = linia; break;
			case 182: mapa[9][0].przeciwnik = linia; break;
			case 183: mapa[9][1].item = linia; break;
			case 184: mapa[9][1].przeciwnik = linia; break;
			case 185: mapa[9][2].item = linia; break;
			case 186: mapa[9][2].przeciwnik = linia; break;
			case 187: mapa[9][3].item = linia; break;
			case 188: mapa[9][3].przeciwnik = linia; break;
			case 189: mapa[9][4].item = linia; break;
			case 190: mapa[9][4].przeciwnik = linia; break;
			case 191: mapa[9][5].item = linia; break;
			case 192: mapa[9][5].przeciwnik = linia; break;
			case 193: mapa[9][6].item = linia; break;
			case 194: mapa[9][6].przeciwnik = linia; break;
			case 195: mapa[9][7].item = linia; break;
			case 196: mapa[9][7].przeciwnik = linia; break;
			case 197: mapa[9][8].item = linia; break;
			case 198: mapa[9][8].przeciwnik = linia; break;
			case 199: mapa[9][9].item = linia; break;
			case 200: mapa[9][9].przeciwnik = linia; break;
			}
			nr_linii++;
			


		}

	}
	else
	{

	}

	odczyt.close();
}
void koniec_gry() {
	system("cls");
	cout << "Nie zyjesz" << endl;
	Sleep(1500);
	cout << "Koniec gry"<<endl;
	Sleep(1500);
	exit(0);
}
void koniec_gry2() {
	system("cls");
	cout << "Gratulacje "<<mojaPostac.imie<<"! Udalo ci sie pokonac potwora" << endl;
	Sleep(1500);
	cout << "Koniec gry" << endl;
	Sleep(1500);
	exit(0);
}
void mapowanie() 
{
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (mapa[i][j].istnieje == "+")
			{
				if (mojaPostac.x == mapa[i][j].x && mojaPostac.y == mapa[i][j].y) { cout << "[x]"; }
				else {
					cout << "[ ]";
				}
				
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}
}
void przeciwnik_1() {
	if (mapa[mojaPostac.y][mojaPostac.x].przeciwnik == "poz_1")
	{
		
		system("cls");
		cout << "Zostales zaatakowany!" << endl;
		Sleep(1500);
		system("cls");
		minion.HP = 30;
		minion.DMG = 10;
		int i = 0;
		while (minion.HP>0)
		{
			if (i % 2 == 0) {
				mojaPostac.HP = mojaPostac.HP - minion.DMG;
				cout << "Otrzymujesz " << minion.DMG << " obrazen" << "			HP:" << mojaPostac.HP << "/" << mojaPostac.maxHP << endl;
				Sleep(1500);
				if (mojaPostac.HP <= 0) { koniec_gry(); }
			}
			else
			{
				minion.HP = minion.HP - mojaPostac.DMG;
				
				cout << "Przeciwnik otrzymuje " << mojaPostac.DMG << " obrazen" << "			HP:" << minion.HP << endl;
				Sleep(1500);
			}
			i++;
		}
		mapa[mojaPostac.y][mojaPostac.x].przeciwnik = "";
		
		cout << "Przeciwnik pokonany";
		Sleep(1500);
	}
}
void przeciwnik_2() {
	if (mapa[mojaPostac.y][mojaPostac.x].przeciwnik == "poz_2")
	{

		system("cls");
		cout << "Zostales zaatakowany!" << endl;
		Sleep(1500);
		system("cls");
		minion.HP = 60;
		minion.DMG = 25;
		int i = 0;
		while (minion.HP > 0)
		{
			if (i % 2 == 0) {
				mojaPostac.HP = mojaPostac.HP - minion.DMG;
				cout << "Otrzymujesz " << minion.DMG << " obrazen" << "			HP:" << mojaPostac.HP << "/" << mojaPostac.maxHP << endl;
				Sleep(1500);
				if (mojaPostac.HP <= 0) { koniec_gry(); }
			}
			else
			{
				minion.HP = minion.HP - mojaPostac.DMG;

				cout << "Przeciwnik otrzymuje " << mojaPostac.DMG << " obrazen" << "			HP:" << minion.HP << endl;
				Sleep(1500);
			}
			i++;
		}
		mapa[mojaPostac.y][mojaPostac.x].przeciwnik = "";

		cout << "Przeciwnik pokonany";
		Sleep(1500);
	}
}
void przeciwnik_3() {
	if (mapa[mojaPostac.y][mojaPostac.x].przeciwnik == "poz_3")
	{

		system("cls");
		cout << "Zostales zaatakowany!" << endl;
		Sleep(1500);
		system("cls");
		minion.HP = 100;
		minion.DMG = 40;
		int i = 0;
		while (minion.HP > 0)
		{
			if (i % 2 == 0) {
				mojaPostac.HP = mojaPostac.HP - minion.DMG;
				cout << "Otrzymujesz " << minion.DMG << " obrazen" << "			HP:" << mojaPostac.HP << "/" << mojaPostac.maxHP << endl;
				Sleep(1500);
				if (mojaPostac.HP <= 0) { koniec_gry(); }
			}
			else
			{
				minion.HP = minion.HP - mojaPostac.DMG;

				cout << "Przeciwnik otrzymuje " << mojaPostac.DMG << " obrazen" << "			HP:" << minion.HP << endl;
				Sleep(1500);
			}
			i++;
		}
		mapa[mojaPostac.y][mojaPostac.x].przeciwnik = "";

		cout << "Przeciwnik pokonany";
		Sleep(1500);
	}
}
void endgame()
{
	if (mapa[mojaPostac.y][mojaPostac.x].przeciwnik == "boss")
	{

		system("cls");
		cout << "Zostales zaatakowany!" << endl;
		Sleep(1500);
		system("cls");
		boss.HP = 400;
		boss.DMG = 32.5;
		int i = 0;
		while (boss.HP > 0)
		{
			if (i % 2 == 0) {
				mojaPostac.HP = mojaPostac.HP - boss.DMG;
				cout << "Otrzymujesz " << boss.DMG << " obrazen" << "			HP:" << mojaPostac.HP << "/" << mojaPostac.maxHP << endl;
				Sleep(1500);
				if (mojaPostac.HP <= 0) { koniec_gry(); }
			}
			else
			{
				boss.HP = boss.HP - mojaPostac.DMG;

				cout << "Przeciwnik otrzymuje " << mojaPostac.DMG << " obrazen" << "			HP:" << boss.HP << endl;
				Sleep(1500);
			}
			i++;
		}
		mapa[mojaPostac.y][mojaPostac.x].przeciwnik = "";

		cout << "Przeciwnik pokonany";
		Sleep(1500);
		koniec_gry2();
	}
}


void mikstura() {

	if (mapa[mojaPostac.y][mojaPostac.x].item =="mikstura")
	{
		cout << "Podnosisz mikture"<<endl;
		mojaPostac.il_mikstur++;
		cout << "Ilosc mikstur w EQ: " << mojaPostac.il_mikstur << endl;
		mapa[mojaPostac.y][mojaPostac.x].item = "";
		Sleep(1000);
	}
	
}
void use_mik()
{
	system("cls");
	if (mojaPostac.il_mikstur == 0) {
		
		cout << "Nie posiadasz zadnej miktury" << endl;
		Sleep(1200);
	}
	else {
		mojaPostac.il_mikstur--;
		mojaPostac.HP = mojaPostac.HP + (mojaPostac.maxHP * 0.25);
		if (mojaPostac.HP > mojaPostac.maxHP) { mojaPostac.HP = mojaPostac.maxHP; }
		cout << "Zostales uleczony" << endl;
		cout << "Aktualne HP: " << mojaPostac.HP << "/" << mojaPostac.maxHP;
		Sleep(1500);
	}
}
void item() {
	if (mapa[mojaPostac.y][mojaPostac.x].item != "") {
		if (mapa[mojaPostac.y][mojaPostac.x].item == "runa_w") {
			system("cls");
			cout << "Znalazles rune witalnosci" << endl;
			Sleep(1000);
			cout << "Twoje max HP wzrasta o 20%" << endl;
			Sleep(1000);
			mojaPostac.maxHP = (mojaPostac.maxHP * 1.2);
			cout << "Twoje obecne zdrowie: " << mojaPostac.HP << "/" << mojaPostac.maxHP;
			mapa[mojaPostac.y][mojaPostac.x].item = "";
			
			Sleep(1000);
		}
		else if (mapa[mojaPostac.y][mojaPostac.x].item == "runa_m")
		{
			system("cls");
			cout << "Znalazles rune mocy" << endl;
			Sleep(1000);
			cout << "Twoja sila wzrasta o 10 pkt" << endl;
			Sleep(1000);
			mojaPostac.Strength = mojaPostac.Strength + 10;
			cout << "Twoja obecna sila: " << mojaPostac.Strength;
			mapa[mojaPostac.y][mojaPostac.x].item = "";
			Sleep(1000);
			mojaPostac.DMG = (mojaPostac.Intelligence * 0.7) + (mojaPostac.Strength * 0.5) + (mojaPostac.Agility * 0.5);
		}
		else if (mapa[mojaPostac.y][mojaPostac.x].item == "runa_i")
		{
			system("cls");
			cout << "Znalazles rune inteligencji" << endl;
			Sleep(1000);
			cout << "Twoja inteligencja wzrasta o 20 pkt" << endl;
			Sleep(1000);
			mojaPostac.Intelligence = mojaPostac.Intelligence + 20;
			cout << "Twoja obecna inteligencja: " << mojaPostac.Intelligence;
			mapa[mojaPostac.y][mojaPostac.x].item = "";
			mojaPostac.DMG = (mojaPostac.Intelligence * 0.7) + (mojaPostac.Strength * 0.5) + (mojaPostac.Agility * 0.5);
			Sleep(1000);
		}
		else if (mapa[mojaPostac.y][mojaPostac.x].item == "runa_z")
		{
			system("cls");
			cout << "Znalazles rune zwinnosci" << endl;
			Sleep(1000);
			cout << "Twoja zwinnosc wzrasta o 10 pkt" << endl;
			Sleep(1000);
			mojaPostac.Agility = mojaPostac.Agility + 10;
			cout << "Twoja obecna zwinnosc: " << mojaPostac.Agility;
			mojaPostac.DMG = (mojaPostac.Intelligence * 0.7) + (mojaPostac.Strength * 0.5) + (mojaPostac.Agility * 0.5);
			mapa[mojaPostac.y][mojaPostac.x].item = "";
			Sleep(1000);
		}
		else if (mapa[mojaPostac.y][mojaPostac.x].item == "runa_wsz")
		{
			system("cls");
			cout << "Znalazles rune wszechmocy" << endl;
			Sleep(1000);
			cout << "Twoja statystyki wzrastaja" << endl;
			Sleep(1000);
			mojaPostac.maxHP = (mojaPostac.maxHP * 1.1);
			mojaPostac.Strength = mojaPostac.Strength + 5;
			mojaPostac.Intelligence = mojaPostac.Intelligence + 10;
			mojaPostac.Agility = mojaPostac.Agility + 10;
			cout << "Twoje statystyki: " << endl;
			cout << "HP: " << mojaPostac.HP << "/" << mojaPostac.maxHP << endl;
			cout << "Strength: " << mojaPostac.Strength << endl;
			cout << "Intelligence: " << mojaPostac.Intelligence << endl;
			cout << "Agility: " << mojaPostac.Agility << endl;
			mojaPostac.DMG = (mojaPostac.Intelligence * 0.7) + (mojaPostac.Strength * 0.5) + (mojaPostac.Agility * 0.5);
			mapa[mojaPostac.y][mojaPostac.x].item = "";
			Sleep(2500);
		}
		
	}
}
void rozgrywka()

{
	system("cls");
	if (mojaPostac.slepa == 0) { mapowanie(); }
	cout << endl << endl;
	cout << "Poruszanie:" << endl;
	cout << "wasd" << endl;
	cout << "Statystyki - o" << endl;
	cout << "Zapisz gre - p" << endl;
	cout << "Wczytaj ostatni zapis - l" << endl;
	cout << "Ulecz sie - u" << endl << endl;
	char droga;
	cin >> droga;
	
	switch (droga)
	{
	case 'w':
		if (mapa[mojaPostac.y][mojaPostac.x].w == false) { rozgrywka(); }
		else {
			mojaPostac.y = mojaPostac.y - 1;
			przeciwnik_1();
			przeciwnik_2();
			przeciwnik_3();
			endgame();
			mikstura();
			item();
			rozgrywka();
		}
		
		break;


	case 'a':
		if (mapa[mojaPostac.y][mojaPostac.x].a == false) { rozgrywka(); }
		else {
			mojaPostac.x = mojaPostac.x - 1;
			przeciwnik_1();
			przeciwnik_2();
			przeciwnik_3();
			endgame();
			mikstura();
			item();
			rozgrywka();
		}
		break;
	case 's':
		if (mapa[mojaPostac.y][mojaPostac.x].s == false) { rozgrywka(); }
		else {
			mojaPostac.y = mojaPostac.y +1;
			przeciwnik_1();
			przeciwnik_2();
			przeciwnik_3();
			endgame();
			mikstura();
			item();
			rozgrywka();
		}
		break;
	case 'd':
		if (mapa[mojaPostac.y][mojaPostac.x].d == false) { rozgrywka(); }
		else {
			mojaPostac.x = mojaPostac.x + 1;
			przeciwnik_1();
			przeciwnik_2();
			przeciwnik_3();
			endgame();
			mikstura();
			item();
			rozgrywka();
		}
		break;
	case 'o':
		statystyki();
		rozgrywka();
		break;
	case 'p':
		zapisz_stats();
		rozgrywka();
		break;
	case 'l':
		wczytaj_stats();
		wczytaj_lokacje();
		rozgrywka();
		break;
	case 'u':
		use_mik();
		rozgrywka();
		break;


	}

}

void rozpoczecie() {
	cout << "1.Nowa gra" << endl;
	cout << "2.Wczytaj gre" << endl;
	int i;
	cin >> i;
	switch (i)
	{
	case 1:
	{
		system("cls");
		start();
		wybor();
		rozgrywka();
	}
	case 2:
	{
		wczytaj_stats();
		wczytaj_lokacje();
		rozgrywka();
	}
	default:
		wczytaj_stats();
		wczytaj_lokacje();
		rozgrywka();

		break;
	}
}


int main() {
	
	rozpoczecie();
	

}

