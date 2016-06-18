#include "Menu.h"

namespace Gestor_Compras{


   void Init::mainMenu(){
        clean;
        cout << "\n\n\t\t\t\t\t\tWelcome to VMeta Shopping List Manager " << "\n\n\n\t\t\t\t\t\t";
        cout <<" \n\n\n\t\t\t\t\t 1. List Items \n\t\t\t\t\t 2. Add new item \n\t\t\t\t\t 3. Delete item  \n\t\t\t\t\t 4. Exit \n\n\n \t\t\t\t\t"<< error << "Choose an option: ";

        string optionChoose = "";

        cin >> optionChoose;

        if(optionChoose == "1"){
             iteratorOfItemsList();
        }else if(optionChoose == "2"){
            addingItem();
        }else if(optionChoose == "3"){
            removeItemOfList();
        }else if(optionChoose == "4"){
            system("EXIT");
        }else{
            error = "Try again with a option's -> ";
            clean;
            mainMenu();
        }
   }

    void Init::removeItemOfList(){
        Items* item = itemsList->getFirst();
        int b = 1;
        clean;
         cout << "\n\n\t\t\t\t\t\t Mode item delete " << "\n\n\n";
          cout <<"\n\t\t\t\tIf you want go to the main menu write = 'return'\n\n";
        while(item != NULL)
        {
            cout << " "<<b << ". " << item->getName() << " (" <<item->getAmount() << ") \n"<< endl;
            item = item ->getNext();
            b++;
        }
        if(b <= 1){
            cout << "\n\n\t\t\t\t\t There aren't items for show! " << "\n\n\n";
           cout << "\n--Press Enter for return to the main menu--";
                cin.ignore();
                cin.get();
                mainMenu();
        }else{

             string eraserIndex = "";

             cout << "\n\n\t\t\t\t Write the number of the item for remove:  ";
             cin >> eraserIndex;

            if(eraserIndex == "return"){
                mainMenu();
            }else{
                itemsList->removeItem(atoi(eraserIndex.c_str()));

                removeItemOfList();
            }

        }

    }

    void  Init::iteratorOfItemsList()
    {
        Items* i = itemsList->getFirst();
        int b = 1;
        clean;
         cout << "\n\n\t\t\t\t\t\t All my items " << "\n\n\n\t\t\t\t\t\t";
        while(i != NULL)
        {
            cout << " "<<b << ". " << i->getName() << " (" <<i->getAmount() << ") \n"<< endl;
            i = i ->getNext();
            b++;
        }
        if(b <= 1){
            cout << "\n\n\t\t\t\t\t There aren't items for show! " << "\n\n\n";
        }
        cout << "\n--Press Enter for return to the main menu--";
        cin.ignore();
        cin.get();
        mainMenu();
    }

   void Init::addingItem(){
        clean;

        cout << "\n\n\t\t\t\t\t\t Adding a new item " << "\n\n\n";
        cout << " Enter the name of the article: ";

        string nameItem = "";
        string amountItem = "a";

        cin >> nameItem;

        string statement = "\n\n Enter the amount of ";
        //while (atoi(amountItem.c_str()) == 0){
             cout << statement << nameItem << " : ";

             cin >> amountItem;

             statement = "\n\n Try again, enter a valid amount of ";

        //}

        itemsList->add(new Items(nameItem, atoi(amountItem.c_str())));
        cout << "\n\n\n\n--The items was add. Press Enter for return to the main menu--";
        cin.ignore();
        cin.get();
        mainMenu();
   }


   void Init::execute(){
        mainMenu();
   }
}
