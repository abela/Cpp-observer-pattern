//
//  ClientObserver.hpp
//  Observer Pattern
//
//  Created by Giorgi Abelashvili on 2/7/19.
//  Copyright © 2019 Giorgi Abelashvili. All rights reserved.
//

#ifndef ClientObserver_hpp
#define ClientObserver_hpp

#include <stdio.h>
#include "IObserver.h"

// some concret implementation of observer subclass
class ClientObserver : public IObserver {
    
    float clientDataVariable;
    
public:
    
    void update(float param) override;
    void printData();
    ClientObserver(int clientDataVariable);
    ~ClientObserver();
};

#endif /* ClientObserver_hpp */
