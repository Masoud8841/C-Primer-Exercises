#include "Sales_item_7_32.h"
void Sales_item::print_item() const
    {
            cout<< isbn<<" "<< units_sold<<" "<< revenue << endl;
            if(units_sold>0){
                cout<< "average price: "<< revenue/units_sold << endl;
            }
    }
