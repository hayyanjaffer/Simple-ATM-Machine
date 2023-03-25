#include <iostream>
using namespace std;

void showMenu(){
    cout << "******Menu******" << endl;
    cout << "1.Check Balance" << endl;
    cout << "2.Deposit Money" << endl;
    cout << "3.Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "************" << endl;
}



int main() {
   // Functionality our ATM machine would have
   // check balance, deposit, withdraw, show menu
    // Now we will take an input in order to select an option
    int option;
    double balance = 1000;
    do{
    showMenu();// Just declaring the function
    cout << "Option" << endl;
    cin >> option;
    // in order to make our programme look good 
    system("cls");
    // so now I have to handle the 3 options above and we can do this       by using switch and break statment
    switch(option){
        case 1 : cout << "Balance is : " << balance << " $"<< endl;          break;
        case 2 : cout << "Deposit amount :";
        // we will declare a variable for deposit amount
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount; // because our total balance would           be the addistion of our deposit amount as well 
        break;
        case 3 : cout << "Withdraw Amount :";
        double withdrawAmount;
        cin >> withdrawAmount;
        // but in this case as we can see that our withdraw amount              should always be less than or equal to our balance amount              hence we need a if else statement
        if(withdrawAmount <= balance)
            balance -= withdrawAmount;
        else
            cout << "Not enough Money";
        break;
        // so now as we can see that our Programme ends or              stops at a particular programme hence we need loop in          order to continue it.
        
        
    }   
    }
        while(option!= 4);

    
    
    
}