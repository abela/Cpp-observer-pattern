//
//  main.cpp
//  Observer Pattern
//
//  Created by Giorgi Abelashvili on 2/7/19.
//  Copyright © 2019 Giorgi Abelashvili. All rights reserved.
//

#include <iostream>
#include "ClientObserver/ClientObserver.h"
#include "Model/ClientNotifier.h"

int main(int argc, const char * argv[])
{
    //
    // create some data, thsi data will notify upcoming clients
    ClientNotifier clientNotifier;
    // create test clients
    ClientObserver client1(12313), client2(45456), client3(97987);
    //
    // register some observers on these clients
    clientNotifier.registerObserver(&client1);
    clientNotifier.registerObserver(&client2);
    clientNotifier.registerObserver(&client3);
    //
    // create some data variable and notify clients
    float someNewDataVariable = 100;
    clientNotifier.notifyObservers(someNewDataVariable);
    //
    // remove some of the clients from observer list
    clientNotifier.removeObserver(&client2);
    //
    std::cout<<"||===============================||"<<std::endl;
    //
    // reset new parameter
    someNewDataVariable = 200;
    // notify again
    clientNotifier.notifyObservers(someNewDataVariable);
    //
    return 0;
}
