#ifndef ITEMSLIST_H_INCLUDED
#define ITEMSLIST_H_INCLUDED
#include <cstdlib>
#include <string>
#include "Element.h"
namespace Gestor_Compras{
    class ItemsList
    {

        private:
            Items* _first;
            Items* _last;

        public:
            void add(Items* item);
            Items* getFirst()  {	return _first;	}
            void removeItem(int index);
            ItemsList();

    };
}

#endif // ITEMSLIST_H_INCLUDED
