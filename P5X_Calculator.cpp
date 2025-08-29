#include <iostream>

using namespace std;

int main(){

    int characterBanner;
    int metajewels = 150;
    int ownedMetajewels;
    int neededMetajewels;
    int banners;

    cout << "Select the character banner you are planning to roll on?(80 or 110) ";
    cin >> characterBanner;

    cout << "How many banners are you trying to save for? ";
    cin >> banners;

    if(characterBanner == 80){

        banners = banners * 2;
        metajewels = metajewels * 80 * banners;
        cout << "For a guarantee, you will need " << metajewels << " metajewels.\n";

    }
    else if (characterBanner == 110)
    {
        metajewels = metajewels * 110 * banners;
        cout << "For a guarantee, you will need " << metajewels << " metajewels.\n";
    }
    else{
        cout << "Please select either 80 or 110 banners." << endl;
        return characterBanner;
    }
    
    cout << "How many Metajewels do you currently own? ";
    cin >> ownedMetajewels;
    neededMetajewels = metajewels - ownedMetajewels;
    cout << "You need " << neededMetajewels << " to reach the character(s) you desire.\n";

    system("pause");
    return 0;
}