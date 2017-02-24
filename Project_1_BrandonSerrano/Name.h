//
//  Name.h
//  Project_1_BrandonSerrano
//
//  Created by BRANDON SERRANO on 2/19/17.
//  Copyright © 2017 Trendsverse. All rights reserved.
//

#ifndef Name_h
#define Name_h
#include <unistd.h>
using namespace std;
void Name();

class Name
{

public:
    Name(char);
   
};
void Name()
{
    
    char userName[20];
    cout << "What is your name?" << endl;
    cin >> userName;
    cout << "\nHello " << userName << endl;
    sleep(2);
    cout << "\nHow may I help you " << userName << " ?" << endl;
}

#endif
