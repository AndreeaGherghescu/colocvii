#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename Base, typename T>                     //https://stackoverflow.com/questions/500493/c-equivalent-of-javas-instanceof
inline bool instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}

class Precomanda {
    string nume;
    string data;
    int ora;
    string sursa;
    string dest;
    //tarif/km dublu la aeroport
};

class CostControl {
    string sursa;
    string dest;
    //generez random un nr km
public:
    float pret(float tarif);

};
class DesignatesDriver {
    static string nume_1;
    static string nume_2;
    static string lic_1;
    static string lic_2;
    static const float tarif_fix;
public:
    float pret(float tarif_de_baza);
};
class RentACar: public Companie{
    string nume;
    string data;
    int ora;
    string locatie;
    //predare si luare
    float tarif_nou;
public:
    float pret();
};
class LeasingOperational:public RentACar {
    static float tarif_standard;
    int optiuni;
public:
    float pret(); //reduceri
};
class TransMarfa: public CostControl {
    string loc;
    string judet;

};
class TransportExtins:public TransMarfa {
    string tara;
    float taxa_vamala;
};
class Limuzina {
    string nume;
    string marca;
    string data;
    int ora;
    string loc;
};
class Companie {
    string denumire;
    string cod;
    float tarif;
    bool precomanda;
    vector <Precomanda*> prec;
};
class Comp1:public Companie {
    vector <CostControl*> c;
    vector <DesignatesDriver*> d;
public:

};
class Comp2:public Companie {
    vector <RentACar*> r;
    vector <LeasingOperational*> l;

};
class compT:public Companie{
    vector <TransMarfa*> t;

};
class Megacompanie:public Companie{
    vector <CostControl*> c;
    vector <DesignatesDriver*> d;
    vector <RentACar*> r;
    vector <LeasingOperational*> l;
    vector <TransportExtins*> t;
};
class Uber :public Companie {
    vector <pair<string,int> > soferi;
    //servicii standard adica toate?
    vector <Limuzina*> l;
};
void meniu (int n, vector <Companie*> v) {
    cout << "Pentru a vedea optiunile introduceti: MENU\n";
    while (true){
        string opt;
        try {
            getline(cin,opt);
            if (!(opt == "MENU" || opt == "SOLVE1" || opt == "SOLVE2" ||
                  opt == "INSERT" || opt == "SOLVE4" || opt == "SOLVE3" ))
                throw "Comanda nu exista!";

            if (opt == "MENU") {

            }
            else if () {

            }
        }catch (const char *s) {
            cout << s << '\n';
        }
    }
}

int main() {
    int n = 0;
    vector <Companie*> v;
    meniu(n,v);
    return 0;
}
