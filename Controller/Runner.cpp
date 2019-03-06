//
//  Runner.cpp
//  Vector
//
//  Created by Fleck, Zachary on 3/6/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

int main()
{
    // Controller app;
    //app.start();
    
    //pointer version
    Controller * app = new Controller();
    app -> start();
    return 0;
}
