//
//  Menu.h
//  Project_1_BrandonSerrano
//
//  Created by BRANDON SERRANO on 2/20/17.
//  Copyright © 2017 Trendsverse. All rights reserved.
//

#ifndef Menu_h
#define Menu_h
#include <ctime>
#include <iostream>
#include <unistd.h>
using namespace std;
void Menu();
void Time();
void stupidTest();
void Grade();
class Menu
{
    
private:
    Menu();
    
};

void Menu()
{
    int selection;
    
  
    
        cout << "         \n\n  Main Menu\n";
        cout << "  ====================================\n";
        cout << "  1.  UTC/Local Time and Date \n\n";
        cout << "  2.  Stupid Test (Check to see if you're stupid or smart)\n\n";
        cout << "  3.  Grade Input\n\n";
        cout << "  4.  Exit" << endl;
        cout << "  ====================================\n";
        cout << "  Enter your selection: ";
        cin >> selection;
        cout << endl;
        
        switch (selection)
        {
            case 1: Time();
                Menu();
            break;
                
        case 2:
                stupidTest();
            break;
        case 3:
                Grade();
                Menu();
            break;
        case 4:
                cout << "Thank-You, Have a Nice Day. \n\nGood-Bye!\n" << endl;
                exit(0);
            break;

        default: break;
        }

}
void Time( )
{
    
    time_t now = time(0);
    
    
    char* dt = ctime(&now);
    
    cout << "\n\nThe LOCAL date and time is: " << dt << endl;
    
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "\n\nThe UTC date and time is:"<< dt << endl;
}
void stupidTest()
{
    char TestName[20];
    int ConfirmName;
    
    
    
    
    cout << "===========================================================\n" << endl;
    cout << "Welcome To The Stupid Test..." << endl;
    cout << "===========================================================\n" << endl;
    cout << "The object of the test is to see if you're smart or stupid?" << endl;
    cout << "\n\nPlease Wait..." << endl;
    cout << "\n\n\n Do You Wish To Take The Test?" << endl;
    sleep(3);
    cout << "\n\n To Continue Through The Test Press Enter Button..." << endl;
    cin.ignore();
    sleep(2);
    cout << "\n\nTo Accept Press Enter  " << endl;
    cin.ignore();
    cout << "\n\nQuestion #1: \n What's Your Name?\n" << endl;
    cin >> TestName;
    
    cin.ignore();
    cout << "\n\n Is " << TestName << " your name?" <<endl;
    cout << "\n1) YES" << endl;
    cout << "\n2) NO" << endl;
    cout << "\n3) BACK TO MENU" << endl;
    cout << "\n4) QUIT" << endl;
    cin >> ConfirmName;
    switch (ConfirmName)
    {
        case 1:
            cout << "Congrats! You Are Smart Enough To Know Your Name!!!\n I Would Applaud You, But I Really Don't Care." << endl;
            
            break;
            
        case 2:
            cout << "Congrats! You Don't Know Your Name, You Failed The First Question...\n\n" << endl;
            cout << "I feel very sorry for you, Let Me Just Put You Out Of Your Misery!\n\n" << endl;
            exit(0);
            break;
       
        case 3:
                Menu();
            
            break;
     
        case 4:
            cout << "Thank-You For Wasting My Time, Have a Nice Day... NOT! \n\nGood-Bye!\n" << endl;
            exit(0);
            break;
            
        default:
            break;
    }

    
}

void Grade()
{
    int x;
    bool continueYN = true;
    
    while (continueYN)
    {
        cout << "Enter grade: ";
        cin >> x;
        
        
        if ( x >= 90 )
        {
            cout << "Your grade is an A, Congrats! \n";
        }
        else if ( x >= 80  )
        {
            cout << "Your grade is a B! You're Almost At An A, Kepp Up The Good Work. \n";
        }
        else if ( x >= 70  )
        {
            cout << "Your grade is a C! It's Average.\n";
        }
        else if ( x >= 60  )
        {
            cout << "Your grade is a D! You're Endanger of Failing! \n";
        }
        else
        {
            cout << "Your grade is an F! You Failed! \n";
        }
        
        int YN;
        
        cout <<  "Would you like to Enter new grade? 1 for Yes, 2 for No" << endl;
        cin >> YN;
        
        if (YN == 2)
            
            continueYN = false;
    }
    



}




#endif /* Menu_h */