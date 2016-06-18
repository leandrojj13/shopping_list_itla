#ifndef ITEMS_H
#define ITEMS_H
#include<stdlib.h>
#include<string>


namespace Gestor_Compras{
    class Items
    {

        private:
            void addItem();
            Items* _next;
            std::string _name;
            int _amount;
        public:
            Items(std::string name, int amount);
            std::string getName(){return _name;}
            int getAmount(){return _amount;}

            void setNext(Items* item){_next = item;}
            Items* getNext(){return _next;};
            int amount = 0;

    };
}
#endif // ITEMS_H
