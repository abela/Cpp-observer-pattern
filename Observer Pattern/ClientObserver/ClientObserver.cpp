//
//  ClientObserver.cpp
//  Observer Pattern
//
//  Created by Giorgi Abelashvili on 2/7/19.
//  Copyright © 2019 Giorgi Abelashvili. All rights reserved.
//

#include "ClientObserver.h"
#include <iostream>

ClientObserver::ClientObserver(int clientDataVariable)
{
    this->clientDataVariable = clientDataVariable;
}
ClientObserver::~ClientObserver()
{
    
}

void ClientObserver::update(float param)
{
    std::cout<<"incoming updated parameter for client "<<clientDataVariable<<" = "<<param<<std::endl;
}

void ClientObserver::printData()
{
    std::cout<<"new client's parameter = "<<clientDataVariable<<std::endl;
}
