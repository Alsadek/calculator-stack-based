#include<iostream>
#include<stack>
#include<string>
#include <sstream>
#include <cstdlib>
#include"Toinfix.h"

using namespace std;

int main()
{
	string expression;
	cout<<"Enter Infix Expression \n";
	getline(cin,expression);
    Toinfix exp;

	string postfix = exp.InfixToPostfix(expression);
    cout << postfix<< endl ;
    stack <int> mysatck;

    for(int i = 0; i < postfix.length(); i ++){
        if( exp.IsOperand(postfix[i]) )  {
               char c = postfix[i];
               int x = c - '0';
               mysatck.push(x);
        }

        else if ( postfix[i] == '+' ){
            char a = mysatck.top();
            mysatck.pop();
            char b = mysatck.top();
            mysatck.pop();
            char z = a+b;
            mysatck.push(z);
        }
        else if ( postfix[i] == '-' ){
            int a = mysatck.top();
            mysatck.pop();
            int b = mysatck.top();
            mysatck.pop();
            int z = b-a;
            mysatck.push(z);
        }
        else if ( postfix[i] == '*' ){
            int a = mysatck.top();
            mysatck.pop();
            int b = mysatck.top();
            mysatck.pop();
            int z = a*b;
            mysatck.push(z);
        }
        else if ( postfix[i] == '/' ){
            int a = mysatck.top();
            mysatck.pop();
            int b = mysatck.top();
            mysatck.pop();
            float z = b/a;
            mysatck.push(z);
        }

    }
    cout << mysatck.top();
}
