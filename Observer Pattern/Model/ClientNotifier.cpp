//
//  CustomData.cpp
//  Observer Pattern
//
//  Created by Giorgi Abelashvili on 2/7/19.
//  Copyright © 2019 Giorgi Abelashvili. All rights reserved.
//

#include "ClientNotifier.h"

// add observer to observers list
void ClientNotifier::registerObserver(IObserver *observer)
{
    observers.push_back(observer);
}

// iterate through the observers and erease concrete observer
void ClientNotifier::removeObserver(IObserver *observer)
{
    auto iterator = std::find(observers.begin(), observers.end(), observer);
    
    if (iterator != observers.end())
    {
        observers.erase(iterator);
    }
}

// iterate through the observers and notify them
void ClientNotifier::notifyObservers(float customDataVariable)
{
    for(IObserver *observer : observers)
    {
        observer->update(customDataVariable);
    }
}
