#include <iostream>
#include <cmath>
using namespace std;
class Photon {
protected:
    double wavelength;

public:
    Photon(double wl) : wavelength(wl)
    {}
};

class CalculatePhotonEnergy : public Photon {
public:
    CalculatePhotonEnergy(double wl) : Photon(wl)
    {}

    double calculateEnergy() {
        // Speed of light in vacuum (m/s)
        const double c = 299792458.0;

        // Planck's constant (Joule second)
        const double h = 6.62607015e-34;

        // Calculate photon energy using E = h * f = h * c / λ
        double energy = h * c / (wavelength * 1e-9); // Convert wavelength to meters

        return energy;
    }
};

int main() {
    double wavelength;

    cout << "Enter the wavelength of the photon (in nanometers): ";
    cin >> wavelength;

    CalculatePhotonEnergy photonEnergy(wavelength);

    double energy = photonEnergy.calculateEnergy();

    cout << "Photon Energy: " << energy << " Joules" << endl;

    return 0;
}