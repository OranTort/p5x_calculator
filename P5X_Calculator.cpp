#include <iostream>

using namespace std;

int main(){

    int characterBanner;
    int metajewels = 150;
    int ownedMetajewels;

    cout << "Select the character banner you are planning to roll on?(80 or 110) ";
    cin >> characterBanner;
    if(characterBanner == 80){
        metajewels = metajewels * 80 * 2;
        cout << "For a guarantee, you will need " << metajewels << " metajewels.\n";

    }
    else if (characterBanner == 110)
    {
        metajewels = metajewels * 110;
        cout << "For a guarantee, you will need " << metajewels << " metajewels.\n";
    }
    else{
        cout << "Please select either 80 or 110 banners." << endl;
        return characterBanner;
    }
    
    cout << "How many Metajewels do you currently own? ";
    cin >> ownedMetajewels;


    return 0;
}