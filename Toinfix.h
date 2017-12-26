#include<iostream>
#include<stack>
#include<string>
#ifndef TOINFIX_H
#define TOINFIX_H

using namespace std;

class Toinfix
{
    public:
        Toinfix();
        string InfixToPostfix(string expression);
        int HasHigherPrecedence(char operator1, char operator2);
        bool IsOperator(char );
        bool IsOperand(char );

};

#endif // TOINFIX_H
