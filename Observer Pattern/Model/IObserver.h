//
//  IObserver.h
//  Observer Pattern
//
//  Created by Giorgi Abelashvili on 2/7/19.
//  Copyright © 2019 Giorgi Abelashvili. All rights reserved.
//

#ifndef IObserver_h
#define IObserver_h

class IObserver {
public:
    virtual void update(float customDataVariable) = 0;
};

#endif /* IObserver_h */
