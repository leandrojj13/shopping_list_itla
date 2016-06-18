#ifndef INIT_H_INCLUDED
#define INIT_H_INCLUDED

#include <iostream>
#include<stdlib.h>
#include "List.h"
#define clean system("cls");

using namespace std;

namespace Gestor_Compras{
    class Init
    {
        private:
            string error = "";
            void mainMenu();
            void iteratorOfItemsList();
            void addingItem();
            void removeItemOfList();
        public:
            void execute();
            ItemsList* itemsList = new ItemsList();


    };
}


#endif // INIT_H_INCLUDED
