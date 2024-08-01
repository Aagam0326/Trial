#include <iostream>
using namespace std;

class shop
{
public:
    struct milkProducts
    {
        struct milk
        {
            int regularMilk;
            int condensedMilk;
            int powderedMilk;
            int butterMilk;
            int babyMilkPowder;
        }milk;

        struct butter
        {
            int butter;
            int ghee;
        }butter;
        
        struct cream
        {
            int singleCream;
            int doubleCream;
            int whippedCream;
        }cream;
        
        struct cheese
        {
            int cheddarCheese;
            int mozzarellaCheese;
            int paneerCheese;
        }cheese;
        
        struct Frozen
        {
            int iceCream;
            int iceMilk;
            int frozenCustard;
            int frozenYogurt;
        }frozen;  
    };

    struct milkProducts stocks,sold,order;

    //    void addStock(struct milkProducts &order);
    //    void displayStocks(struct milkProducts &stk);
    //    void inputStocks(int &stocks,int &sold)
    //    void placeOrder();
    //    void clearStruct(struct milkProducts &stk);
    //    void searchStock(struct milkProducts &stk);

    shop()
    {
        cout << "Product List" << endl;
        cout << "Milk Products \t\t Frozen Products \t Cream Products \t Cheese Products \t Butter Products" << endl << endl;
        cout << "Regular milk \t\t Ice cream \t\t Single Cream \t\t Cheddar Cheese \t Butter" << endl;
        cout << "Condensed milk \t\t Ice Milk \t\t Double Cream \t\t Mozzarella Cheese \t Ghee" << endl;
        cout << "Powdered milk \t\t Frozen Custard \t Whipped Cream \t\t Paneer Cheese " << endl;
        cout << "Buttermilk \t\t Frozen Yogurt " << endl;
        cout << "Baby milk powder" << endl;
    }

    void clearStruct(struct milkProducts &stk)
    {
        stk.milk.regularMilk = 0;
        stk.milk.condensedMilk = 0;
        stk.milk.powderedMilk = 0;
        stk.milk.butterMilk = 0;
        stk.milk.babyMilkPowder = 0;

        stk.butter.butter = 0;
        stk.butter.ghee = 0;

        stk.cream.singleCream = 0;
        stk.cream.doubleCream = 0;
        stk.cream.whippedCream = 0;

        stk.cheese.cheddarCheese = 0;
        stk.cheese.mozzarellaCheese = 0;
        stk.cheese.paneerCheese = 0;

        stk.frozen.iceCream = 0;
        stk.frozen.iceMilk = 0;
        stk.frozen.frozenCustard = 0;
        stk.frozen.frozenYogurt = 0;
    }

    shop(struct milkProducts &stk)
    {
        cout << endl << "Enter the available stock:-" << endl << endl;

            cout << "1. Milk Products:" << endl;
                
            cout << "\ta) Regular Milk (1L/packet) = ";
            cin >> stk.milk.regularMilk;

            cout << "\tb) Condensed Milk (500mL/packet) = ";
            cin >> stk.milk.condensedMilk;

            cout << "\tc) Powdered Milk (200g/packet) = ";
            cin >> stk.milk.powderedMilk;

            cout << "\td) Butter Milk (1L/packet) = ";
            cin >> stk.milk.butterMilk;

            cout << "\te) Baby Milk Powder (250g/packet) = ";
            cin >> stk.milk.babyMilkPowder;

        cout << endl << endl;

            cout << "2. Butter Products:" << endl;
                
            cout << "\ta) Butter (150g/packet) = ";
            cin >> stk.butter.butter;

            cout << "\tb) Ghee (500mL/packet) = ";
            cin >> stk.butter.ghee;

        cout << endl << endl;

            cout << "3. Cream Products:" << endl;
                
            cout << "\ta) Single Cream (250g/packet) = ";
            cin >> stk.cream.singleCream;

            cout << "\tb) Double Cream (250g/packet) = ";
            cin >> stk.cream.doubleCream;

            cout << "\tc) Whipped Cream (200g/packet) = ";
            cin >> stk.cream.whippedCream;

        cout << endl << endl;

            cout << "4. Cheese Products:" << endl;
                
            cout << "\ta) Cheddar Cheese (250g/packet) = ";
            cin >> stk.cheese.cheddarCheese;

            cout << "\tb) Mozzarella Cheese (250g/packet) = ";
            cin >> stk.cheese.mozzarellaCheese;

            cout << "\tc) Paneer Cheese (250g/packet) = ";
            cin >> stk.cheese.paneerCheese;

        cout << endl << endl;

            cout << "5. Frozen Products:" << endl;
                
            cout << "\ta) Ice-cream (1L/packet) = ";
            cin >> stk.frozen.iceCream;

            cout << "\tb) Ice-Milk (1L/packet) = ";
            cin >> stk.frozen.iceMilk;

            cout << "\tc) Frozen Custard (250g/packet) = ";
            cin >> stk.frozen.frozenCustard;

            cout << "\td) Frozen Yogurt (150ml/packet) = ";
            cin >> stk.frozen.frozenYogurt;
        
        cout << endl;

    }
    
