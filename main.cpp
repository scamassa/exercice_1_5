#include <iostream>

using namespace std;

int main() {
    int distancekm = 60;
    int coutB = 20;
    int consommation = 7;
    int prixEss = 2;
    int coutAmort = 1;

    int essence = (consommation / 100) * distancekm * prixEss;
    int amort = coutAmort * distancekm;
    int totalVoit = essence + amort;

    if(totalVoit < coutB) {
        cout << "la voiture est mieux" << endl;
    }
    if(coutB < totalVoit) {
        cout << "le train est mieux" << endl;
    }
    else {
        cout << "les prix sont les memes" << endl;
    }

    return 0;
}
