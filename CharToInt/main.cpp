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
    for (int i = 0; i < 26; ++i) {
        cout << char('a' + i) << "\t" << int('a' + i) << "\n";
    }
}