    void displayStocks(struct milkProducts &stk)
    {
            cout << "1. Milk Products:" << endl;
                
            cout << "\ta) Regular Milk (1L/packet) = "
                 << stk.milk.regularMilk
                 << endl;

            cout << "\tb) Condensed Milk (500mL/packet) = "
                 << stk.milk.condensedMilk
                 << endl;

            cout << "\tc) Powdered Milk (200g/packet) = "
                 << stk.milk.powderedMilk
                 << endl;

            cout << "\td) Butter Milk (1L/packet) = "
                 << stk.milk.butterMilk
                 << endl;

            cout << "\te) Baby Milk Powder (250g/packet) = "
                 << stk.milk.babyMilkPowder
                 << endl;

        cout << endl << endl;

            cout << "2. Butter Products:" << endl;
                
            cout << "\ta) Butter (150g/packet) = "
                 << stk.butter.butter
                 << endl;

            cout << "\tb) Ghee (500mL/packet) = "
                 << stk.butter.ghee
                 << endl;

        cout << endl << endl;

            cout << "3. Cream Products:" << endl;
                
            cout << "\ta) Single Cream (250g/packet) = "
                 << stk.cream.singleCream
                 << endl;

            cout << "\tb) Double Cream (250g/packet) = "
                 << stk.cream.doubleCream
                 << endl;

            cout << "\tc) Whipped Cream (200g/packet) = "
                 << stk.cream.whippedCream
                 << endl;

        cout << endl << endl;

            cout << "4. Cheese Products:" << endl;
                
            cout << "\ta) Cheddar Cheese (250g/packet) = "
                 << stk.cheese.cheddarCheese
                 << endl;

            cout << "\tb) Mozzarella Cheese (250g/packet) = "
                 << stk.cheese.mozzarellaCheese
                 << endl;

            cout << "\tc) Paneer Cheese (250g/packet) = "
                 << stk.cheese.paneerCheese
                 << endl;

        cout << endl << endl;

            cout << "5. Frozen Products:" << endl;
                
            cout << "\ta) Ice-cream (1L/packet) = "
                 << stk.frozen.iceCream
                 << endl;

            cout << "\tb) Ice-Milk (1L/packet) = "
                 << stk.frozen.iceMilk
                 << endl;

            cout << "\tc) Frozen Custard (250g/packet) = "
                 << stk.frozen.frozenCustard
                 << endl;

            cout << "\td) Frozen Yogurt (150ml/packet) = "
                 << stk.frozen.frozenYogurt
                 << endl;
    }

    void inputStocks(int &stocks,int &sold)
    {
        int amt;
        cout << "Enter the amount: ";
        cin >> amt;

        if (amt <= stocks)
        {
            sold += amt;
            stocks -= amt;
        }
        else
        {
            cout << "The entered amount is more than available in stock";
            cout << endl << "Stock Available: " << stocks;
            amt = stocks;
            sold += amt;
            stocks -= amt;
        }
    }
    
