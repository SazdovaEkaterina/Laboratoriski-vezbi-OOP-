/*
Да се дефинира класа Krug, во која се чуваат информации за:

    радиус float
    бројот π const float.

Во класата да се реализираат:

    default конструктор и конструктор со аргументи
    метод за пресметување плоштина
    метод за пресметување периметар
    метод кој кажува дали плоштината и периметарот на даден круг се еднакви
*/

#include <iostream>
using namespace std;

class Krug {
    private:
        float radius;
        const float pi=3.14;
    public:
        Krug(){//default konstruktor
            radius=0;
        };
        Krug(float r){//konstruktor so parametri
            if(r>=0){
                radius=r;
            }
            else{
                radius=0;
            }
        };
        float perimetar(){
            return 2*radius*pi;
        };
        float plostina(){
            return radius*radius*pi;
        };
        float ednakvi(){
            if(perimetar()==plostina()){
                return 1;
            }
            else{
                return 0;
            }
        };
};

int main() {
	float r;
	cin >> r;
	Krug k(r);//instanciraj objekt od klasata Krug cij radius e vrednosta procitana od tastatura
	cout << k.perimetar() << endl;
	cout << k.plostina() << endl;
	cout << k.ednakvi() <<endl;
    Krug k2();//instanciraj objekt od klasata Krug cij radius ne e definiran
	return 0;
}