#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int characterBanner, neededRolls, cogCrystal, bannerMetajewels, ownedMetajewels, neededMetajewels, banners, phantomTickets, phantomJewels, violetCognigems, clearCognigems, rolls, wRolls;
    int millicoins, millijewels;
    int weaponBanner = 0;
    const int metajewels = 150;
    char pass, wPass;
  
    cout << "Select the character banner you are planning to roll on?(80 or 110) ";
    cin >> characterBanner;


    if(characterBanner == 80){

        cout << "How many banners are you trying to save for? ";
        cin >> banners;
        banners = banners * 2;
        bannerMetajewels = metajewels * 80 * banners;
        cout << "For a guarantee, you will need " << bannerMetajewels << " metajewels for the character banners.\n";

    }
    else if (characterBanner == 110)
    {
        cout << "How many banners are you trying to save for? ";
        cin >> banners;
        bannerMetajewels = metajewels * 110 * banners;
        cout << "For a guarantee, you will need " << bannerMetajewels << " metajewels for the character banners.\n";
    }
    else{
        cout << "Please select either 80 or 110 banners." << endl;
        return characterBanner;
    }


    cout << "Will you be pulling on the weapon banners? ";
    cin >> wPass;
    wPass = toupper(wPass);

    if(wPass == 'Y'){
    int wMetajewels = 100;
    cout << "How many of the weapon banners are you planning to roll on? ";
    cin >> weaponBanner;
    weaponBanner = weaponBanner * 140 * wMetajewels;
    cout << "For a guarantee you will need " << weaponBanner << " metajewels for the weapon banner.\n";

    cout << "How many Millicoins do you currently own? ";
    cin >> millicoins;
    millijewels = millicoins * metajewels;


    //cout << "How many rolls have you done on the weapon banner? ";
    //cin >> wRolls;
    //wRolls = wRolls * wMetajewels;

    }
    else if(wPass == 'N'){
        millijewels = 0;
        wRolls = 0;
    }
    
    cout << "How many Metajewels do you currently own? ";
    cin >> ownedMetajewels;
    neededMetajewels = bannerMetajewels + weaponBanner - ownedMetajewels;

    cout << "How many rolls have you done on the banner you are rolling for? ";
    cin >> rolls;
    rolls = rolls * metajewels;
    neededMetajewels = neededMetajewels - rolls - wRolls;

    //each ticket is 1 roll. thus it equates to 150 Metajewels to be used in a roll
    cout << "How many phantom tickets do you own? ";
    cin >> phantomTickets;
    phantomJewels = phantomTickets * metajewels;
    neededMetajewels = neededMetajewels - phantomJewels - millijewels;

    cout <<  "How many Cognition Crystals do you own? ";
    cin >> cogCrystal;
    cogCrystal = metajewels * cogCrystal;
    neededMetajewels = neededMetajewels - cogCrystal;

    //with Violet Cognigems, it takes a minimum of 10 to purchase Metajewels and there is no upper limit per month to be bought
    cout <<  "How many Violet Cognigems do you own? ";
    cin >> violetCognigems;
    violetCognigems = floor(violetCognigems / 10);
    violetCognigems = violetCognigems * 100;
    neededMetajewels = neededMetajewels - violetCognigems;
    
    cout << "You need " << neededMetajewels << " more Metajewels to reach the character(s) you desire.\n";
    neededRolls = neededMetajewels / metajewels;
    neededRolls = floor(neededRolls);
    cout << "This equates to " << neededRolls << " rolls you will need to guarantee the character(s) and/or weapon(s).\n";

    system("pause");
    return 0;
}