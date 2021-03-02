/*
Да се дефинира класа Film, во која ќе се чуваат информации за:

    име низа од 100 знаци
    режисер низа од 50 знаци
    жанр низа од 50 знаци
    година цел број

Сите променливи треба да бидат приватни. Соодветно во рамките на класата да се дефинираат:

    default конструктор и конструктор со аргументи
    метод за печатење на информациите за филмот

Дополнително да се реализира надворешна функција:

    void pecati_po_godina(Film *f, int n, int godina) која ќе прима аргумент 
    низа од филмови, вкупниот број на филмови и година, а треба да ги отпечати 
    само филмовите кои се направени во дадената година.
*/

#include <iostream>
#include <cstring>
using namespace std;

// vashiot kod ovde
class Film{
    private:
        char ime[100];
        char reziser[50];
        char zanr[50];
        int godina;
    public:
        Film(){};
        Film(char *name, char *director, char *genre, int year){
            strcpy(ime, name);
            strcpy(reziser, director);
            strcpy(zanr, genre);
            godina=year;
        };
        void set_ime(char *name){
            strcpy(ime,name);
        };
        void set_reziser(char *director){
            strcpy(reziser,director);
        };
        void set_zanr(char *genre){
            strcpy(zanr,genre);
        };
        void set_godina(int year){
            godina=year;
        };
        int get_godina(){
            return godina;
        }
        void pecati(){
            cout<<"Ime: "<<ime<<endl;
            cout<<"Reziser: "<<reziser<<endl;
            cout<<"Zanr: "<<zanr<<endl;
            cout<<"Godina: "<<godina<<endl;
        }

};

void pecati_po_godina(Film *filmovi, int n, int godina){
    int i;
    for(i=0; i<n; i++){
        if(filmovi[i].get_godina()==godina){
            filmovi[i].pecati();
        }
    }
};

int main() {
 	int n;
 	cin >> n;
 	Film filmovi[100];//da se inicijalizira niza od objekti od klasata Film
 	for(int i = 0; i < n; ++i) {
 		char ime[100];
 		char reziser[50];
 		char zanr[50];
 		int godina;
 		cin >> ime;
 		cin >> reziser;
 		cin >> zanr;
 		cin >> godina;
 		//da se kreira soodveten objekt
        filmovi[i].set_ime(ime);
        filmovi[i].set_reziser(reziser);
        filmovi[i].set_zanr(zanr);
        filmovi[i].set_godina(godina);
 	}
 	int godina;
 	cin >> godina;
 	//da se povika funkcijata pecati_po_godina
    pecati_po_godina(filmovi, n, godina);
 	return 0;
 }