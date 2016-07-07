//
//  main.cpp
//  CharToInt
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    int i = 0;
    
    while (i < 26) {
        cout << char('a' + i) << "\t" << int('a' + i) << "\n";
        ++i;
    }
}
