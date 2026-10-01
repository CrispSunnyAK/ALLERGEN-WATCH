#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Structure for storing snack information
struct Snack
{
    string name;
    string allergens;
};

// Function to convert text to lowercase
string toLowerCase(string text)
{
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    return text;
}

int main()
{
    // ==============================
    // SNACK DATABASE
    // ==============================

    Snack snacks[] =
    {
        {"chocolate bar", "milk, soy"},
        {"milk chocolate", "milk, soy"},
        {"dark chocolate", "soy, milk"},
        {"white chocolate", "milk, soy"},
        {"chocolate wafer", "wheat, milk, soy"},
        {"chocolate cookies", "wheat, milk, soy, egg"},
        {"chocolate biscuits", "wheat, milk, soy"},
        {"oreo cookies", "wheat, soy"},
        {"cream biscuits", "wheat, milk, soy"},
        {"butter cookies", "wheat, milk, egg"},

        {"peanut butter crackers", "wheat, peanuts, soy"},
        {"peanut cookies", "wheat, peanuts, egg"},
        {"peanut candy", "peanuts, milk, soy"},
        {"peanut chocolate", "peanuts, milk, soy"},
        {"peanut wafers", "wheat, peanuts, milk, soy"},
        {"mixed nut snack", "peanuts, tree nuts"},
        {"almond cookies", "wheat, almonds, egg"},
        {"almond chocolate", "almonds, milk, soy"},
        {"cashew snack", "cashews"},
        {"cashew cookies", "wheat, cashews, milk, egg"},

        {"potato chips", "none"},
        {"cheese potato chips", "milk, soy"},
        {"sour cream chips", "milk, soy"},
        {"barbecue chips", "soy, wheat"},
        {"salt and vinegar chips", "none"},
        {"chili chips", "soy"},
        {"nacho chips", "milk, soy"},
        {"tortilla chips", "none"},
        {"cheese crackers", "wheat, milk, soy"},
        {"salted crackers", "wheat, soy"},

        {"cheese puffs", "milk, soy"},
        {"cheese balls", "milk, soy"},
        {"corn chips", "none"},
        {"caramel popcorn", "milk, soy"},
        {"butter popcorn", "milk"},
        {"cheese popcorn", "milk, soy"},
        {"microwave popcorn", "milk, soy"},
        {"kettle corn", "none"},
        {"pretzels", "wheat, soy"},
        {"chocolate pretzels", "wheat, milk, soy"},

        {"granola bar", "wheat, milk, soy, tree nuts"},
        {"chocolate granola bar", "wheat, milk, soy"},
        {"peanut granola bar", "peanuts, milk, soy"},
        {"almond granola bar", "almonds, milk, soy"},
        {"nut granola bar", "tree nuts, peanuts, soy"},
        {"oat bar", "wheat, milk, soy"},
        {"cereal bar", "wheat, milk, soy"},
        {"fruit bar", "none"},
        {"energy bar", "milk, soy, peanuts"},
        {"protein bar", "milk, soy, peanuts"},

        {"corn flakes", "none"},
        {"chocolate cereal", "wheat, milk, soy"},
        {"honey cereal", "wheat"},
        {"fruit cereal", "wheat, soy"},
        {"granola cereal", "wheat, tree nuts"},
        {"muesli", "wheat, tree nuts"},
        {"oat cereal", "wheat"},
        {"rice cereal", "none"},
        {"cereal clusters", "wheat, milk, soy"},
        {"chocolate cereal balls", "wheat, milk, soy"},

        {"cup noodles", "wheat, soy, egg"},
        {"instant noodles", "wheat, soy, egg"},
        {"curry noodles", "wheat, soy"},
        {"chicken noodles", "wheat, soy"},
        {"seafood noodles", "wheat, soy, shellfish, fish"},
        {"spicy noodles", "wheat, soy"},
        {"ramen snack", "wheat, soy, egg"},
        {"fried noodles snack", "wheat, soy"},
        {"instant pasta", "wheat, milk, soy"},
        {"mac and cheese", "wheat, milk, egg"},

        {"vanilla wafer", "wheat, milk, soy, egg"},
        {"strawberry wafer", "wheat, milk, soy"},
        {"wafer sticks", "wheat, milk, soy"},
        {"cream wafer", "wheat, milk, soy"},
        {"wafer biscuits", "wheat, milk, soy"},
        {"rice crackers", "soy"},
        {"sesame crackers", "wheat, sesame, soy"},
        {"seaweed crackers", "soy, sesame"},
        {"cheese biscuit", "wheat, milk, soy"},
        {"salt biscuit", "wheat"},

        {"doughnut", "wheat, milk, egg, soy"},
        {"packaged muffin", "wheat, milk, egg, soy"},
        {"chocolate muffin", "wheat, milk, egg, soy"},
        {"banana muffin", "wheat, milk, egg"},
        {"cupcake", "wheat, milk, egg, soy"},
        {"chocolate cupcake", "wheat, milk, egg, soy"},
        {"sponge cake", "wheat, egg, milk"},
        {"pound cake", "wheat, milk, egg"},
        {"cheesecake", "wheat, milk, egg"},
        {"brownie", "wheat, milk, egg, soy"},

        {"ice cream cup", "milk, egg, soy"},
        {"ice cream sandwich", "wheat, milk, egg, soy"},
        {"chocolate ice cream", "milk, soy"},
        {"vanilla ice cream", "milk, egg"},
        {"cookie ice cream", "wheat, milk, egg, soy"},
        {"frozen yogurt", "milk"},
        {"chocolate pudding", "milk, soy"},
        {"vanilla pudding", "milk, egg"},
        {"custard cup", "milk, egg"},
        {"jelly snack", "none"},

        {"tuna crackers", "wheat, fish, soy"},
        {"chicken snack pack", "wheat, soy"},
        {"fish crackers", "wheat, milk, soy"},
        {"shrimp crackers", "wheat, shellfish, soy"},
        {"seaweed snack", "soy, sesame"},
        {"sesame snack bar", "sesame, peanuts"},
        {"trail mix", "peanuts, tree nuts, soy"},
        {"dried fruit mix", "none"},
        {"nut and chocolate mix", "peanuts, tree nuts, milk, soy"},
        {"fruit snacks", "none"}
    };

    // Automatically count the number of snacks
    int totalSnacks = sizeof(snacks) / sizeof(snacks[0]);

    int choice;

    // ==============================
    // MAIN MENU
    // ==============================

    do
    {
        cout << "\n";
        cout << "========================================" << endl;
        cout << "           FOOD DETECTIVES" << endl;
        cout << "          ALLERGERN CHECKER" << endl;
        cout << "========================================" << endl;
        cout << "1. Check Snack" << endl;
        cout << "2. Show All Snacks" << endl;
        cout << "3. Search by Allergen" << endl;
        cout << "4. Exit" << endl;
        cout << "========================================" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        // ==============================
        // OPTION 1: CHECK SNACK
        // ==============================

        if (choice == 1)
        {
            string snackName;
            bool found = false;

            cout << "\nEnter the snack you want to check: ";
            getline(cin, snackName);

            snackName = toLowerCase(snackName);

            for (int i = 0; i < totalSnacks; i++)
            {
                if (snackName == snacks[i].name)
                {
                    cout << "\n----------------------------------------" << endl;
                    cout << "Snack: " << snacks[i].name << endl;
                    cout << "Common allergens: "
                         << snacks[i].allergens << endl;
                    cout << "----------------------------------------" << endl;

                    if (snacks[i].allergens == "none")
                    {
                        cout << "No common allergens are listed." << endl;
                    }
                    else
                    {
                        cout << "WARNING: This snack contains common allergens."
                             << endl;
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "\nSnack not found in the database." << endl;
                cout << "Please check the spelling or try another snack."
                     << endl;
            }
        }

        // ==============================
        // OPTION 2: SHOW ALL SNACKS
        // ==============================

        else if (choice == 2)
        {
            cout << "\n========================================" << endl;
            cout << "          ALL AVAILABLE SNACKS" << endl;
            cout << "========================================" << endl;

            for (int i = 0; i < totalSnacks; i++)
            {
                cout << i + 1 << ". "
                     << snacks[i].name << endl;
            }

            cout << "\nTotal snacks in database: "
                 << totalSnacks << endl;
        }

        // ==============================
        // OPTION 3: SEARCH BY ALLERGEN
        // ==============================

        else if (choice == 3)
        {
            string allergen;
            bool found = false;

            cout << "\nEnter an allergen to search for: ";
            getline(cin, allergen);

            allergen = toLowerCase(allergen);

            cout << "\nSnacks containing: " << allergen << endl;
            cout << "----------------------------------------" << endl;

            for (int i = 0; i < totalSnacks; i++)
            {
                if (snacks[i].allergens.find(allergen) != string::npos)
                {
                    cout << "- " << snacks[i].name << endl;
                    found = true;
                }
            }

            if (!found)
            {
                cout << "No snacks containing this allergen were found."
                     << endl;
            }
        }

        // ==============================
        // OPTION 4: EXIT
        // ==============================

        else if (choice == 4)
        {
            cout << "\nThank you for using the Snack Allergen Checker!"
                 << endl;
        }

        // ==============================
        // INVALID CHOICE
        // ==============================

        else
        {
            cout << "\nInvalid choice." << endl;
            cout << "Please enter 1, 2, 3 or 4." << endl;
        }

    } while (choice != 4);

    return 0;
}
