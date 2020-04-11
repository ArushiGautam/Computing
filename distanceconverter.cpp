//
//  distanceconverter.cpp
//  Computing
//
//  Created by Arushi Gautam on 4/10/20.
//  Copyright © 2020 Arushi Gautam. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    // define the data types
    double miles;
    double km;
    double ft;
    //km represents kilometers, ft represents feet
    
    //ask the user how many miles they want to convert
    cout<<"please input the amount of miles you want to convert: \n";
    cin >> miles;
    
    //convert miles to kilometers and feet
    km = miles * 1.609;
    ft = miles * 5280;
    
    //print the answer
    cout << "this converts to \"" << km << " kilometers\" or \"" <<ft<< " feet\"\n";
    
    return 0;
}