    void placeOrder()
    {
        string choice;
        int amt;
        int ch1, ch2, ch3, ch4, ch5, ch6;
        int ex1 = 1, ex2 = 1, ex3 = 1, ex4 =1, ex5 = 1, ex6 = 1;
        cout << endl << "" << endl;
        while (ex1 != 0)
        {
            cout << endl;
            cout << "Enter < milk >   - for Milk Products" << endl;
            cout << "Enter < butter > - for Butter Products" << endl;
            cout << "Enter < cream >  - for Cream Products" << endl;
            cout << "Enter < cheese > - for Cheese Products" << endl;
            cout << "Enter < frozen > - for Frozen Products" << endl;
            cout << "Enter < exit >   - to Exit" << endl;
            cout << endl << "Enter Your Choice: ";
            cin >> choice;


            if (choice == "milk")
            {
                while (ex2 != 0)
                {
                    cout << endl;
                    cout << "Press <1> for Regular Milk (1L/packet)" << endl;
                    cout << "Press <2> for Condensed Milk (500mL/packet)" << endl;
                    cout << "Press <3> for Powdered Milk (200g/packet)" << endl;
                    cout << "Press <4> for Butter Milk (1L/packet)" << endl;
                    cout << "Press <5> for Baby Milk Powder (250g/packet)" << endl;
                    cout << "Press <0> to Exit" << endl;
                    cout << endl << "Enter Your Choice: ";
                    cin >> ch1;
                    
                    switch (ch1)
                    {
                        case 1:
                            inputStocks(stocks.milk.regularMilk, sold.milk.regularMilk);
                            break;
                        
                        case 2:
                            inputStocks(stocks.milk.condensedMilk, sold.milk.condensedMilk);
                            break;
                        
                        case 3:
                            inputStocks(stocks.milk.powderedMilk, sold.milk.powderedMilk);
                            break;
                        
                        case 4:
                            inputStocks(stocks.milk.butterMilk, sold.milk.butterMilk);
                            break;
                        
                        case 5:
                            inputStocks(stocks.milk.babyMilkPowder, sold.milk.babyMilkPowder);
                            break;
                        
                        case 0:
                            ex2 = 0;
                            break;
                        
                        default:
                            cout << endl;
                            cout << "Please enter a valid choice";
                            cout << endl;
                            break;
                    }
                }
                ex2 = 1;
            }


            else if (choice == "butter") 
            {
                while (ex3 != 0)
                {
                    cout << endl;
                    cout << "Press <1> for Butter (150g/packet)" << endl;
                    cout << "Press <2> for Ghee (500mL/packet)" << endl;
                    cout << "Press <0> to Exit" << endl;
                    cout << endl << "Enter Your Choice: ";
                    cin >> ch2;

                    switch (ch2)
                    {
                        case 1:
                            inputStocks(stocks.butter.butter, sold.butter.butter);
                            break;
                        
                        case 2:
                            inputStocks(stocks.butter.ghee, sold.butter.ghee);
                            break;
                        
                        case 0:
                            ex3 = 0;
                            break;
                        
                        default:
                            cout << endl;
                            cout << "Please enter a valid choice";
                            cout << endl;
                            break;
                    }
                }
                ex3 = 1;
            }
            
            else if (choice == "cream") 
            {
                while (ex4 != 0)
                {
                    cout << endl;
                    cout << "Press <1> for Single Cream (250g/packet)" << endl;
                    cout << "Press <2> for Double Cream (250g/packet)" << endl;
                    cout << "Press <3> for Whipped Cream (200g/packet)" << endl;
                    cout << "Press <0> to Exit" << endl;
                    cout << endl << "Enter Your Choice: ";
                    cin >> ch3;

                    switch (ch3)
                    {
                        case 1:
                            inputStocks(stocks.cream.singleCream, sold.cream.singleCream);
                            break;
                        
                        case 2:
                            inputStocks(stocks.cream.doubleCream, sold.cream.doubleCream);
                            break;
                        
                        case 3:
                            inputStocks(stocks.cream.whippedCream, sold.cream.whippedCream);
                            break;
                        
                        case 0:
                            ex4 = 0;
                            break;
                        
                        default:
                            cout << endl;
                            cout << "Please enter a valid choice";
                            cout << endl;
                            break;
                    }
                }
                ex4 = 1;
            }
            
            else if (choice == "cheese") 
            {
                while (ex5 != 0)
                {
                    cout << endl;
                    cout << "Press <1> for Cheedar Cheese (250g/packet)" << endl;
                    cout << "Press <2> for Mozzarella Cheese (250g/packet)" << endl;
                    cout << "Press <3> for Paneer Cheese (250g/packet)" << endl;
                    cout << "Press <0> to Exit" << endl;
                    cout << endl << "Enter Your Choice: ";
                    cin >> ch4;

                    switch (ch4)
                    {
                        case 1:
                            inputStocks(stocks.cheese.cheddarCheese, sold.cheese.cheddarCheese);
                            break;
                        
                        case 2:
                            inputStocks(stocks.cheese.mozzarellaCheese, sold.cheese.mozzarellaCheese);
                            break;
                        
                        case 3:
                            inputStocks(stocks.cheese.paneerCheese, sold.cheese.paneerCheese);
                            break;
                        
                        case 0:
                            ex5 = 0;
                            break;
                        
                        default:
                            cout << endl;
                            cout << "Please enter a valid choice";
                            cout << endl;
                            break;
                    }
                }
                ex5 = 1;
            }
            
            else if (choice == "frozen") 
            {
                while (ex6 != 0)
                {
                    cout << endl;
                    cout << "Press <1> for Ice-cream (1L/packet)" << endl;
                    cout << "Press <2> for Ice-milk (1L/packet)" << endl;
                    cout << "Press <3> for Frozen Custard (250g/packet)" << endl;
                    cout << "Press <4> for Frozen Yogurt (150ml/packet)" << endl;
                    cout << "Press <0> to Exit" << endl;
                    cout << endl << "Enter Your Choice: ";
                    cin >> ch5;

                    switch (ch5)
                    {
                        case 1:
                            inputStocks(stocks.frozen.iceCream, sold.frozen.iceCream);
                            break;
                        
                        case 2:
                            inputStocks(stocks.frozen.iceMilk, sold.frozen.iceMilk);
                            break;
                        
                        case 3:
                            inputStocks(stocks.frozen.frozenCustard, sold.frozen.frozenCustard);
                            break;
                        
                        case 4:
                            inputStocks(stocks.frozen.frozenYogurt, sold.frozen.frozenYogurt);
                            break;

                        case 0:
                            ex6 = 0;
                            break;
                        
                        default:
                            cout << endl;
                            cout << "Please enter a valid choice";
                            cout << endl;
                            break;
                    }
                }
                ex6 = 1;
            }
            
            else if (choice == "exit") 
            {
                ex1 = 0;
                break;
            }

            else 
            {
                cout << endl;
                cout << "Please enter a valid choice";
                cout << endl;
                break;
            }

        }
        
   }

