#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int characterBanner;
    int metajewels = 150;
    int ownedMetajewels;
    int neededMetajewels;
    int banners;
    int phantomTickets;
    int phantomJewels;
    int violetCognigems;
    int clearCognigems;
    int rolls;
    char pass;

    cout << "Select the character banner you are planning to roll on?(80 or 110) ";
    cin >> characterBanner;


    if(characterBanner == 80){

        cout << "How many banners are you trying to save for? ";
        cin >> banners;
        banners = banners * 2;
        metajewels = metajewels * 80 * banners;
        cout << "For a guarantee, you will need " << metajewels << " metajewels.\n";

    }
    else if (characterBanner == 110)
    {
        cout << "How many banners are you trying to save for? ";
        cin >> banners;
        metajewels = metajewels * 110 * banners;
        cout << "For a guarantee, you will need " << metajewels << " metajewels.\n";
    }
    else{
        cout << "Please select either 80 or 110 banners." << endl;
        return characterBanner;
    }

    cout << "Did you purchase a pass? ";
    cin >> pass;
    
    cout << "How many Metajewels do you currently own? ";
    cin >> ownedMetajewels;
    neededMetajewels = metajewels - ownedMetajewels;

    cout << "How many rolls have you done on the banner you are rolling for? ";
    cin >> rolls;
    rolls = rolls * 150;
    neededMetajewels = neededMetajewels - rolls;

    cout << "How many phantom tickets do you own? ";
    cin >> phantomTickets;
    phantomJewels = phantomTickets * 150;
    neededMetajewels = neededMetajewels - phantomJewels;

    cout <<  "How many Violet Cognigems do you own? ";
    cin >> violetCognigems;
    violetCognigems = floor(violetCognigems / 10);
    violetCognigems = violetCognigems * 100;
    neededMetajewels = neededMetajewels - violetCognigems;

    cout <<  "How many Clear Cognigems do you own? ";
    cin >> clearCognigems;
    clearCognigems = floor(clearCognigems / 1000);
    clearCognigems = clearCognigems * 1000;
    neededMetajewels = neededMetajewels - clearCognigems;
    
    cout << "You need " << neededMetajewels << " to reach the character(s) you desire.\n";

    system("pause");
    return 0;
}