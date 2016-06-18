#include "Element.h"
#include "Menu.h"

namespace Gestor_Compras{

	ItemsList::ItemsList() :  _first(NULL) , _last(NULL)
	{

	}

	void ItemsList::add(Items* item){
        if(_first == NULL){
            _first = item;
            _last = item;
        }else{
            _last -> setNext(item);
            _last = item;
        }
	}

	void ItemsList::removeItem(int index)
	{
		int i = 1;
		Items* iteratorForList = _first;
        Items* anterior = NULL;
		while(iteratorForList != NULL)
		{
            if(iteratorForList == _first){
               _first  =  iteratorForList->getNext();
                 break;
            }
			if (i == index)
			{
                anterior->setNext(iteratorForList->getNext());
                break;
			}else
			{anterior = iteratorForList;
				iteratorForList = iteratorForList->getNext();
				i++;
			}
		}

	}
}