    void addStock(shop &obj)
    {
        int amt;
        cout << endl;
        cout << "Enter the available stock:-" << endl;

            cout << "1. Milk Products:" << endl;
                
            cout << "\ta) Regular Milk (1L/packet) = ";
            cin >> amt;
            obj.stocks.milk.regularMilk += amt;

            cout << "\tb) Condensed Milk (500mL/packet) = ";
            cin >> amt;
            obj.stocks.milk.condensedMilk += amt;

            cout << "\tc) Powdered Milk (250g/packet) = ";
            cin >> amt;
            obj.stocks.milk.powderedMilk += amt;

            cout << "\td) Butter Milk (1L/packet) = ";
            cin >> amt;
            obj.stocks.milk.butterMilk += amt;

            cout << "\te) Baby Milk Powder (250g/packet) = ";
            cin >> amt;
            obj.stocks.milk.babyMilkPowder += amt;

        cout << endl << endl;

            cout << "2. Butter Products:" << endl;
                
            cout << "\ta) Butter (150g/packet) = ";
            cin >> amt;
            obj.stocks.butter.butter += amt;

            cout << "\tb) Ghee (500mL/packet) = ";
            cin >> amt;
            obj.stocks.butter.ghee += amt;

        cout << endl << endl;

            cout << "3. Cream Products:" << endl;
                
            cout << "\ta) Single Cream (250g/packet) = ";
            cin >> amt;
            obj.stocks.cream.singleCream += amt;

            cout << "\tb) Double Cream (250g/packet) = ";
            cin >> amt;
            obj.stocks.cream.doubleCream += amt;

            cout << "\tc) Whipped Cream (200g/packet) = ";
            cin >> amt;
            obj.stocks.cream.whippedCream += amt;

        cout << endl << endl;

            cout << "4. Cheese Products:" << endl;
                
            cout << "\ta) Cheddar Cheese (250g/packet) = ";
            cin >> amt;
            obj.stocks.cheese.cheddarCheese += amt;

            cout << "\tb) Mozzarella Cheese (250g/packet) = ";
            cin >> amt;
            obj.stocks.cheese.mozzarellaCheese += amt;

            cout << "\tc) Paneer Cheese (250g/packet) = ";
            cin >> amt;
            obj.stocks.cheese.paneerCheese += amt;

        cout << endl << endl;

            cout << "5. Frozen Products:" << endl;
                
            cout << "\ta) Ice-cream (1L/packet) = ";
            cin >> amt;
            obj.stocks.frozen.iceCream += amt;

            cout << "\tb) Ice-Milk (1L/packet) = ";
            cin >> amt;
            obj.stocks.frozen.iceMilk += amt;

            cout << "\tc) Frozen Custard (250g/packet) = ";
            cin >> amt;
            obj.stocks.frozen.frozenCustard += amt;

            cout << "\td) Frozen Yogurt (150ml/packet) = ";
            cin >> amt;
            obj.stocks.frozen.frozenYogurt += amt;
    }

