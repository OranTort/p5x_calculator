#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int characterBanner;
    const int metajewels = 150;
    int bannerMetajewels;
    int ownedMetajewels;
    int neededMetajewels;
    int banners;
    int phantomTickets;
    int phantomJewels;
    int violetCognigems;
    int clearCognigems;
    int rolls;
    char pass;
    int neededRolls;
    int cogCrystal;
    int weaponBanner;

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
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return characterBanner;

    }

    cout << "How many of the weapon banners are you planning to roll on? ";
    cin >>weaponBanner;
    weaponBanner = weaponBanner * 140 * metajewels;
    cout << "For a guarantee you will need " << weaponBanner << " metajewels for the weapon banner.\n";


    
    cout << "How many Metajewels do you currently own? ";
    cin >> ownedMetajewels;
    neededMetajewels = bannerMetajewels + weaponBanner - ownedMetajewels;

    cout << "How many rolls have you done on the banner you are rolling for? ";
    cin >> rolls;
    rolls = rolls * metajewels;
    neededMetajewels = neededMetajewels - rolls;

    //each ticket is 1 roll. thus it equates to 150 Metajewels to be used in a roll
    cout << "How many phantom tickets do you own? ";
    cin >> phantomTickets;
    phantomJewels = phantomTickets * metajewels;
    neededMetajewels = neededMetajewels - phantomJewels;

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

    //limit to 1000 being used in a month
    //with Clear Cogingems since they can only be purchased by the 100, it is calculated using the maximum available to be bought within the month
    cout <<  "How many Clear Cognigems do you own? ";
    cin >> clearCognigems;
    clearCognigems = floor(clearCognigems / 1000);
    clearCognigems = clearCognigems * 1000;
    neededMetajewels = neededMetajewels - clearCognigems;
    
    cout << "You need " << neededMetajewels << " to reach the character(s) you desire.\n";
    neededRolls = neededMetajewels / metajewels;
    neededRolls = floor(neededRolls);
    cout << "This equates to " << neededRolls << " rolls you will need to guarantee the character(s) and/or weapon(s).\n";

    system("pause");
    return 0;
}