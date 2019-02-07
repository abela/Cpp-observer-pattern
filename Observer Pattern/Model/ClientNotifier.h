//
//  CustomData.hpp
//  Observer Pattern
//
//  Created by Giorgi Abelashvili on 2/7/19.
//  Copyright © 2019 Giorgi Abelashvili. All rights reserved.
//

#ifndef CustomData_hpp
#define CustomData_hpp

#include <stdio.h>
#include "INotifier.h"
#include "IObserver.h"
#include <vector>

// concrete implementation of INotifier - client notifier class
class ClientNotifier : public INotifier {

private:
    std::vector <IObserver*> observers;
public:
    void registerObserver(IObserver *observer) override;
    void removeObserver(IObserver *observer) override;
    void notifyObservers(float customDataVariable) override;
};

#endif /* CustomData_hpp */
