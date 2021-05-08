//
// Created by leosa on 08/05/2021.
//
#include<iostream>
#include<sstream>

using namespace std;
#ifndef MY_PROJECT_NAME_IRECEIPTSENDER_H
#define MY_PROJECT_NAME_IRECEIPTSENDER_H


class IPaymentSender
{
public:
    virtual std::string sendPayment() = 0;
};


#endif //MY_PROJECT_NAME_IRECEIPTSENDER_H
