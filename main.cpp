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


int main()
{
    unsigned short res;
    res =  koduj(1,3,3,3,3,15,7);
    cout << res << endl;
    std::bitset<16> y(res);
    std::cout << y << '\n';
    return 0;
}
