/*
#include <iostream>

using namespace std;

int main()

{

    // Anlegen der notwendigen Variablen


    int ergebnis;

    for (int faktor = 1; faktor < 10; faktor++) {// Faktor fängt bei 1 an bis 9

 

        ergebnis = 3 * faktor; //3 wird mit dem Faktor multipliziert

        cout << "3 * " << faktor << " = " << ergebnis << endl; // ergebnis wird ausgegeben

    }

}
*/
/*
Aufgabe 2
a) 50 mal
b) 49 mal
c) 20 mal


*/

//Aufgabe 3  a)

/*
#include <iostream>

using namespace std;

int main()

{

    // Anlegen der notwendigen Variablen

    int zahl;

    int ergebnis = 0;

    for (int i = 1; i <= 10; i++) {

        cout << "Zahl eingeben " << endl << endl;
        cin >> zahl;

       ergebnis = ergebnis + zahl;



        cout << ergebnis << endl << endl; // ergebnis wird ausgegeben

    }

}
*/

//b)

/*

#include <iostream>

using namespace std;

int main()

{

    // Anlegen der notwendigen Variablen

    int zahl;

    int ergebnis = 0;


    for (int i = 1; i <= 20; i++) {

        cout << "Zahl eingeben " << endl << endl;
        cin >> zahl;

        if (zahl < 0) {
        
        ergebnis = ergebnis + 1;

        }
        
        cout << endl << ergebnis << endl << endl; // ergebnis wird ausgegeben

    }

}
*/

//c)


#include <iostream>

using namespace std;

int main()

{

    // Anlegen der notwendigen Variablen

    int Puls;

    int ergebnis = 0;


    for (int i = 1; i <= 15; i++) {

        cout << endl << "Puls eingeben " << endl << endl;
        cin >> Puls;

        if (Puls > 120) {

            cout << endl << "machen sie 5 minuten pause" << endl << endl;

        }

     
    }

}