#include <iostream>
#include <bitset>

using namespace std;

unsigned short koduj(int plec, int stan_cyw,
        int grupa_wiek, int edu,
        int zam, int region,
        int odp)
{
    unsigned short anwser = 0;
  //  00000000000000000000
    anwser = anwser | (plec << 15);
    anwser = anwser | (stan_cyw << 13);
    anwser = anwser | (grupa_wiek << 11);
    anwser = anwser | (edu << 9);
    anwser = anwser | (zam << 7);
    anwser = anwser | (region << 3);
    anwser = anwser | (odp);

    return anwser;
}

void info(unsigned short kod){
    unsigned int plec, stan_cyw, grupa_wiek, edu, zam, region, odp;
    plec = (kod >> 15) & 1;
    stan_cyw = (kod >> 13) & 3;
    grupa_wiek = (kod >> 11) & 3;
    edu = (kod >> 9) & 3;
    zam = (kod >> 7) & 3;
    region = (kod >> 3) & 15;
    odp = (kod) & 7;
}



int main()
{
    unsigned short res;
    res =  koduj(1,3,3,3,3,15,7);
    cout << res << endl;
    std::bitset<16> y(res);
    std::cout << y << '\n';
     info(res);

    return 0;
}
