#include <iostream>
using namespace std;

int main() {
    int order,quantity,currency,meal_price,total_bill;
    float new_bill;
    cout<<"-----------------------------"<<endl;
    cout<<"--------- MENU BAR ----------"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"1. Chicken Kahri"<<endl;
    cout<<"2. Chicken Handi"<<endl;
    cout<<"3. Baryani"<<endl;
    cout<<"4. Beef"<<endl;
    cout<<"5. Mutton"<<endl;
    cout<<"Enter a code of dish which you want to order (e.g: '3' for Baryani )";
    cin>>order;
    if (order == 1){
        cout<<"...You selected Chicken Kahri..."<<endl;
    }
    else if (order == 2){
        cout<<"...You selected Chicken Handi..."<<endl;
    }
    else if (order == 3){
        cout<<"...You selected Baryani..."<<endl;
    }
    else if (order == 4){
        cout<<"...You selected Beef..."<<endl;
    }
    else if (order == 5){
        cout<<"...You selected Mutton..."<<endl;
    }
    else{
        cout<<"Invalid code Try again"<<endl;\
        exit(0);
    }

    cout<<"What would be the quantity of meal in kilogram"<<endl;
    cin>>quantity;
    if(quantity < 0){
        cout<<"Invalid quantity"<<endl;
        exit(0);
    }

    cout<<"--- Choose Currency in which you want to pay ---"<<endl;
    cout<<"1. Pakistani Ruppes"<<endl;
    cout<<"2. Euro"<<endl;
    cout<<"3. Dollar"<<endl;

    cout<<"Enter your code for currency : ";
    cin>>currency;

    // if(currency==2){
    //     new_bill=total_bill*321.18;
    //     cout<<"Total bill in euro is : "<<new_bill<<endl;
    // }
    // else if (currency ==3){
    //     new_bill=total_bill*279.13;
    //     cout<<"Total bill in Dollar is : "<<new_bill<<endl;
    // }


    if(order == 1){
        int chicken_kahri=800;
        meal_price=quantity*chicken_kahri;
        cout<<"--Chicken Kahri price without sale taxes is : "<<meal_price<<"--"<<endl;
        if(meal_price<1000){
            cout<<"Sale tax on your order is 0"<<endl;
            total_bill=meal_price;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
        else if (meal_price>1000 && meal_price <3000){
            int sale=meal_price*0.02;
            cout<<"Sale tax on your order is "<<sale<<endl;
            total_bill=meal_price+sale;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
        else if (meal_price>3000){
            int sale=meal_price*0.05;
            cout<<"Sale tax on your order is "<<sale<<endl;
            total_bill=meal_price+sale;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }

    }
    else if (order ==2){
        int chicken_handi=500;
        meal_price=quantity*chicken_handi;
        cout<<"--Chicken Handi price without sale taxes is : "<<meal_price<<"--"<<endl;
         if(meal_price<1000){
            cout<<"Sale tax on your order is 0"<<endl;
            total_bill=meal_price;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
        else if (meal_price>1000 && meal_price <3000){
            int sale=meal_price*0.02;
            cout<<"Sale tax on your order is "<<sale<<endl;
            total_bill=meal_price+sale;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
        else if (meal_price>3000){
            int sale=meal_price*0.05;
            cout<<"Sale tax on your order is "<<sale<<endl;
            total_bill=meal_price+sale;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
    }
    else if (order == 3){
        int baryani=1200;
        meal_price=quantity*baryani;
        cout<<"--Baryani price without sale taxes is : "<<meal_price<<"--"<<endl;
         if(meal_price<1000){
            cout<<"Sale tax on your order is 0"<<endl;
            total_bill=meal_price;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
        else if (meal_price>1000 && meal_price <3000){
            int sale=meal_price*0.02;
            cout<<"Sale tax on your order is "<<sale<<endl;
            total_bill=meal_price+sale;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
        else if (meal_price>3000){
            int sale=meal_price*0.05;
            cout<<"Sale tax on your order is "<<sale<<endl;
            total_bill=meal_price+sale;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
    }
    else if (order ==4){
        int beef=2000;
        cout<<"--Beef price without taxes is "<<meal_price<<"--"<<endl;
         if(meal_price<1000){
            cout<<"Sale tax on your order is 0"<<endl;
            total_bill=meal_price;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
        else if (meal_price>1000 && meal_price <3000){
            int sale=meal_price*0.02;
            cout<<"Sale tax on your order is "<<sale<<endl;
            total_bill=meal_price+sale;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
        else if (meal_price>3000){
            int sale=meal_price*0.05;
            cout<<"Sale tax on your order is "<<sale<<endl;
            total_bill=meal_price+sale;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
    }
    else if (order ==5){
        int mutton=4000;
        meal_price=quantity*mutton;
        cout<<"--Mutton price without taxes is : "<<meal_price<<"--"<<endl;
         if(meal_price<1000){
            cout<<"Sale tax on your order is 0"<<endl;
            total_bill=meal_price;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
        else if (meal_price>1000 && meal_price <3000){
            int sale=meal_price*0.02;
            cout<<"Sale tax on your order is "<<sale<<endl;
            total_bill=meal_price+sale;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
        else if (meal_price>3000){
            int sale=meal_price*0.05;
            cout<<"Sale tax on your order is "<<sale<<endl;
            total_bill=meal_price+sale;
            cout<<"-----Your Total bill is : "<<total_bill<<"-----"<<endl;
        }
    }
    else{
        cout<<"invalid "<<endl;
        exit(0);
    }

      if(currency==2){
        new_bill=total_bill/321.18;
        cout<<"------ Total bill in euro is : "<<new_bill<<" ------"<<endl;
    }
    else if (currency ==3){
        new_bill=total_bill/279.13;
        cout<<"------ Total bill in Dollar is : "<<new_bill<<" ------"<<endl;
    }
}