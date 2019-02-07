//
//  Observer.hpp
//  Observer Pattern
//
//  Created by Giorgi Abelashvili on 2/7/19.
//  Copyright © 2019 Giorgi Abelashvili. All rights reserved.
//

#ifndef ISubject_h
#define ISubject_h

#include <stdio.h>
#include "IObserver.h"

// Notifier which manages observer registration, removing and notifying
class INotifier {
    
public:
    virtual void registerObserver(IObserver *observer) = 0;
    virtual void removeObserver(IObserver *observer) = 0;
    virtual void notifyObservers(float customDataVariable) = 0;
};

#endif
