#include <iostream>
#include <cstring> // لازم لـ strcmp

int main() {
    char contory1[] = "USD";
    char contory2[] = "EUR";
    char contory3[] = "SAR";
    char contory4[] = "AED";
    char contory5[] = "GBP";
    char contory6[] = "JPY";
    char contory7[] = "CNY";
    char contory8[] = "TRY";
    char contory9[] = "CAD";
    char contory10[] = "AUD";
    char contory11[] = "INR";

    std::cout << "__________________________________________________________\n";
    std::cout << "Welcome to Currency converter  =) \n";
    std::cout << "____________________________________________________________\n";

    std::cout << "1_" << contory1 << "\n";
    std::cout << "2_" << contory2 << "\n";
    std::cout << "3_" << contory3 << "\n";
    std::cout << "4_" << contory4 << "\n";
    std::cout << "5_" << contory5 << "\n";
    std::cout << "6_" << contory6 << "\n";
    std::cout << "7_" << contory7 << "\n";
    std::cout << "8_" << contory8 << "\n";
    std::cout << "9_" << contory9 << "\n";
    std::cout << "10_" << contory10 << "\n";
    std::cout << "11_" << contory11 << "\n";

    char user[50];
    std::cin >> user;

    // =============== START: USD ===============
    if (strcmp(user, contory1) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory2 << "\n";
        std::cout << "3_" << contory3 << "\n";
        std::cout << "4_" << contory4 << "\n";
        std::cout << "5_" << contory5 << "\n";
        std::cout << "6_" << contory6 << "\n";
        std::cout << "7_" << contory7 << "\n";
        std::cout << "8_" << contory8 << "\n";
        std::cout << "9_" << contory9 << "\n";
        std::cout << "10_" << contory10 << "\n";
        std::cout << "11_" << contory11 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }
    if (strcmp(user, contory2) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory1 << "\n";
        std::cout << "3_" << contory3 << "\n";
        std::cout << "4_" << contory4 << "\n";
        std::cout << "5_" << contory5 << "\n";
        std::cout << "6_" << contory6 << "\n";
        std::cout << "7_" << contory7 << "\n";
        std::cout << "8_" << contory8 << "\n";
        std::cout << "9_" << contory9 << "\n";
        std::cout << "10_" << contory10 << "\n";
        std::cout << "11_" << contory11 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }
    if (strcmp(user, contory3) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory2 << "\n";
        std::cout << "3_" << contory1 << "\n";
        std::cout << "4_" << contory4 << "\n";
        std::cout << "5_" << contory5 << "\n";
        std::cout << "6_" << contory6 << "\n";
        std::cout << "7_" << contory7 << "\n";
        std::cout << "8_" << contory8 << "\n";
        std::cout << "9_" << contory9 << "\n";
        std::cout << "10_" << contory10 << "\n";
        std::cout << "11_" << contory11 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }
    if (strcmp(user, contory4) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory2 << "\n";
        std::cout << "3_" << contory3 << "\n";
        std::cout << "4_" << contory1 << "\n";
        std::cout << "5_" << contory5 << "\n";
        std::cout << "6_" << contory6 << "\n";
        std::cout << "7_" << contory7 << "\n";
        std::cout << "8_" << contory8 << "\n";
        std::cout << "9_" << contory9 << "\n";
        std::cout << "10_" << contory10 << "\n";
        std::cout << "11_" << contory11 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }if (strcmp(user, contory5) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory2 << "\n";
        std::cout << "3_" << contory3 << "\n";
        std::cout << "4_" << contory4 << "\n";
        std::cout << "5_" << contory6 << "\n";
        std::cout << "6_" << contory6 << "\n";
        std::cout << "7_" << contory7 << "\n";
        std::cout << "8_" << contory8 << "\n";
        std::cout << "9_" << contory9 << "\n";
        std::cout << "10_" << contory10 << "\n";
        std::cout << "11_" << contory11 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }if (strcmp(user, contory6) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory2 << "\n";
        std::cout << "3_" << contory3 << "\n";
        std::cout << "4_" << contory4 << "\n";
        std::cout << "5_" << contory5 << "\n";
        std::cout << "6_" << contory1 << "\n";
        std::cout << "7_" << contory7 << "\n";
        std::cout << "8_" << contory8 << "\n";
        std::cout << "9_" << contory9 << "\n";
        std::cout << "10_" << contory10 << "\n";
        std::cout << "11_" << contory11 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }if (strcmp(user, contory7) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory2 << "\n";
        std::cout << "3_" << contory3 << "\n";
        std::cout << "4_" << contory4 << "\n";
        std::cout << "5_" << contory5 << "\n";
        std::cout << "6_" << contory6 << "\n";
        std::cout << "7_" << contory1 << "\n";
        std::cout << "8_" << contory8 << "\n";
        std::cout << "9_" << contory9 << "\n";
        std::cout << "10_" << contory10 << "\n";
        std::cout << "11_" << contory11 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }if (strcmp(user, contory8) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory2 << "\n";
        std::cout << "3_" << contory3 << "\n";
        std::cout << "4_" << contory4 << "\n";
        std::cout << "5_" << contory5 << "\n";
        std::cout << "6_" << contory6 << "\n";
        std::cout << "7_" << contory7 << "\n";
        std::cout << "8_" << contory1 << "\n";
        std::cout << "9_" << contory9 << "\n";
        std::cout << "10_" << contory10 << "\n";
        std::cout << "11_" << contory11 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }if (strcmp(user, contory9) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory2 << "\n";
        std::cout << "3_" << contory3 << "\n";
        std::cout << "4_" << contory4 << "\n";
        std::cout << "5_" << contory5 << "\n";
        std::cout << "6_" << contory6 << "\n";
        std::cout << "7_" << contory7 << "\n";
        std::cout << "8_" << contory8 << "\n";
        std::cout << "9_" << contory1 << "\n";
        std::cout << "10_" << contory10 << "\n";
        std::cout << "11_" << contory11 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }if (strcmp(user, contory10) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory2 << "\n";
        std::cout << "3_" << contory3 << "\n";
        std::cout << "4_" << contory4 << "\n";
        std::cout << "5_" << contory5 << "\n";
        std::cout << "6_" << contory6 << "\n";
        std::cout << "7_" << contory7 << "\n";
        std::cout << "8_" << contory8 << "\n";
        std::cout << "9_" << contory9 << "\n";
        std::cout << "10_" << contory11 << "\n";
        std::cout << "11_" << contory11 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }if (strcmp(user, contory11) == 0) {

        char contorys2[50];
        std::cout << "Enter the currency you want to change to:\n";
        std::cout << "2_" << contory2 << "\n";
        std::cout << "3_" << contory3 << "\n";
        std::cout << "4_" << contory4 << "\n";
        std::cout << "5_" << contory5 << "\n";
        std::cout << "6_" << contory6 << "\n";
        std::cout << "7_" << contory7 << "\n";
        std::cout << "8_" << contory8 << "\n";
        std::cout << "9_" << contory9 << "\n";
        std::cout << "10_" << contory10 << "\n";
        std::cout << "11_" << contory1 << "\n";
        std::cin >> contorys2;

        std::cout << "Please enter the amount: ";
        int coin1;
        std::cin >> coin1;

        if (strcmp(contorys2, contory2) == 0) {
            double result = coin1 * 0.92;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory3) == 0) {
            double result = coin1 * 3.75;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory4) == 0) {
            double result = coin1 * 3.67;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory5) == 0) {
            double result = coin1 * 0.79;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory6) == 0) {
            double result = coin1 * 156;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory7) == 0) {
            double result = coin1 * 7.25;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory8) == 0) {
            double result = coin1 * 33;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory9) == 0) {
            double result = coin1 * 1.36;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory10) == 0) {
            double result = coin1 * 1.50;
            std::cout << "The result is " << result;
        }
        else if (strcmp(contorys2, contory11) == 0) {
            double result = coin1 * 83;
            std::cout << "The result is " << result;
        }
    }
    return 0;
}