    void searchStock(struct milkProducts &stk)
    {
        string search;
        int exit = 1;
        

        while (exit != 0)
        {
            cout << "Product List" << endl;
            shop();
            cout << endl << "enter < exit >  - to exit";
            cout << endl << "Enter the Product Name: ";
            cin >> search;

            if (search == "Regular Milk")
            {
                cout << endl << "Amount :" << stk.milk.regularMilk << endl;
            }

            else if (search == "Condensed Milk")
            {
                cout << endl << "Amount :" << stk.milk.condensedMilk << endl;
            }

            else if (search == "Powdered Milk")
            {
                cout << endl << "Amount :" << stk.milk.powderedMilk << endl;
            }
            
            else if (search == "Butter Milk")
            {
                cout << endl << "Amount :" << stk.milk.butterMilk << endl;
            }
            
            else if (search == "Baby Milk Powder")
            {
                cout << endl << "Amount :" << stk.milk.babyMilkPowder << endl;
            }

            else if (search == "Butter")
            {
                cout << endl << "Amount :" << stk.butter.butter << endl;
            }
            
            else if (search == "Ghee")
            {
                cout << endl << "Amount :" << stk.butter.ghee << endl;
            }

            else if (search == "Single Cream")
            {
                cout << endl << "Amount :" << stk.cream.singleCream << endl;
            }

            else if (search == "Double Cream")
            {
                cout << endl << "Amount :" << stk.cream.doubleCream << endl;
            }
            
            else if (search == "Whipped Cream")
            {
                cout << endl << "Amount :" << stk.cream.whippedCream << endl;
            }

            else if (search == "Cheddar Cheese")
            {
                cout << endl << "Amount :" << stk.cheese.cheddarCheese << endl;
            }

            else if (search == "Mozzarella Cheese")
            {
                cout << endl << "Amount :" << stk.cheese.mozzarellaCheese << endl;
            }
            
            else if (search == "Paneer Cheese")
            {
                cout << endl << "Amount :" << stk.cheese.paneerCheese << endl;
            }

            else if (search == "Ice-Cream")
            {
                cout << endl << "Amount :" << stk.frozen.iceCream << endl;
            }

            else if (search == "Ice-Milk")
            {
                cout << endl << "Amount :" << stk.frozen.iceMilk << endl;
            }
            
            else if (search == "Frozen Custard")
            {
                cout << endl << "Amount :" << stk.frozen.frozenCustard << endl;
            }

            else if (search == "Frozen Yogurt")
            {
                cout << endl << "Amount :" << stk.frozen.frozenYogurt << endl;
            }

            else if (search == "exit")
            {
                exit = 0;
                cout << endl;
            }

            else
            {
                cout << "Please Enter a valid product name";
            }
        }
    }

    ~shop()
    {
        cout << "Destructor Called" << endl;
    }

};

int main()
{
    int choice1, exit1 = 1;

    shop dairyStore;
    dairyStore.clearStruct(dairyStore.stocks);
    dairyStore.clearStruct(dairyStore.sold);
    dairyStore.clearStruct(dairyStore.order);
    shop(dairyStore.stocks);

    while (exit1 != 0)
    {
        cout << endl;
        cout << "Press <1> to Display stock" << endl;
        cout << "Press <2> to Add new Stock" << endl;
        cout << "Press <3> to Place order" << endl;
        cout << "Press <4> to Display sold products" << endl;
        cout << "Press <5> to Search stock" << endl;
        cout << "Press <6> to Search sold products" << endl;
        cout << "Press <0> to Exit" << endl;

        cout << endl << "Enter Your Choice: ";
        cin >> choice1;
        
        switch (choice1)
        {
            case 1:
                cout << "------------------------Available stock------------------------" << endl;
                dairyStore.displayStocks(dairyStore.stocks);
                break;
            
            case 2:
                cout << "------------------------Add new Stock------------------------" << endl << endl;
                dairyStore.addStock(dairyStore);
                break;
            
            case 3:
                cout << "------------------------Place Order------------------------" << endl << endl;
                dairyStore.placeOrder();
                break;
            
            case 4:
                cout << "------------------------Products sold------------------------" << endl << endl;
                dairyStore.displayStocks(dairyStore.sold);
                break;
            
            case 5:
                cout << "------------------------Search Product------------------------" << endl << endl;
                dairyStore.searchStock(dairyStore.stocks);
                break;
            
            case 6:
                cout << "------------------------Search sold products------------------------" << endl << endl;
                dairyStore.searchStock(dairyStore.sold);
                break;
            
            case 0:
                exit1 = 0;
                dairyStore.~shop();
                cout << "Program exited successfully" << endl;
                break;
            
            default:
                break;
        }
    }

    return 0;
}