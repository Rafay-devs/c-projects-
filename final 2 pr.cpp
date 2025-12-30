#include <iostream>
using namespace std;

int main() {

    int Choice;
    int menu;
    int submenu;
    string password;
    int tries;

    do {
        // ----------------- MAIN MENU --------------------
        cout << "\n-----------------------------------\n";
        cout << "     WELCOME TO NEXTGEN MOBILE SHOP\n";
        cout << "-----------------------------------\n";
        cout << "1. Customer End\n";
        cout << "2. Owner End\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> Choice;

        switch (Choice) {

        // ================= CUSTOMER END ==================
        case 1:
            do {
                cout << "\n=========== CUSTOMER END ===========\n";
                cout << "1. View Mobiles\n";
                cout << "2. Accessories\n";
                cout << "3. Add to Cart\n";
                cout << "4. Checkout\n";
                cout << "5. Contact / Help\n";
                cout << "6. Back to Main Menu\n";
                cout << "Enter your choice: ";
                cin >> menu;

                switch (menu) {

                // ----- View Mobiles -----
                case 1:
                    cout << "\n...Viewing Mobiles...\n";
                    do {
                        cout << "\n---- VIEW MOBILES ----\n";
                        cout << "1. View by Brand\n";
                        cout << "2. View by Price\n";
                        cout << "3. Latest Models (Back)\n";
                        cout << "Enter choice: ";
                        cin >> submenu;

                        switch (submenu) {
                            case 1: cout << "\n...Viewing by Brand...\n"; break;
                            case 2: cout << "\n...Viewing by Price...\n"; break;
                            case 3: cout << "\nReturning...\n"; break;
                            default: cout << "\nInvalid choice!\n";
                        }
                    } while (submenu != 3);
                    break;

                // ----- Accessories -----
                case 2:
                    cout << "\n...Viewing Accessories...\n";
                    do {
                        cout << "\n---- ACCESSORIES ----\n";
                        cout << "1. Chargers\n";
                        cout << "2. Earphones\n";
                        cout << "3. Other Accessories (Back)\n";
                        cout << "Enter choice: ";
                        cin >> submenu;

                        switch (submenu) {
                            case 1: cout << "\n...Viewing Chargers...\n"; break;
                            case 2: cout << "\n...Viewing Earphones...\n"; break;
                            case 3: cout << "\nReturning...\n"; break;
                            default: cout << "\nInvalid choice!\n";
                        }
                    } while (submenu != 3);
                    break;

                // ----- Add to Cart -----
                case 3:
                    cout << "\n...Adding to Cart...\n";
                    do {
                        cout << "\n---- CART MENU ----\n";
                        cout << "1. View Cart\n";
                        cout << "2. Remove Item (Back)\n";
                        cout << "Enter choice: ";
                        cin >> submenu;

                        switch (submenu) {
                            case 1: cout << "\n...Viewing Cart...\n"; break;
                            case 2: cout << "\n...Item Removed...\n"; break;
                            default: cout << "\nInvalid choice!\n";
                        }
                    } while (submenu != 2);
                    break;

                // ----- Checkout -----
                case 4:
                    cout << "\n...Checkout Process...\n";
                    do {
                        cout << "\n---- CHECKOUT ----\n";
                        cout << "1. Customer Detail\n";
                        cout << "2. Payment\n";
                        cout << "3. Confirm Order (Back)\n";
                        cout << "Enter choice: ";
                        cin >> submenu;

                        switch (submenu) {
                            case 1: cout << "\n...Entering Customer Details...\n"; break;
                            case 2: cout << "\n...Processing Payment...\n"; break;
                            case 3: cout << "\n...Order Confirmed...\n"; break;
                            default: cout << "\nInvalid choice!\n";
                        }
                    } while (submenu != 3);
                    break;

                // ----- Contact -----
                case 5:
                    cout << "\n...Contact / Help...\n";
                    break;

                // ----- Back -----
                case 6:
                    cout << "\nReturning to Main Menu...\n";
                    break;

                default:
                    cout << "\nInvalid choice! Try again.\n";
                }

            } while (menu != 6);
            break;

        // ================= OWNER END ==================
        case 2:

            // ------- PASSWORD CHECK -------
            tries = 0;

            while (tries < 3) {
                cout << "\nEnter Owner Password: ";
                cin >> password;

                if (password == "1234") {
                    cout << "\nAccess Granted!\n";
                    break;
                } else {
                    cout << "Wrong Password! Try again.\n";
                }
                tries++;
            }

            if (tries == 3) {
                cout << "\nToo many tries. Returning to Main Menu...\n";
                break;
            }

            // ---------- OWNER MENU ----------
            do {
                cout << "\n============== OWNER END ==============\n";
                cout << "1. Product Management\n";
                cout << "2. Inventory Management\n";
                cout << "3. Sales Management\n";
                cout << "4. Billing\n";
                cout << "5. Back to Main Menu\n";
                cout << "Enter your choice: ";
                cin >> menu;

                switch (menu) {

                // ----- Product Management -----
                case 1:
                    cout << "\n...Product Management...\n";
                    do {
                        cout << "\n---- PRODUCT MANAGEMENT ----\n";
                        cout << "1. Add Item\n";
                        cout << "2. Update Item\n";
                        cout << "3. Delete Item (Back)\n";
                        cout << "Enter choice: ";
                        cin >> submenu;

                        switch (submenu) {
                            case 1: cout << "\n...Adding Item...\n"; break;
                            case 2: cout << "\n...Updating Item...\n"; break;
                            case 3: cout << "\nReturning...\n"; break;
                            default: cout << "\nInvalid choice!\n";
                        }

                    } while (submenu != 3);
                    break;

                // ----- Inventory Management -----
                case 2:
                    cout << "\n...Inventory Management...\n";
                    do {
                        cout << "\n---- INVENTORY ----\n";
                        cout << "1. Check Stock\n";
                        cout << "2. Add Stock\n";
                        cout << "3. Remove Stock (Back)\n";
                        cout << "Enter choice: ";
                        cin >> submenu;

                        switch (submenu) {
                            case 1: cout << "\n...Checking Stock...\n"; break;
                            case 2: cout << "\n...Adding Stock...\n"; break;
                            case 3: cout << "\n...Removing Stock...\n"; break;
                            default: cout << "\nInvalid choice!\n";
                        }

                    } while (submenu != 3);
                    break;

                // ----- Sales Management -----
                case 3:
                    cout << "\n...Sales Management...\n";
                    do {
                        cout << "\n---- SALES ----\n";
                        cout << "1. Check Sales\n";
                        cout << "2. Add Customer (Back)\n";
                        cout << "Enter choice: ";
                        cin >> submenu;

                        switch (submenu) {
                            case 1: cout << "\n...Checking Sales...\n"; break;
                            case 2: cout << "\n...Adding Customer...\n"; break;
                            default: cout << "\nInvalid choice!\n";
                        }

                    } while (submenu != 2);
                    break;

                // ----- Billing -----
                case 4:
                    cout << "\n...Billing...\n";
                    do {
                        cout << "\n---- BILLING ----\n";
                        cout << "1. Report\n";
                        cout << "2. Revenue (Back)\n";
                        cout << "Enter choice: ";
                        cin >> submenu;

                        switch (submenu) {
                            case 1: cout << "\n...Generating Report...\n"; break;
                            case 2: cout << "\n...Showing Revenue...\n"; break;
                            default: cout << "\nInvalid choice!\n";
                        }

                    } while (submenu != 2);
                    break;

                // ----- Back -----
                case 5:
                    cout << "\nReturning to Main Menu...\n";
                    break;

                default:
                    cout << "\nInvalid choice! Try again.\n";
                }

            } while (menu != 5);

            break;

        // ================= EXIT ==================
        case 3:
            cout << "\nThank you for using the system!\n";
            break;

        default:
            cout << "\nInvalid choice! Try again.\n";
        }

    } while (Choice != 3);

    return 0;
}
