#include <iostream>

int main() {
    int distancekm = 50;
    int coutB = 20;
    int consommation = 7;
    int prixEss = 2;
    int coutAmort = 1;

    int essence = (consommation / 100) * distancekm * prixEss;
    int amort = coutAmort * distancekm;
    int totalVoit = essence + amort;

    if(totalVoit < coutB) {
        std::cout << "la voiture est mieux" << std::endl;
    }
    if(coutB < totalVoit) {
        std::cout << "le train est mieux" << std::endl;
    }
    else {
        std::cout << "les prix sont les memes" << std::endl;
    }

    return 0;
}
